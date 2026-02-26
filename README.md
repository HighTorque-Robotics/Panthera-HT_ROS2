# Panthera-HT 机械臂 ROS2 使用文档

---

## 目录

- [1. MoveIt 驱动真实机械臂](#1-moveit-驱动真实机械臂)
- [2. MoveIt 驱动 Gazebo 仿真机械臂](#2-moveit-驱动-gazebo-仿真机械臂)
- [3. 底层驱动例程](#3-底层驱动例程)

---

## 1. MoveIt 驱动真实机械臂

### 包结构

```
with_gripper_config/
├── launch/
│   ├── demo.launch.py                        # MoveIt 演示启动文件
│   ├── hardware.launch.py                    # 硬件接口启动文件
│   ├── hardware_moveit.launch.py             # 硬件 + MoveIt 启动文件
│   ├── hardware_moveit_rviz.launch.py        # 硬件 + MoveIt + RViz 启动文件
│   ├── move_group.launch.py                  # MoveIt move_group 节点启动文件
│   ├── moveit_rviz.launch.py                 # MoveIt RViz 可视化启动文件
│   ├── rsp.launch.py                         # Robot State Publisher 启动文件
│   ├── setup_assistant.launch.py             # MoveIt Setup Assistant 启动文件
│   ├── spawn_controllers.launch.py           # 控制器加载启动文件
│   ├── static_virtual_joint_tfs.launch.py    # 静态虚拟关节 TF 发布启动文件
│   └── warehouse_db.launch.py                # MoveIt 数据库启动文件
│
├── config/
│   ├── Panthera-HT_description.urdf.xacro                  # 机器人 URDF 描述文件（仿真）
│   ├── Panthera-HT_description_hardware.urdf.xacro         # 机器人 URDF 描述文件（硬件）
│   ├── Panthera-HT_description.srdf                        # MoveIt 语义机器人描述文件
│   ├── Panthera-HT_description.ros2_control.xacro          # ROS2 Control 配置（仿真）
│   ├── Panthera-HT_description_hardware.ros2_control.xacro # ROS2 Control 配置（硬件）
│   ├── joint_limits.yaml                     # 关节限制配置
│   ├── kinematics.yaml                       # 运动学求解器配置
│   ├── moveit_controllers.yaml               # MoveIt 控制器配置
│   ├── moveit.rviz                           # RViz 可视化配置文件
│   ├── ros2_controllers.yaml                 # ROS2 控制器配置（仿真）
│   ├── ros2_controllers_hardware.yaml        # ROS2 控制器配置（硬件）
│   ├── pilz_cartesian_limits.yaml            # Pilz 笛卡尔空间限制配置
│   └── initial_positions.yaml                # 初始位置配置
│
├── robot_param/
│   └── Follower_absolute.yaml                # Follower 机械臂绝对位置参数
│
├── CMakeLists.txt
├── package.xml
└── .setup_assistant                          # MoveIt Setup Assistant 配置文件
```

### 环境要求

- Ubuntu 24.04
- ROS2 Jazzy

### 安装依赖

```bash
sudo apt install \
  ros-jazzy-moveit \
  ros-jazzy-ros2-control \
  ros-jazzy-ros2-controllers \
  ros-jazzy-controller-manager \
  ros-jazzy-robot-state-publisher \
  ros-jazzy-rviz2 \
  ros-jazzy-xacro \
  ros-jazzy-joint-state-broadcaster \
  ros-jazzy-joint-trajectory-controller
```

### 示例代码说明

#### 1.1 MoveIt 驱动真实机械臂（`hardware_moveit_rviz.launch.py`）

**功能**：通过 MoveIt 进行轨迹规划，经由 controller 实现轨迹插补，驱动真实机械臂运动，RViz 与现实保持同步。

**运行方法**：

```bash
# 1. 检查串口连接
ls /dev/ttyACM*

# 2. 进入工作空间
cd ~/Panthera_HT_ROS2

# 3. source 环境
source install/setup.bash

# 4. 启动
ros2 launch with_gripper_config hardware_moveit_rviz.launch.py
```

#### 1.2 MoveIt 仅在 RViz 中进行路径规划（`demo.launch.py`）

**功能**：在 RViz 中进行 MoveIt 轨迹规划与可视化，不连接真实硬件。

**运行方法**：

```bash
# 1. 进入工作空间
cd ~/Panthera_HT_ROS2

# 2. source 环境
source install/setup.bash

# 3. 启动
ros2 launch with_gripper_config demo.launch.py
```

---

## 2. MoveIt 驱动 Gazebo 仿真机械臂

### 包结构

```
gripper_gazebo/
├── launch/
│   ├── gazebo.launch.py          # Gazebo 仿真启动文件（核心）
│   ├── gazebo.launch.xml         # Gazebo 启动文件（XML 格式）
│   ├── gazebo_moveit.launch.py   # Gazebo + MoveIt 集成启动文件
│   └── gazebo_moveit.launch.xml  # Gazebo + MoveIt 启动文件（XML 格式）
│
├── config/
│   ├── gazebo_ros2_control.xacro # Gazebo 专用 ROS2 Control 配置
│   └── ros2_controllers.yaml     # Gazebo 控制器参数配置
│
├── urdf/
│   ├── Panthera-HT_gazebo.urdf.xacro  # Gazebo 专用机器人 URDF 描述文件
│   └── gazebo.xacro                   # Gazebo 插件和属性配置
│
├── worlds/
│   └── empty.world               # 空白仿真世界文件
│
├── CMakeLists.txt
└── package.xml
```

### 环境要求

- Ubuntu 24.04
- ROS2 Jazzy

### 安装依赖

```bash
sudo apt install \
  ros-jazzy-moveit \
  ros-jazzy-ros2-control \
  ros-jazzy-ros2-controllers \
  ros-jazzy-controller-manager \
  ros-jazzy-robot-state-publisher \
  ros-jazzy-rviz2 \
  ros-jazzy-xacro \
  ros-jazzy-joint-state-broadcaster \
  ros-jazzy-joint-trajectory-controller
```

### 示例代码说明

#### 2.1 MoveIt 驱动 Gazebo 仿真机械臂（`gazebo_moveit.launch.py`）

**功能**：将 MoveIt 轨迹规划的执行结果发送到 Gazebo 仿真中的机械臂，实现仿真驱动。

**运行方法**：

```bash
# 1. 进入工作空间
cd ~/Panthera_HT_ROS2

# 2. source 环境
source install/setup.bash

# 3. 启动
ros2 launch gripper_gazebo gazebo_moveit.launch.py
```

---

## 3. 底层驱动例程

### 包结构

```
srcsrc/
├── examples/
│   ├── 0_robot_get_state.cpp                # 获取机器人状态
│   ├── 0_robot_set_zero.cpp                 # 机器人归零
│   ├── 1_PD_control.cpp                     # PD 控制
│   ├── 1_PosVel_control.cpp                 # 位置速度控制
│   ├── 2_joint_impedance_control.cpp        # 关节阻抗控制
│   ├── 3_cartesian_impedance_control.cpp    # 笛卡尔阻抗控制
│   ├── cartesian_impedance_ab_motion.cpp    # 笛卡尔阻抗 AB 运动
│   └── pure_cartesian_impedance_control.cpp # 纯笛卡尔阻抗控制
│
├── src/
│   ├── crc/                    # CRC 校验相关源码
│   ├── hardware/               # 硬件接口相关源码
│   ├── panthera/               # Panthera 机器人核心源码
│   ├── parse_robot_params.cpp  # 机器人参数解析
│   └── serial_driver.cpp       # 串口驱动程序
│
├── include/
│   ├── crc/                    # CRC 校验头文件
│   ├── hardware/               # 硬件接口头文件
│   └── panthera/               # Panthera 机器人头文件
│
├── Panthera-HT_description/
│   ├── config/
│   ├── launch/
│   ├── meshes/                 # 3D 网格模型文件（STL）
│   ├── textures/
│   ├── urdf/
│   ├── CMakeLists.txt
│   ├── package.xml
│   └── export.log
│
├── robot_param/
│   └── motor_param/            # 电机参数配置
│
├── msg/
│   └── motor_msg/              # 电机消息定义
│
├── third_part/
│   ├── lcm/                    # LCM 通信库
│   └── serial_cmake/           # 串口通信 CMake 配置
│
└── urdf/
```

### 安装依赖

```bash
sudo apt install \
  libyaml-cpp-dev \
  libserialport-dev \
  libeigen3-dev \
  libboost-all-dev \
  liburdfdom-dev \
  ros-jazzy-pinocchio \
  ros-jazzy-ament-cmake
```

### 编译方法

```bash
cd /ros_ws/src/srcsrc/build
rm -rf *
cmake ..
make
```

### 示例代码说明

#### 3.1 纯笛卡尔空间阻抗控制（`pure_cartesian_impedance_control.cpp`）

**功能**：实现笛卡尔空间的阻抗控制。

**特点**：运行 3 秒后，机械臂记录当前位置作为固定位置，对机械臂施加扰动后体现阻抗特性。

**运行**：

```bash
ls /dev/ttyACM*
./pure_cartesian_impedance_control
```


---

#### 3.2 笛卡尔空间 AB 点往返阻抗控制（`cartesian_impedance_ab_motion.cpp`）

**功能**：机械臂在 A、B 两点间来回运动，实现过程中的阻抗控制。

**特点**：启动 3 秒后记录当前位置为 A 点，终端提示输入相对于 A 的偏移量作为 B 点（一般设为 x 方向偏移 0.3，y/z 方向为 0）。

**运行**：

```bash
ls /dev/ttyACM*
./cartesian_impedance_ab_motion
```

---

#### 3.3 关节空间阻抗控制（`2_joint_impedance_control.cpp`）

**功能**：实现关节空间的阻抗控制。

**特点**：机械臂前往预设位置并固定，施加扰动后会回到原位。

**运行**：

```bash
ls /dev/ttyACM*
./2_joint_impedance_control
```
