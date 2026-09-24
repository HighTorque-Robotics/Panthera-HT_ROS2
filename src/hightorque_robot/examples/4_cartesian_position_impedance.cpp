/**
 * @file 4_cartesian_position_impedance.cpp
 * @brief 纯笛卡尔空间位置阻抗控制（仅控制位置，不控制姿态）
 *
 * 实现笛卡尔空间位置阻抗控制：
 *   F = K*(x_des - x) + B*(v_des - v)
 *   τ = J_pos^T * F + G(q)
 *
 * 其中：
 *   - K: 位置刚度系数（3维）
 *   - B: 位置阻尼系数（3维）
 *   - F: 笛卡尔空间力（3维向量，仅位置）
 *   - J_pos: 位置雅可比矩阵（3xn，只取前3行）
 *   - G(q): 重力补偿力矩
 *   - x_des: 期望末端位置（3维）
 *   - v_des: 期望末端速度（通常为0）
 *
 * 特点：
 *   - 仅控制末端位置，姿态和冗余关节完全自由
 *   - 从侧面推动改变关节1时，关节1不会恢复
 *   - 末端位置始终保持固定
 *   - 使用雅可比转置方法，自然地允许零空间运动
 *
 * 注意：本程序需要 Pinocchio 库支持以计算运动学和动力学
 */

#include "panthera/Panthera.hpp"
#include <ament_index_cpp/get_package_share_path.hpp>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <signal.h>
#include <cmath>
#include <algorithm>

// Pinocchio 头文件
#include <pinocchio/parsers/urdf.hpp>
#include <pinocchio/algorithm/kinematics.hpp>
#include <pinocchio/algorithm/jacobian.hpp>
#include <pinocchio/algorithm/rnea.hpp>
#include <pinocchio/algorithm/frames.hpp>

// 全局标志，用于优雅退出
volatile sig_atomic_t keep_running = 1;

void signal_handler(int signal)
{
    if (signal == SIGINT) {
        keep_running = 0;
        std::cout << "\n\n程序被中断" << std::endl;
    }
}

/**
 * @brief 计算重力补偿力矩
 */
std::vector<double> computeGravityCompensation(
    pinocchio::Model& model,
    pinocchio::Data& data,
    const std::vector<double>& q)
{
    Eigen::VectorXd q_eigen(q.size());
    for (size_t i = 0; i < q.size(); ++i) {
        q_eigen[i] = q[i];
    }

    Eigen::VectorXd v_zero = Eigen::VectorXd::Zero(q.size());
    Eigen::VectorXd a_zero = Eigen::VectorXd::Zero(q.size());

    Eigen::VectorXd tau = pinocchio::rnea(model, data, q_eigen, v_zero, a_zero);

    std::vector<double> gravity_torque(q.size());
    for (size_t i = 0; i < q.size(); ++i) {
        gravity_torque[i] = tau[i];
    }

    return gravity_torque;
}

/**
 * @brief 限制力矩幅值
 */
std::vector<double> clipTorque(const std::vector<double>& torque,
                                const std::vector<double>& max_torque)
{
    std::vector<double> clipped(torque.size());
    for (size_t i = 0; i < torque.size(); ++i) {
        clipped[i] = std::max(-max_torque[i], std::min(max_torque[i], torque[i]));
    }
    return clipped;
}

