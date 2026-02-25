# Panthera-HT 机械臂 ROS2 Humble 工作空间

## 工作空间结构

```
Panthera_HT_ROS2_Humble/src/
  ├── panthera_ht_config/          # MoveIt 配置包（核心）
  ├── panthera_ht_ros_description/ # 机器人 URDF 描述包
  ├── panthera_hardware/           # ROS2 Control 硬件接口包
  ├── panthera_gazebo/             # Gazebo 仿真包
  ├── panthera_bringup/            # 系统启动包
  ├── panthera_commander/          # MoveIt 指令示例包
  ├── panthera_interfaces/         # 自定义消息接口包
  └── srcsrc/                      # 底层 SDK 示例包
```

---

## 环境要求

- Ubuntu 22.04
- ROS2 Humble

### 安装依赖

```bash
sudo apt install \
  ros-humble-moveit \
  ros-humble-ros2-control \
  ros-humble-ros2-controllers \
  ros-humble-controller-manager \
  ros-humble-robot-state-publisher \
  ros-humble-rviz2 \
  ros-humble-xacro \
  ros-humble-joint-state-broadcaster \
  ros-humble-joint-trajectory-controller
```

### 编译

```bash
cd ~/Panthera_HT_ROS2_Humble
colcon build
source install/setup.bash
```

---

## 一、panthera_ht_config — MoveIt 配置包

```
panthera_ht_config/
  ├── launch/
  │   ├── hardware_moveit_rviz.launch.py   # 硬件 + MoveIt + RViz（主要使用）
  │   ├── hardware.launch.py               # 仅硬件接口启动
  │   ├── demo.launch.py                   # 纯仿真演示（无真实硬件）
  │   ├── move_group.launch.py             # MoveIt move_group 节点（硬件）
  │   ├── move_group_sim.launch.py         # MoveIt move_group 节点（仿真）
  │   ├── moveit_rviz.launch.py            # MoveIt RViz 可视化（硬件）
  │   ├── moveit_rviz_sim.launch.py        # MoveIt RViz 可视化（仿真）
  │   ├── rsp.launch.py                    # Robot State Publisher
  │   ├── static_virtual_joint_tfs.launch.py  # 静态虚拟关节 TF
  │   ├── spawn_controllers.launch.py      # 控制器加载
  │   ├── setup_assistant.launch.py        # MoveIt Setup Assistant
  │   └── warehouse_db.launch.py           # MoveIt 数据库
  │
  ├── config/
  │   ├── panthera_ht_ros_description.urdf.xacro        # 机器人 URDF（仿真）
  │   ├── panthera_ht_hardware.urdf.xacro               # 机器人 URDF（硬件）
  │   ├── panthera_ht_ros_description.srdf              # MoveIt 语义描述
  │   ├── panthera_ht_ros_description.ros2_control.xacro  # ROS2 Control 配置（仿真）
  │   ├── panthera_ht_hardware.ros2_control.xacro       # ROS2 Control 配置（硬件）
  │   ├── joint_limits.yaml                             # 关节限制配置
  │   ├── kinematics.yaml                               # 运动学求解器配置
  │   ├── moveit_controllers.yaml                       # MoveIt 控制器配置
  │   ├── moveit.rviz                                   # RViz 可视化配置
  │   ├── ros2_controllers.yaml                         # ROS2 控制器配置（仿真）
  │   ├── ros2_controllers_hardware.yaml                # ROS2 控制器配置（硬件）
  │   ├── pilz_cartesian_limits.yaml                    # Pilz 笛卡尔限制配置
  │   ├── initial_positions.yaml                        # 初始位置配置
  │   └── sensors_3d.yaml                               # 3D 传感器配置
  │
  └── robot_param/
      └── Follower_absolute.yaml           # 机械臂绝对位置参数
```

### 1. 驱动真实机械臂（hardware_moveit_rviz.launch.py）

**功能**：通过 MoveIt 规划轨迹，经 ros2_control 插补后驱动真实机械臂，RViz 与现实同步。

**运行方法**：
```bash
# 1. 检查串口连接
ls /dev/ttyACM*

# 2. 进入工作空间并 source
cd ~/Panthera_HT_ROS2_Humble
source install/setup.bash

# 3. 启动
ros2 launch panthera_ht_config hardware_moveit_rviz.launch.py
```

### 2. 纯仿真演示（demo.launch.py）

**功能**：在 RViz 中进行 MoveIt 轨迹规划演示，无需连接真实硬件。

```bash
source install/setup.bash
ros2 launch panthera_ht_config demo.launch.py
```

---

## 二、panthera_gazebo — Gazebo 仿真包

