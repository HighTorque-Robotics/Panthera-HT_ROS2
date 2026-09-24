# 使用指南

## 编译

在 ROS 2 工作空间中编译：

```bash
cd ~/Panthera-HT/Panthera-HT_ROS2_Lyrical
source /opt/ros/lyrical/setup.bash
colcon build --packages-select hightorque_robot
source install/setup.bash
```

查看包内可执行目标：

```bash
ros2 pkg executables hightorque_robot
```

## 示例分类

- 根目录数字示例：整臂状态读取、零位设置、位置/速度控制和阻抗控制。
- `examples/motor_examples/`：底层电机反馈、运动、回零和零位设置。
- `examples/tools/`：CAN 板操作、LCM 消息订阅和 YAML 参数解析。

统一运行格式：

```bash
ros2 run hightorque_robot <executable>
```

示例程序会实际访问串口或驱动电机；零位设置、运动控制和 CAN 板升级前请确认硬件状态。

## 配置文件

安装空间中的配置位于：

```text
<prefix>/share/hightorque_robot/robot_param/
├── Follower.yaml
├── Leader.yaml
├── Follower_absolute.yaml
└── motor_param/
    ├── 6dof_Panthera_params_follower.yaml
    ├── 6dof_Panthera_params_leader.yaml
    ├── motor_1.yaml
    ├── motor_6.yaml
    └── robot_config.yaml
```

数字整臂示例默认使用 `Follower.yaml`，并支持将自定义配置作为第一个参数传入：

```bash
ros2 run hightorque_robot 1_PD_control /path/to/Follower.yaml
```

底层电机示例使用 `robot_config.yaml`；当前默认入口引用 `motor_1.yaml`，所以默认只配置 ID1。

## 外部 CMake 工程

安装本包后：

```cmake
find_package(hightorque_robot REQUIRED)
add_executable(my_robot_app main.cpp)
target_link_libraries(my_robot_app hightorque_robot::hightorque_robot)
```

## 常见问题

- 找不到串口：确认 `/dev/ttyACM*` 存在且当前用户属于 `dialout` 组。
- 底层示例只显示 ID1：检查 `robot_param/motor_param/robot_config.yaml` 是否引用 `motor_1.yaml`。
- `parse_demo` 支持通过命令行传入配置路径；不传参数时使用安装空间中的整臂 follower 参数文件。