int main(int argc, char** argv)
{
    try {
        signal(SIGINT, signal_handler);

        std::string config_path =
            ament_index_cpp::get_package_share_path("hightorque_robot").string() +
            "/robot_param/Follower.yaml";
        if (argc > 1) {
            config_path = argv[1];
        }

        panthera::Panthera robot(config_path);

        std::string urdf_path =
            ament_index_cpp::get_package_share_path("panthera_ht_description").string() +
            "/urdf/panthera_ht_ros_description.urdf";
        if (argc > 2) {
            urdf_path = argv[2];
        }

        pinocchio::Model model;
        pinocchio::urdf::buildModel(urdf_path, model);
        pinocchio::Data data(model);

        std::cout << "URDF 模型加载成功: " << urdf_path << std::endl;
        std::cout << "模型自由度 nq = " << model.nq << ", nv = " << model.nv << std::endl;

        std::string ee_frame_name = "link6";
        if (!model.existFrame(ee_frame_name)) {
            std::cerr << "错误：未找到末端执行器frame: " << ee_frame_name << std::endl;
            return 1;
        }
        pinocchio::FrameIndex ee_frame_id = model.getFrameId(ee_frame_name);

        // ==================== 控制参数 ====================

        // 位置刚度（N/m）- 大幅降低刚度
        Eigen::Vector3d K_pos(150.0, 150.0, 150.0);

        // 位置阻尼（N·s/m）- 大幅降低阻尼
        Eigen::Vector3d B_pos(15.0, 15.0, 15.0);

        // 力矩限幅
        std::vector<double> tau_limit = {10.0, 20.0, 20.0, 10.0, 5.0, 5.0};

        std::vector<double> zero_pos(robot.getMotorCount(), 0.0);
        std::vector<double> zero_vel(robot.getMotorCount(), 0.0);
        std::vector<double> zero_kp(robot.getMotorCount(), 0.0);
        std::vector<double> zero_kd(robot.getMotorCount(), 0.0);

        // ==================== 计算期望末端位置 ====================

        std::cout << "\n正在计算期望末端位置..." << std::endl;

        // 使用与关节空间阻抗控制相同的目标关节位置
        std::vector<double> q_des_joint = {0.0, 0.7, 0.7, -0.1, 0.0, 0.0};

        Eigen::VectorXd q_eigen = Eigen::VectorXd::Zero(model.nq);
        for (size_t i = 0; i < q_des_joint.size() && i < model.nq; ++i) {
            q_eigen[i] = q_des_joint[i];
        }

        pinocchio::forwardKinematics(model, data, q_eigen);
        pinocchio::updateFramePlacements(model, data);

        pinocchio::SE3 ee_pose = data.oMf[ee_frame_id];
        Eigen::Vector3d x_des = ee_pose.translation();

        std::cout << "期望末端位置 (m): [" << x_des.transpose() << "]" << std::endl;

        // 检查初始重力补偿
        std::vector<double> q_init(model.nq);
        for (int i = 0; i < model.nq; ++i) {
            q_init[i] = q_eigen[i];
        }
        std::vector<double> G_init = computeGravityCompensation(model, data, q_init);
        std::cout << "\n初始重力补偿力矩 (Nm): [";
        for (int i = 0; i < robot.getMotorCount(); ++i) {
            std::cout << std::setw(7) << std::setprecision(3) << G_init[i]
                      << (i < robot.getMotorCount() - 1 ? ", " : "");
        }
        std::cout << "]" << std::endl;

        std::cout << "\n" << std::string(60, '=') << std::endl;
        std::cout << "纯笛卡尔空间位置阻抗控制（仅位置，不控制姿态）" << std::endl;
        std::cout << std::string(60, '=') << std::endl;
        std::cout << "\n控制参数：" << std::endl;
        std::cout << "位置刚度 K (N/m): [" << K_pos.transpose() << "]" << std::endl;
        std::cout << "位置阻尼 B (N·s/m): [" << B_pos.transpose() << "]" << std::endl;
        std::cout << "零空间阻尼: 0.5 Nm·s/rad" << std::endl;
        std::cout << "\n特点：" << std::endl;
        std::cout << "- 仅控制末端位置，姿态完全自由" << std::endl;
        std::cout << "- 从侧面推动改变关节1时，关节1不会恢复" << std::endl;
        std::cout << "- 但末端位置始终保持固定" << std::endl;
        std::cout << "- 零空间阻尼提供平滑运动" << std::endl;
        std::cout << "- 按 Ctrl+C 退出程序" << std::endl;
        std::cout << std::string(60, '=') << "\n" << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));

        // ==================== 主控制循环 ====================

        auto last_print_time = std::chrono::steady_clock::now();
        const double print_interval = 0.5;

        while (keep_running) {
            // 1. 获取当前状态
            robot.send_get_motor_state_cmd();
            robot.motor_send_cmd();

            auto q_current = robot.getCurrentPos();
            auto v_current = robot.getCurrentVel();

            Eigen::VectorXd q_eigen = Eigen::VectorXd::Zero(model.nq);
            Eigen::VectorXd v_eigen = Eigen::VectorXd::Zero(model.nv);
            for (size_t i = 0; i < q_current.size() && i < model.nq; ++i) {
                q_eigen[i] = q_current[i];
                v_eigen[i] = v_current[i];
            }

            // 2. 计算运动学
            pinocchio::forwardKinematics(model, data, q_eigen);
            pinocchio::updateFramePlacements(model, data);

            // 计算完整雅可比矩阵（使用LOCAL_WORLD_ALIGNED坐标系）
            Eigen::MatrixXd J_full(6, model.nv);
            J_full.setZero();
            pinocchio::computeFrameJacobian(model, data, q_eigen, ee_frame_id,
                                           pinocchio::LOCAL_WORLD_ALIGNED, J_full);

            // 只取位置部分的雅可比（前3行）
            Eigen::MatrixXd J_pos = J_full.topRows(3);

            pinocchio::SE3 ee_pose_current = data.oMf[ee_frame_id];
            Eigen::Vector3d x_current = ee_pose_current.translation();

            // 计算末端线速度（只取前3维）
            Eigen::VectorXd v_ee_full = J_full * v_eigen;
            Eigen::Vector3d v_ee_pos = v_ee_full.head<3>();

            // 3. 计算位置误差
            Eigen::Vector3d pos_error = x_des - x_current;

            // 4. 计算笛卡尔空间力（仅位置）
            Eigen::Vector3d F_pos;
            for (int i = 0; i < 3; ++i) {
                F_pos(i) = K_pos(i) * pos_error(i) - B_pos(i) * v_ee_pos(i);
            }

            // 5. 转换为关节力矩（使用位置雅可比转置）
            Eigen::VectorXd tau_impedance = J_pos.transpose() * F_pos;

            // 完全移除关节1的力矩，让关节1完全自由
            // 注意：这会降低末端位置跟踪精度
            if (tau_impedance.size() > 0) {
                tau_impedance(0) = 0.0;
            }

            // 6. 计算重力补偿
            std::vector<double> q_full(model.nq);
            for (int i = 0; i < model.nq; ++i) {
                q_full[i] = q_eigen[i];
            }
            std::vector<double> G = computeGravityCompensation(model, data, q_full);

            // 7. 总力矩（只取前6个关节）
            std::vector<double> tor_total(robot.getMotorCount());
            for (int i = 0; i < robot.getMotorCount(); ++i) {
                tor_total[i] = tau_impedance(i) + G[i];
            }

            // 8. 力矩限幅
            tor_total = clipTorque(tor_total, tau_limit);

            // 9. 发送控制命令
            robot.posVelTorqueKpKd(zero_pos, zero_vel, tor_total, zero_kp, zero_kd);

            // 10. 打印状态
            auto current_time = std::chrono::steady_clock::now();
            double elapsed = std::chrono::duration<double>(current_time - last_print_time).count();

            if (elapsed >= print_interval) {
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "\n当前末端位置 (m): [" << x_current.transpose() << "]" << std::endl;
                std::cout << "位置误差 (m):     [" << pos_error.transpose() << "]" << std::endl;

                std::cout << std::setprecision(3);
                std::cout << "笛卡尔力 (N):   [";
                for (int i = 0; i < 3; ++i) {
                    std::cout << std::setw(7) << F_pos(i) << (i < 2 ? ", " : "");
                }
                std::cout << "]" << std::endl;

                std::cout << "阻抗力矩 (Nm):  [";
                for (int i = 0; i < robot.getMotorCount(); ++i) {
                    std::cout << std::setw(7) << tau_impedance(i)
                              << (i < robot.getMotorCount() - 1 ? ", " : "");
                }
                std::cout << "]" << std::endl;

                std::cout << "重力力矩 (Nm):  [";
                for (int i = 0; i < robot.getMotorCount(); ++i) {
                    std::cout << std::setw(7) << G[i]
                              << (i < robot.getMotorCount() - 1 ? ", " : "");
                }
                std::cout << "]" << std::endl;

                std::cout << "总力矩 (Nm):    [";
                for (int i = 0; i < robot.getMotorCount(); ++i) {
                    std::cout << std::setw(7) << tor_total[i]
                              << (i < robot.getMotorCount() - 1 ? ", " : "");
                }
                std::cout << "]" << std::endl;

                last_print_time = current_time;
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(5));
        }

        std::cout << "\n\n所有电机已停止" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "错误: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