```
panthera_gazebo/
  ├── launch/
  │   ├── gazebo.launch.py             # Gazebo Ignition 仿真启动
  │   ├── gazebo.launch.xml            # Gazebo Ignition 启动（XML 格式）
  │   ├── gazebo_classic.launch.py     # Gazebo Classic 仿真启动
  │   ├── gazebo_moveit.launch.py      # Gazebo Classic + MoveIt 集成启动
  │   └── gazebo_moveit.launch.xml     # Gazebo + MoveIt 启动（XML 格式）
  │
  ├── config/
  │   ├── gazebo_ros2_control.xacro        # Gazebo Ignition ROS2 Control 配置
  │   ├── gazebo_classic_ros2_control.xacro  # Gazebo Classic ROS2 Control 配置
  │   └── ros2_controllers.yaml            # Gazebo 控制器参数配置
  │
  ├── urdf/
  │   ├── Panthera-HT_gazebo.urdf.xacro         # Gazebo Ignition 机器人描述
  │   ├── Panthera-HT_gazebo_classic.urdf.xacro # Gazebo Classic 机器人描述
  │   ├── gazebo.xacro                           # Gazebo Ignition 插件配置
  │   └── gazebo_classic.xacro                   # Gazebo Classic 插件配置
  │
  └── worlds/
      └── empty.world                  # 空白仿真世界
```

### MoveIt 驱动 Gazebo 仿真机械臂

```bash
# 安装 Gazebo Classic 依赖
sudo apt install ros-humble-gazebo-ros-pkgs

source install/setup.bash
ros2 launch panthera_gazebo gazebo_moveit.launch.py
```

---

## 三、panthera_bringup — 系统启动包

```
panthera_bringup/
  ├── launch/
  │   ├── robot.launch.py    # 完整系统启动（硬件 + MoveIt + RViz）
  │   └── robot.launch.xml   # 完整系统启动（XML 格式）
  └── config/
      └── ros2_controllers.yaml  # 控制器配置
```

```bash
source install/setup.bash
ros2 launch panthera_bringup robot.launch.py
```

---

## 四、panthera_commander — MoveIt 指令示例包

```
panthera_commander/
  ├── src/
  │   ├── commander_template.cpp          # 指令模板（订阅话题控制）
  │   ├── test_moveit.cpp                 # MoveIt 基础测试
  │   ├── test_moveit_by_cartesian.cpp    # 笛卡尔路径规划测试
  │   ├── test_moveit_by_jointspace.cpp   # 关节空间规划测试
  │   ├── test_moveit_by_siyuanshu.cpp    # 四元数姿态规划测试
  │   ├── test_gripper.cpp                # 夹爪控制测试
  │   ├── test_gripper_detailed.cpp       # 夹爪详细控制测试
  │   ├── test_cartesian_from_pose1.cpp   # 从 pose1 出发的笛卡尔路径
  │   ├── draw_circle.cpp                 # 画圆轨迹（XY 平面）
  │   ├── draw_horizontal_vertical_circles.cpp  # 水平+垂直圆轨迹
  │   ├── draw_three_circles.cpp          # 三平面圆轨迹（XY/XZ/YZ）
  │   └── sin_trajectory_moveit.cpp       # 正弦轨迹（MoveIt）
  │
  └── launch/
      ├── commander.launch.xml            # 启动 commander_template 节点
      ├── test_cartesian.launch.xml       # 启动笛卡尔路径测试
      └── test_cartesian_from_pose1.launch.xml  # 启动 pose1 笛卡尔测试
```

**运行示例**（需先启动 `hardware_moveit_rviz.launch.py`）：
```bash
# 画圆
ros2 run panthera_commander draw_circle

# 三平面画圆
ros2 run panthera_commander draw_three_circles

# 夹爪测试
ros2 run panthera_commander test_gripper
```

---

## 五、panthera_interfaces — 自定义消息接口包

```
panthera_interfaces/
  └── msg/
      └── ArmPose.msg    # 机械臂末端位姿消息（x, y, z, roll, pitch, yaw, cartesian_path）
```

---

## 六、srcsrc — 底层 SDK 示例包

```
srcsrc/
  ├── examples/
  │   ├── 0_robot_get_state.cpp              # 获取机器人状态
  │   ├── 0_robot_set_zero.cpp               # 机器人归零
  │   ├── 1_PD_control.cpp                   # PD 控制
  │   ├── 1_PosVel_control.cpp               # 位置速度控制
  │   ├── 2_joint_impedance_control.cpp      # 关节阻抗控制
  │   ├── cartesian_impedance_ab_motion.cpp  # 笛卡尔阻抗 A-B 运动
  │   └── pure_cartesian_impedance_control.cpp  # 笛卡尔阻抗控制
  │
  ├── src/
  │   ├── hardware/      # 硬件接口源码
  │   ├── panthera/      # Panthera 机器人核心源码
  │   ├── crc/           # CRC 校验源码
  │   ├── parse_robot_params.cpp
  │   └── serial_driver.cpp
  │
  └── include/           # 头文件目录
```

### 安装底层 SDK 依赖

```bash
sudo apt install \
  libyaml-cpp-dev \
  libserialport-dev \
  libeigen3-dev \
  libboost-all-dev \
  liburdfdom-dev
```

### 编译底层示例

```bash
cd ~/Panthera_HT_ROS2_Humble/src/srcsrc
mkdir -p build && cd build
cmake ..
make
```

### 运行示例

```bash
# 检查串口
ls /dev/ttyACM*

# 笛卡尔阻抗控制
./pure_cartesian_impedance_control

# A-B 两点间来回运动阻抗控制
./cartesian_impedance_ab_motion

# 关节阻抗控制
./2_joint_impedance_control
```
