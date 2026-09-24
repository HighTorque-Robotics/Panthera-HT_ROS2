#include "rclcpp/rclcpp.hpp"
#include "moveit/move_group_interface/move_group_interface.h"
#include <thread>


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("test_moveit");
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(node);
    std::thread executor_thread([&executor]() { executor.spin(); });

    auto arm = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, "arm");
    arm->setMaxVelocityScalingFactor(1.0);
    arm->setMaxAccelerationScalingFactor(1.0);


    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool all_succeeded = true;
    for (const auto * target : {"pose1", "pose2", "home"}) {
        RCLCPP_INFO(node->get_logger(), "Planning target '%s'", target);
        arm->setStartStateToCurrentState();
        arm->setNamedTarget(target);

        if (arm->plan(plan) != moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_ERROR(node->get_logger(), "Planning target '%s' failed", target);
            all_succeeded = false;
            break;
        }

        if (arm->execute(plan) != moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_ERROR(node->get_logger(), "Executing target '%s' failed", target);
            all_succeeded = false;
            break;
        }
        RCLCPP_INFO(node->get_logger(), "Target '%s' completed", target);
    }

    arm.reset();
    executor.cancel();
    executor_thread.join();
    rclcpp::shutdown();
    return all_succeeded ? 0 : 1;
}
