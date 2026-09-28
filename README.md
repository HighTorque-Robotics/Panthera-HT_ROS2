# Panthera-HT ROS 2 Lyrical 工作空间

Panthera-HT 机械臂的 ROS 2 工作空间，面向 Ubuntu 26.04（Resolute）和 ROS 2 Lyrical。项目使用 C++20，仿真使用 Gazebo Sim Jetty（不再使用 Gazebo Classic）。

## 目录

- [工作空间结构](#工作空间结构)
- [环境要求](#环境要求)
- [安装与编译](#安装与编译)
- [通用环境配置](#通用环境配置)
- [运行方式](#运行方式)
- [包说明](#包说明)
- [常见问题](#常见问题)

## 工作空间结构

```text
src/
├── hightorque_robot/          # 底层电机控制 SDK 和示例
├── panthera_moveit_config/    # MoveIt 配置与启动文件
├── panthera_ht_description/   # 机器人 URDF、mesh 描述
├── panthera_hardware/         # ros2_control 实机硬件接口
├── panthera_gazebo/           # Gazebo Sim 仿真配置
├── panthera_bringup/          # 系统级启动文件
├── panthera_moveit_commander/ # MoveIt 运动指令示例
├── panthera_sdk_control/      # 直接 SDK 驱动控制节点
└── panthera_interfaces/       # 自定义消息和服务
```

## 环境要求

- Ubuntu 26.04（Resolute）
- ROS 2 Lyrical
- GCC 15 或 Clang 21（C++20）
- Gazebo Sim Jetty（仅仿真需要）

## 安装与编译

### 1. 获取 ROS 2 与源码

ROS 2 Lyrical 安装方法请参考[官方文档](https://docs.ros.org/en/lyrical/Installation/Ubuntu-Install-Debs.html)。安装后执行：

```bash
source /opt/ros/lyrical/setup.bash
mkdir -p ~/Panthera-HT
git clone -b Lyrical https://github.com/HighTorque-Robotics/Panthera_HT_ROS2.git \
  ~/Panthera-HT/Panthera-HT_ROS2_Lyrical
cd ~/Panthera-HT/Panthera-HT_ROS2_Lyrical
```

### 2. 安装依赖

```bash
# ROS 2、MoveIt、ros2_control 和 Gazebo
sudo apt install -y \
  ros-lyrical-desktop \
  ros-lyrical-moveit \
  ros-lyrical-ros2-control \
  ros-lyrical-ros2-controllers \
  ros-lyrical-ros-gz \
  ros-lyrical-gz-ros2-control \
  ros-lyrical-pinocchio \
  ros-lyrical-xacro

# SDK 与标定 GUI
sudo apt install -y libyaml-cpp-dev libserialport-dev qt6-base-dev
```

使用 `rosdep` 补齐工作空间依赖（首次使用时才需要 `rosdep init`）：

```bash
sudo rosdep init       # 仅首次执行；已初始化可跳过
rosdep update
rosdep install --from-paths src --ignore-src -r -y
```

RealSense 仅用于手眼标定入口；标定 GUI 已完成 Lyrical/Qt6 兼容编译。若 Lyrical 软件源没有 `realsense2_camera` 二进制包，可暂不构建/运行标定链路，或单独构建其 Lyrical 源码版本。不使用标定功能时可跳过两个标定包：

```bash
colcon build --symlink-install \
  --packages-skip moveit_calibration_gui moveit_calibration_plugins \
  --cmake-args -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=OFF \
  -DPython3_EXECUTABLE=/usr/bin/python3
```

### 3. 编译工作空间

```bash
cd ~/Panthera-HT/Panthera-HT_ROS2_Lyrical
source /opt/ros/lyrical/setup.bash
colcon build --symlink-install --cmake-args \
  -DCMAKE_BUILD_TYPE=Release \
  -DPython3_EXECUTABLE=/usr/bin/python3
source install/setup.bash
```

建议将工作空间加入 shell 启动脚本：

```bash
echo "source ~/Panthera-HT/Panthera-HT_ROS2_Lyrical/install/setup.bash" >> ~/.bashrc
```

### 4. 实机串口权限

```bash
ls /dev/ttyACM*
sudo usermod -aG dialout $USER   # 重新登录后生效
```

## 通用环境配置

每个新终端运行 ROS 命令前，只需按以下顺序加载一次环境：

```bash
cd ~/Panthera-HT/Panthera-HT_ROS2_Lyrical
source /opt/ros/lyrical/setup.bash
source install/setup.bash
```

本工作空间使用 ROS 2 Lyrical APT 版 MoveIt；MoveIt 和 RViz 来自 `/opt/ros/lyrical`。可用以下命令检查：

```bash
ros2 pkg prefix rviz2
ros2 pkg prefix moveit_ros_move_group
ros2 pkg prefix moveit_ros_visualization
```

三个路径都应指向 `/opt/ros/lyrical`。不要再 source 其他 MoveIt 源码工作空间，否则可能造成 ABI 混用和 RViz 闪退。以下命令均假设环境已经加载。

### ros2_control 配置

实机和仿真各使用一份控制器配置，不能混用：

| 用途 | 配置文件 | ros2_control 系统 |
| --- | --- | --- |
| 真实机械臂 | `src/panthera_bringup/config/ros2_controllers.yaml` | `panthera_hardware/PantheraHardwareInterface`，连接 SDK 和真实电机 |
| Gazebo 仿真 | `src/panthera_gazebo/config/ros2_controllers.yaml` | `gz_ros2_control`，连接 Gazebo Sim 和虚拟关节 |

两份 YAML 都声明 `joint_state_broadcaster`、`arm_controller` 和 `gripper_controller`。实机配置使用位置/速度接口并关闭仿真时间；仿真配置使用 Gazebo 位置接口并启用仿真时间。

- YAML：负责 `controller_manager` 和控制器参数。
- URDF/Xacro 的 `<ros2_control>`：声明底层硬件系统（实机插件或 Gazebo 插件）。
- `moveit_controllers_*.yaml`：只负责 MoveIt 到控制器的映射。

## 运行方式

### MoveIt 控制真实机械臂

通过 MoveIt 规划轨迹，经 ros2_control 插补后驱动实机，RViz 同步显示：

```bash
ls /dev/ttyACM*   # 确认机械臂已连接
ros2 launch panthera_bringup hardware_moveit_rviz.launch.py
```

启动后在 RViz 的 MotionPlanning 面板拖动交互标记，点击 **Plan & Execute** 执行。

### MIT 重力补偿 + 位置 PD

MIT 模式的控制律为：

```text
tau = gravity(q) + Kp * (q_target - q) + Kd * (dq_target - dq)
```

启动与查看参数：

```bash
ros2 launch panthera_bringup hardware_moveit_rviz_mit.launch.py
ros2 launch panthera_bringup hardware_moveit_rviz_mit.launch.py --show-args
```

默认参数（顺序为 `joint1` 到 `joint6`）：

```text
mit_kp = 12.0,30.0,30.0,6.0,6.0,3.0
mit_kd = 1.5,2.4,2.4,0.6,0.6,0.3
```

也可在启动时覆盖：

```bash
ros2 launch panthera_bringup hardware_moveit_rviz_mit.launch.py \
  mit_kp:="10.0,25.0,25.0,5.0,5.0,2.5" \
  mit_kd:="1.5,2.0,2.0,0.6,0.6,0.3"
```

调参建议：先固定 `Kd`、逐步增加 `Kp`；若抖动、过冲或停止振荡，降低 `Kp` 或增加 `Kd`。每次只调整一组参数，从小幅度变化开始。`mit_kp` 和 `mit_kd` 必须各包含 6 个以英文逗号分隔的数值。

### 纯 MoveIt 仿真

无需硬件，直接运行：

```bash
ros2 launch panthera_moveit_config demo.launch.py
```

### Gazebo Sim + MoveIt

这是已验证的完整 Lyrical 仿真入口，会启动 Gazebo Sim、机器人模型、ros2_control、MoveIt `move_group` 和 RViz，通常需要 15～30 秒：

```bash
ros2 launch panthera_gazebo gazebo_moveit.launch.py
```

另开终端并加载同一环境后检查控制器：

```bash
ros2 control list_controllers
```

确认以下控制器均为 `active`：

```text
joint_state_broadcaster  active
arm_controller           active
gripper_controller       active
```

测试机械臂与夹爪：

```bash
ros2 run panthera_moveit_commander test_moveit    # pose1 -> pose2 -> home
ros2 run panthera_moveit_commander test_gripper   # open -> half_open -> close
```

也可在 RViz 中使用 MotionPlanning 面板规划并执行。停止仿真时回到启动终端按 `Ctrl+C`，等待 Gazebo、MoveIt 和 RViz 完全退出后再重新启动。

仿真细节：使用 Bullet Featherstone 物理引擎；Gazebo 使用包围盒碰撞体以加快启动，MoveIt 仍使用原始 STL 碰撞模型；夹爪速度限制为 0.02 m/s。为避免 Lyrical ResourceManager 的位置限幅破坏夹爪命令，仿真控制器关闭了重复限幅层；轨迹控制器、MoveIt 和 URDF 限位仍然生效。

### 直接 SDK 驱动

`panthera_sdk_control` 不依赖 MoveIt 或 ros2_control，通过 ROS 2 话题和服务直接驱动机械臂，内置 KDL 逆运动学，支持关节空间和笛卡尔空间控制。

启动：

```bash
ros2 launch panthera_sdk_control arm_control.launch.py
```

笛卡尔控制默认以真实夹爪中心 `gripper_center` 为末端参考系，因此 `/move_to_pose` 和 `/end_pose_euler` 表示夹爪中心位姿，而不是 J6 法兰位姿。需要兼容旧程序时可使用 J6 法兰：

```bash
ros2 launch panthera_sdk_control arm_control.launch.py tip_link:=link6
```

#### 状态查询

```bash
ros2 topic echo /joint_states_single --once  # 关节角度（弧度）
ros2 topic echo /arm_status --once          # 使能、故障、夹爪等状态
ros2 topic echo /end_pose_euler --once      # 末端 xyz + rpy（20 Hz）
```

#### 关节空间控制

```bash
# 话题：6 个关节角度，单位 rad
ros2 topic pub --once /arm_joint_cmd example_interfaces/msg/Float64MultiArray \
  "{data: [0.0, 0.8, 0.8, 0.3, 0.0, 0.0]}"

# 服务：支持 0.0～1.0 速度缩放
ros2 service call /move_to_joint panthera_interfaces/srv/MoveToJoint \
  "{joint_angles: [0.0, 0.8, 0.8, 0.3, 0.0, 0.0], velocity_scaling: 0.5}"

# 回零位
ros2 service call /go_zero_srv panthera_interfaces/srv/GoZero "{use_mit_mode: false}"
```

#### 笛卡尔空间控制

```bash
# KDL 逆运动学
ros2 service call /move_to_pose panthera_interfaces/srv/MoveToPose \
  "{x: 0.3, y: 0.0, z: 0.2, roll: 0.0, pitch: 1.57, yaw: 0.0, velocity_scaling: 0.5}"

# 笛卡尔直线（cartesian_path=true，1 cm 步长）
ros2 service call /move_to_pose panthera_interfaces/srv/MoveToPose \
  "{x: 0.3, y: 0.0, z: 0.2, roll: 0.0, pitch: 1.57, yaw: 0.0, cartesian_path: true, velocity_scaling: 0.3}"

# 话题：mode1=0 关节空间规划，mode1=1 笛卡尔直线
ros2 topic pub --once /pos_cmd panthera_interfaces/msg/PosCmd \
  "{x: 0.3, y: 0.0, z: 0.2, roll: 0.0, pitch: 1.57, yaw: 0.0, gripper: 1.0, mode1: 0}"
```

#### 夹爪、使能与安全控制

```bash
# 夹爪话题（true=打开，false=关闭）
ros2 topic pub --once /gripper_cmd example_interfaces/msg/Bool "{data: true}"
ros2 topic pub --once /gripper_cmd example_interfaces/msg/Bool "{data: false}"

# 夹爪服务（open / close / half_open）
ros2 service call /gripper_control panthera_interfaces/srv/GripperControl "{action: 'open'}"
ros2 service call /gripper_control panthera_interfaces/srv/GripperControl "{action: 'close'}"

# 精细夹爪控制（角度 + 力矩）
ros2 service call /gripper_srv panthera_interfaces/srv/GripperSrv \
  "{gripper_angle: 0.5, gripper_effort: 1.0, gripper_code: 0, set_zero: false}"

# 使能/失能
ros2 topic pub --once /enable_flag example_interfaces/msg/Bool "{data: true}"
ros2 topic pub --once /enable_flag example_interfaces/msg/Bool "{data: false}"
ros2 service call /enable_srv panthera_interfaces/srv/Enable "{enable_request: true}"
ros2 service call /enable_srv panthera_interfaces/srv/Enable "{enable_request: false}"

# 急停、复位
ros2 service call /stop_srv std_srvs/srv/Trigger "{}"
ros2 service call /reset_srv std_srvs/srv/Trigger "{}"
```

关节限位（rad）：

| 关节 | 最小值 | 最大值 |
| --- | ---: | ---: |
| joint1 | -2.4 | 2.4 |
| joint2 | 0.0 | 3.2 |
| joint3 | 0.0 | 4.0 |
| joint4 | -1.6 | 1.6 |
| joint5 | -1.7 | 1.7 |
| joint6 | -2.5 | 2.5 |

接口总览：

| 方向 | 名称 | 类型 | 说明 |
| --- | --- | --- | --- |
| 发布 | `/joint_states_single` | `sensor_msgs/JointState` | 关节位置/速度/力矩 |
| 发布 | `/arm_status` | `panthera_interfaces/ArmStatus` | 机械臂状态 |
| 发布 | `/end_pose_euler` | `panthera_interfaces/EndPoseEuler` | 末端 xyz + rpy |
| 订阅 | `/arm_joint_cmd` | `example_interfaces/Float64MultiArray` | 关节角度指令 |
| 订阅 | `/pos_cmd` | `panthera_interfaces/PosCmd` | 笛卡尔位姿和夹爪指令 |
| 订阅 | `/gripper_cmd` | `example_interfaces/Bool` | 夹爪开关 |
| 订阅 | `/enable_flag` | `example_interfaces/Bool` | 使能开关 |
| 服务 | `/move_to_joint` | `panthera_interfaces/MoveToJoint` | 关节空间运动 |
| 服务 | `/move_to_pose` | `panthera_interfaces/MoveToPose` | 笛卡尔空间运动 |
| 服务 | `/gripper_control` | `panthera_interfaces/GripperControl` | 夹爪开合 |
| 服务 | `/gripper_srv` | `panthera_interfaces/GripperSrv` | 夹爪精细控制 |
| 服务 | `/enable_srv` | `panthera_interfaces/Enable` | 使能控制 |
| 服务 | `/go_zero_srv` | `panthera_interfaces/GoZero` | 回零位 |
| 服务 | `/stop_srv` | `std_srvs/Trigger` | 急停 |
| 服务 | `/reset_srv` | `std_srvs/Trigger` | 清错并重新使能 |

### MoveIt 指令示例

先启动 `hardware_moveit_rviz.launch.py`，再在另一个已加载环境的终端运行：

```bash
ros2 run panthera_moveit_commander draw_circle
ros2 run panthera_moveit_commander draw_three_circles
ros2 run panthera_moveit_commander test_gripper
ros2 run panthera_moveit_commander sin_trajectory_control
```

### 底层 SDK 与电机示例

`hightorque_robot` 直接使用底层 SDK，适合通信、控制和电机调试，不经过 MoveIt 或 ros2_control。示例目录：

```text
src/hightorque_robot/examples/                # 整臂控制
src/hightorque_robot/examples/motor_examples/ # 电机级示例
src/hightorque_robot/examples/tools/          # CAN、LCM 和参数工具
```

整臂示例：

| 可执行文件 | 功能 |
| --- | --- |
| `0_robot_get_state` | 读取关节和夹爪的位置、速度、力矩 |
| `0_robot_set_zero` | 设置机械臂零位 |
| `1_PD_control` | 关节 PD 控制 |
| `1_PosVel_control` | 位置-速度-最大力矩控制与夹爪演示 |
| `2_joint_impedance_control` | 关节空间阻抗控制（需 Pinocchio） |
| `3_cartesian_impedance_control` | 笛卡尔阻抗 + 关节 PD（需 Pinocchio） |
| `5_pure_cartesian_impedance_control` | 纯笛卡尔阻抗控制（需 Pinocchio） |
| `3_cartesian_impedance_ab_motion` | 笛卡尔阻抗 A-B 往返运动（需 Pinocchio） |

```bash
ros2 run hightorque_robot 0_robot_get_state
ros2 run hightorque_robot 0_robot_set_zero
ros2 run hightorque_robot 1_PD_control
ros2 run hightorque_robot 1_PosVel_control
ros2 run hightorque_robot 2_joint_impedance_control
ros2 run hightorque_robot 3_cartesian_impedance_control
ros2 run hightorque_robot 5_pure_cartesian_impedance_control
ros2 run hightorque_robot 3_cartesian_impedance_ab_motion
```

电机级示例：

```bash
ros2 run hightorque_robot motor_feedback
ros2 run hightorque_robot motor_run
ros2 run hightorque_robot motor_move_zero
ros2 run hightorque_robot motor_set_zero
ros2 run hightorque_robot canboard_update
ros2 run hightorque_robot parse_demo
```

所有示例均可将配置文件作为第一个参数；不传时默认使用 `Follower.yaml`：

```bash
ros2 run hightorque_robot 0_robot_get_state /path/to/your/config.yaml
```

## 包说明

| 包 | 说明 |
| --- | --- |
| `hightorque_robot` | 底层电机控制 SDK、库和示例 |
| `panthera_moveit_config` | MoveIt 配置、launch、URDF 和控制器映射 |
| `panthera_ht_description` | 机器人 URDF 和 mesh |
| `panthera_hardware` | 连接 SDK 与 ros2_control 的实机硬件插件 |
| `panthera_gazebo` | Gazebo Sim Jetty 仿真配置 |
| `panthera_bringup` | 系统级启动文件 |
| `panthera_moveit_commander` | MoveIt 运动指令示例 |
| `panthera_sdk_control` | 直接 SDK 驱动节点，含 KDL 逆运动学 |
| `panthera_interfaces` | 自定义 ROS 2 消息和服务 |

## 常见问题

| 现象 | 处理方法 |
| --- | --- |
| `colcon build` 找不到 Pinocchio | 安装 `ros-lyrical-pinocchio`。阻抗控制示例和实机硬件插件都需要它。 |
| `ros2 run` 报 `No executable found` | 确认已 `source install/setup.bash`，且工作空间已成功编译。 |
| 串口权限不足或打不开 `/dev/ttyACM*` | 执行 `sudo usermod -aG dialout $USER` 并重新登录；临时调试可使用 `sudo chmod 666 /dev/ttyACM*`。 |
| 找不到 `libserialport` | 安装 `libserialport-dev`。 |
| 编译异常 | 检查工作空间路径是否包含中文字符，并确认只加载了 `/opt/ros/lyrical` 的 MoveIt。 |
