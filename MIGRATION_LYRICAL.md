# ROS 2 Lyrical 迁移说明

## 迁移目标

本工作空间面向 Ubuntu 26.04、ROS 2 Lyrical、C++20 和 Gazebo Sim Jetty。
迁移只修改项目文件，不要求修改系统级 ROS 环境变量。

## 已完成的源码迁移

- 所有自有 C++ 包和内嵌 SDK 使用 CMake 3.22+；C++ 目标使用 C++20。
- `panthera_hardware` 使用 Lyrical 的
  `HardwareComponentInterfaceParams` 初始化接口。
- 硬件状态和命令接口改由 ros2_control 框架创建，插件缓存接口句柄并在
  `read()`/`write()` 中以非阻塞方式访问。
- `ros2_control_node` 通过 `~/robot_description` 订阅机器人描述，不再把
  `robot_description` 当作控制器管理器参数传入。
- Gazebo 默认入口迁移到 `ros_gz_sim`、Gazebo Sim 和
  `gz_ros2_control/GazeboSimSystem`；Classic 文件保留作源码参考，但不安装。
- MoveIt 手眼标定 GUI 从 Qt5 迁移到 Qt6。
- 清理了失效的包名、绝对路径、重复依赖和强制 MongoDB warehouse 依赖。

`moveit_calibration_demos` 自带 `COLCON_IGNORE`，其中的上游旧仿真世界不参与
本工作空间构建；项目实际使用的标定 GUI 和插件已完成 Qt6/C++20 迁移。

## 系统依赖

项目不会修改 `/opt/ros`、`PATH`、`LD_LIBRARY_PATH` 或
`GZ_SIM_SYSTEM_PLUGIN_PATH`。每个终端只需加载标准环境：

```bash
source /opt/ros/lyrical/setup.bash
source ~/ws_moveit/install/setup.bash  # 使用源码编译的 MoveIt 时
source install/setup.bash
```

安装依赖时优先使用 rosdep：

```bash
rosdep install --from-paths src --ignore-src -r -y
```

主要二进制依赖包括 MoveIt、ros2_control、ros2_controllers、xacro、
ros_gz、gz_ros2_control、Pinocchio、Qt6、yaml-cpp 和 libserialport。
RealSense 仅为标定链路所需。

## 构建与验证

建议不要复用 Humble 生成的 `build/` 和 `install/`。可使用独立输出目录
做 Lyrical 验证：

```bash
source /opt/ros/lyrical/setup.bash
colcon --log-base log_lyrical build \
  --build-base build_lyrical \
  --install-base install_lyrical \
  --symlink-install \
  --cmake-args -DCMAKE_BUILD_TYPE=Release \
               -DPython3_EXECUTABLE=/usr/bin/python3
source install_lyrical/setup.bash
```

如果用户目录或 Conda 中另有 Python，保持上述 `Python3_EXECUTABLE` 参数即可，
无需永久修改 `PATH` 或删除其他 Python。Lyrical 的 ROS 构建工具应使用 Ubuntu
26.04 自带的 Python 3.14。

真实机械臂入口：

```bash
ros2 launch panthera_ht_config hardware_moveit_rviz.launch.py
```

Gazebo Sim + MoveIt 入口：

```bash
ros2 launch panthera_gazebo gazebo_moveit.launch.py
```

启动完成后，可在另一个已加载相同三层环境的终端验证运动链路：

```bash
ros2 run panthera_commander test_moveit   # pose1 -> pose2 -> home
ros2 run panthera_commander test_gripper  # open -> half_open -> close
```

Gazebo 采用 Bullet Featherstone 和仿真专用基础碰撞体，MoveIt 保留精确 STL
碰撞模型。`gz_ros2_control` 的位置比例增益显式设为 1.0；仿真中关闭 Lyrical
ResourceManager 有缺陷的重复位置限幅，JTC、MoveIt 与 URDF 限位继续生效。

迁移期间已在 Lyrical 头文件和库上验证 `panthera_interfaces`、
`hightorque_robot`、`panthera_hardware`、`panthera_arm_control` 及配置类包；
其中硬件插件已针对 ros2_control 6.8 完成编译和链接。Gazebo Sim、MoveIt、
ros2_control 的机械臂与夹爪规划执行链路也已通过运行测试。RealSense 标定链路
仍需安装对应依赖后单独验证。

## 迁移后验证边界

构建通过只能证明 API 和依赖兼容。真实机械臂上线前仍需在急停可用的条件下
完成串口、关节方向、限位、控制增益、夹爪换算和控制周期测试。Gazebo 的
物理参数也需要针对 Jetty 重新做运动和稳定性回归。
