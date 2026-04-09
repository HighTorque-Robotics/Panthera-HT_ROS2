# Panthera-HT 机械臂 ROS2 Humble 工作空间

## 工作空间结构

```
Panthera_HT_ROS2/src/
  ├── hightorque_robot/              # 底层电机控制 SDK + 机械臂示例
  ├── panthera_ht_config/            # MoveIt 配置包（核心）
  ├── panthera_ht_ros_description/   # 机器人 URDF 描述包
  ├── panthera_hardware/             # ROS2 Control 硬件接口包
  ├── panthera_gazebo/               # Gazebo 仿真包
  ├── panthera_bringup/              # 系统启动包
  ├── panthera_commander/            # MoveIt 指令示例包
  └── panthera_interfaces/           # 自定义消息接口包
```

---

## 环境要求

- Ubuntu 22.04
- ROS2 Humble

---

## 快速部署（新电脑）

### 1. 安装 ROS2 Humble

如果还没装 ROS2，参考官方文档：https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html

安装完成后确保 source 了 ROS2 环境：
```bash
source /opt/ros/humble/setup.bash
```

### 2. 克隆仓库

```bash
cd ~
git clone https://github.com/HighTorque-Robotics/Panthera_HT_ROS2.git
cd Panthera_HT_ROS2
```

### 3. 安装系统依赖

```bash
# ROS2 相关包
sudo apt install -y \
  ros-humble-moveit \
  ros-humble-ros2-control \
  ros-humble-ros2-controllers \
  ros-humble-controller-manager \
  ros-humble-robot-state-publisher \
  ros-humble-rviz2 \
  ros-humble-xacro \
  ros-humble-joint-state-broadcaster \
  ros-humble-joint-trajectory-controller \
  ros-humble-gazebo-ros-pkgs

# 底层 SDK 依赖
sudo apt install -y \
  libyaml-cpp-dev \
  libserialport-dev \
  libeigen3-dev \
  libboost-all-dev \
  liburdfdom-dev
```

### 4. 安装 Pinocchio（阻抗控制示例需要）

```bash
cd /tmp
git clone --recursive https://github.com/stack-of-tasks/pinocchio.git --depth 1
cd pinocchio
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DBUILD_PYTHON_INTERFACE=OFF -DBUILD_TESTING=OFF
make -j$(nproc)
sudo make install
sudo ldconfig
```

### 5. 编译工作空间

```bash
cd ~/Panthera_HT_ROS2
colcon build
source install/setup.bash
```

建议将 source 命令加入 `~/.bashrc`：
```bash
echo "source ~/Panthera_HT_ROS2/install/setup.bash" >> ~/.bashrc
```

### 6. 串口权限设置

连接机械臂后，需要确保串口权限：
```bash
# 查看串口设备
ls /dev/ttyACM*

# 添加当前用户到 dialout 组（需重新登录生效）
sudo usermod -aG dialout $USER
```

---

## 使用方式

### 一、MoveIt 控制真实机械臂

通过 MoveIt 规划轨迹，经 ros2_control 插补后驱动真实机械臂，RViz 同步显示。

```bash
# 确认串口已连接
ls /dev/ttyACM*

source install/setup.bash
ros2 launch panthera_ht_config hardware_moveit_rviz.launch.py
```

启动后在 RViz 中拖动交互标记规划轨迹，点击 Plan & Execute 执行。

### 二、纯仿真演示（无需硬件）

```bash
source install/setup.bash
ros2 launch panthera_ht_config demo.launch.py
```

### 三、Gazebo 仿真 + MoveIt

```bash
source install/setup.bash
ros2 launch panthera_gazebo gazebo_moveit.launch.py
```

### 四、MoveIt 指令示例（panthera_commander）

需先启动 `hardware_moveit_rviz.launch.py`，然后在另一个终端运行：

```bash
source install/setup.bash

# 画圆轨迹
ros2 run panthera_commander draw_circle

# 三平面画圆
ros2 run panthera_commander draw_three_circles

# 夹爪测试
ros2 run panthera_commander test_gripper

# 正弦轨迹
ros2 run panthera_commander sin_trajectory_control
```

### 五、底层 SDK 示例（hightorque_robot）

直接通过底层 SDK 控制机械臂，不经过 ROS2 Control / MoveIt，适合调试和底层开发。

编译时已随 `colcon build` 一起构建，直接用 `ros2 run` 运行：

