# hightorque_robot

高擎 Panthera-HT 机械臂的 C++/ROS 2 控制 SDK。该包通过 USB 虚拟串口与
CAN-FD 通信板连接，提供底层电机接口、整臂控制接口、LCM 状态发布以及控制示例。

## 目录结构

```text
hightorque_robot/
├── CMakeLists.txt              # 编译和安装声明
├── package.xml                 # ROS 2 包元数据和依赖
├── include/                    # 公共 C++ 头文件
├── src/                        # SDK 库实现
├── examples/                   # 示例程序源码
│   ├── *.cpp                   # 整臂控制示例（数字编号）
│   ├── motor_examples/         # 底层电机示例
│   └── tools/                  # CAN、LCM 和参数工具
├── robot_param/                # 机器人和电机 YAML 配置
├── lcm/                        # LCM 消息定义及其 C++ 头文件
├── docs/                       # 使用和开发文档
├── cmake/                      # 导出的 CMake 配置模板
└── third_party/                # 随包提供的 LCM、serial_cmake 依赖
```

所有示例都在包根目录的 `CMakeLists.txt` 中声明。源码目录只用于组织文件，运行时使用
CMake 声明的可执行目标名。

详细文档：

- [使用指南](docs/usage.md)
- [开发说明](docs/development.md)

## 依赖

- ROS 2 Lyrical
- CMake >= 3.22
- C++20 编译器
- `libserialport-dev`
- `yaml-cpp`
- `ament_index_cpp`
- `pinocchio`（阻抗控制示例需要）
- LCM 和包内 `serial_cmake`

安装常用系统依赖：

```bash
sudo apt-get install libserialport-dev libyaml-cpp-dev
```

## 编译

在工作空间中编译本包：

```bash
cd ~/Panthera-HT/Panthera-HT_ROS2_Lyrical
source /opt/ros/lyrical/setup.bash
colcon build --packages-select hightorque_robot
source install/setup.bash
```

只编译某个示例目标：

```bash
colcon build --packages-select hightorque_robot \
  --cmake-target motor_feedback
```

验证已生成的目标：

```bash
ros2 pkg executables hightorque_robot
```

## 运行示例

使用统一命令格式运行已安装的目标：

```bash
ros2 run hightorque_robot 0_robot_get_state  # 查看整臂关节和夹爪状态
ros2 run hightorque_robot motor_feedback     # 查看已配置电机反馈
ros2 run hightorque_robot 3_cartesian_impedance_control  # 六维笛卡尔阻抗控制
```

示例按功能分为三组：

- 根目录数字示例：读取整臂状态、零位设置、位置/速度控制，以及关节空间和笛卡尔空间阻抗控制。
- `examples/motor_examples/`：底层电机反馈、往复运动、回零和零位设置。默认配置当前只包含 ID1。
- `examples/tools/`：CAN 板升级、LCM 状态订阅和参数解析工具。

其中零位设置、运动控制和 CAN 板升级会改变硬件状态，运行前请确认串口、CAN 板和配置文件。
`tools/parse_demo.cpp` 仍使用历史相对配置路径，直接运行时可能出现 `YAML::BadFile`。

## 配置文件

安装后的配置目录为：

```text
<prefix>/share/hightorque_robot/robot_param/
├── Follower.yaml                         # 整臂跟随者配置
├── Leader.yaml                           # 整臂主设备配置
├── Follower_absolute.yaml                # 整臂绝对位置配置
└── motor_param/
    ├── 6dof_Panthera_params_follower.yaml
    ├── 6dof_Panthera_params_leader.yaml
    ├── motor_1.yaml                      # 单电机配置
    ├── motor_6.yaml                      # 六电机配置
    └── robot_config.yaml                 # 底层示例默认入口
```

数字整臂示例支持通过第一个命令行参数指定自定义机器人配置，例如：

```bash
ros2 run hightorque_robot 1_PD_control /path/to/Follower.yaml
```

## 在其他 CMake 工程中使用

安装本包后，外部工程可以链接导出的库目标：

```cmake
find_package(hightorque_robot REQUIRED)

add_executable(my_robot_app main.cpp)
target_link_libraries(my_robot_app
  hightorque_robot::hightorque_robot)
```

## 常用故障排查

确认环境已加载：

```bash
source /opt/ros/lyrical/setup.bash
source install/setup.bash
```

确认串口设备和权限：

```bash
ls /dev/ttyACM*
groups                         # 应包含 dialout
```

如果运行底层示例时只看到 ID1，请检查默认的
`robot_param/motor_param/robot_config.yaml` 是否仍引用 `motor_1.yaml`。