```bash
source install/setup.bash

# 获取机器人关节状态
# 实时打印 6 个关节和夹爪的位置、速度、力矩，每 0.5 秒刷新一次。
# 用于确认机械臂通信正常和查看当前姿态，Ctrl+C 退出。
ros2 run hightorque_robot 0_robot_get_state

# 设置关节零位
# 将机械臂当前位置设为所有关节的零位参考点，设置后实时显示关节状态。
# 使用前请先将机械臂摆到期望的零位姿态。
ros2 run hightorque_robot 0_robot_set_zero

# PD 关节控制
# 控制律：τ = Kp*(q_des - q) + Kd*(0 - v)，电机内部 PD 控制。
# 机械臂移动到预设关节角度 [0, 0.7, 0.7, -0.1, 0, 0] rad 并保持。
# 每秒打印各关节位置、速度、力矩，Ctrl+C 退出后电机掉电。
ros2 run hightorque_robot 1_PD_control

# 位置速度控制
# 使用位置-速度-最大力矩模式，机械臂依次经过多个预设位置：
# 零位 → 位置2 → 位置1 → 位置2 → 零位，每段运动阻塞等待到位。
# 运动过程中演示夹爪开合。适合验证基本运动功能。
ros2 run hightorque_robot 1_PosVel_control

# 关节空间阻抗控制（需要 Pinocchio）
# 控制律：τ = K*(q_des - q) + B*(0 - v) + G(q)
# 机械臂移动到预设关节角度 [0, 0.7, 0.7, -0.1, 0, 0, 0] rad 后保持。
# 用手推动会感受到弹簧般的回复力，松手后自动回到期望位置。
# 重力补偿 G(q) 使机械臂不会因自重下垂。K 和 B 决定"软硬"手感。
ros2 run hightorque_robot 2_joint_impedance_control

# 笛卡尔空间阻抗控制（但是对关节加了PD控制器）（需要 Pinocchio）
# 控制律：τ = J^T * [K*(x_des - x) - B*v_ee] + G(q)
# 根据固定关节角 [0, 0.7, 0.7, -0.1, 0, 0] 正运动学算出末端期望位姿，
# 机械臂末端保持在该笛卡尔位置。推动末端会偏离，松手后回到原位。
# 位置刚度 200 N/m，姿态刚度 4 Nm/rad，手感较硬。
ros2 run hightorque_robot 3_cartesian_impedance_control

# 纯粹的笛卡尔空间阻抗控制（需要 Pinocchio）
# 控制律：τ = J^T * [K*(x_des - x) - B*v_ee] + G(q)，无关节空间约束
# 启动后取当前末端位姿作为期望位置，末端保持不动。
# 推动末端 → 偏离后松手会回到原位。
# 推动机械臂中间连杆 → 关节会移动但末端尽量保持不动（零空间自由运动）。
# 位置刚度 100 N/m，手感比 3_cartesian 更柔顺。
ros2 run hightorque_robot pure_cartesian_impedance_control

# 笛卡尔阻抗 A-B 点往返运动（需要 Pinocchio）
# 控制律：τ = J^T * [K*(x_des - x) - B*(v_ee - v_des)] + G(q)
# 启动后取当前末端位置为 A 点，手动输入 XYZ 偏移量定义 B 点（建议 0.1~0.2m）。
# 机械臂末端以 0.15 m/s 在 A-B 之间匀速往返运动。
# 运动中保持阻抗特性，可用手推动使其偏离，松手后继续向目标点运动。
ros2 run hightorque_robot cartesian_impedance_ab_motion
```

所有示例支持通过命令行参数指定配置文件：
```bash
ros2 run hightorque_robot 0_robot_get_state /path/to/your/config.yaml
```
不传参数时默认使用 `Follower.yaml`。

### 六、底层电机级示例

用于单电机调试、固件更新等底层操作：

```bash
source install/setup.bash

ros2 run hightorque_robot motor_feedack        # 电机反馈
ros2 run hightorque_robot motor_run            # 电机运行
ros2 run hightorque_robot motor_move_zero      # 电机回零
ros2 run hightorque_robot motor_set_zero       # 设置电机零位
ros2 run hightorque_robot canboard_update      # CAN 板固件更新
ros2 run hightorque_robot parse_demo           # 参数解析示例
```

---

## 包说明

| 包名 | 说明 |
|------|------|
| `hightorque_robot` | 底层电机控制 SDK，提供 C++ 库和示例程序 |
| `panthera_ht_config` | MoveIt 配置包，包含 launch 文件、URDF、控制器配置 |
| `panthera_ht_ros_description` | 机器人 URDF/mesh 描述文件 |
| `panthera_hardware` | ROS2 Control 硬件接口插件，桥接 SDK 和 ros2_control |
| `panthera_gazebo` | Gazebo Classic / Ignition 仿真配置 |
| `panthera_bringup` | 系统级启动文件 |
| `panthera_commander` | MoveIt C++ 运动指令示例（画圆、正弦轨迹等） |
| `panthera_interfaces` | 自定义 ROS2 消息类型（ArmPose.msg） |

---

## 常见问题

**Q: colcon build 报找不到 pinocchio**
A: 阻抗控制相关的 4 个示例需要 Pinocchio 库。没装 Pinocchio 时这些示例会被跳过，其他功能不受影响。按上面"安装 Pinocchio"步骤安装即可。

**Q: ros2 run 报 No executable found**
A: 确保已经 `source install/setup.bash`，并且 `colcon build` 编译成功。

**Q: 串口权限不足 / 打不开 /dev/ttyACM***
A: 执行 `sudo usermod -aG dialout $USER` 后重新登录，或临时用 `sudo chmod 666 /dev/ttyACM*`。

**Q: 编译报 libserialport not found**
A: 执行 `sudo apt install libserialport-dev`。
