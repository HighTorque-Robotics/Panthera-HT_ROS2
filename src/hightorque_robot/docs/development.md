# 开发说明

## 构建入口

包使用 CMake 3.22 及以上版本和 C++20：

```bash
source /opt/ros/lyrical/setup.bash
colcon build --packages-select hightorque_robot
```

只构建某个目标：

```bash
colcon build --packages-select hightorque_robot \
  --cmake-target motor_feedback
```

## 代码结构

```text
robot                 # 顶层控制器和配置管理
├── canboard           # CAN 通信板
│   └── canport        # CAN 端口
│       └── motor      # 电机对象
└── serial_driver      # 串口收发和协议解析
```

主要实现位于：

- `src/hardware/robot.cpp`：机器人配置、CAN 板、电机集合和 LCM 发布。
- `src/hardware/canboard.cpp`：板级操作和端口管理。
- `src/hardware/canport.cpp`：端口通信和电机命令。
- `src/hardware/motor.cpp`：电机控制量转换和状态管理。
- `src/serial_driver.cpp`：串口协议收发。
- `src/panthera/Panthera.cpp`：整臂高级控制接口。

## 配置约定

配置文件位于 `robot_param/`。顶层机器人配置引用 `motor_param/` 下的具体电机参数文件。

- `Follower.yaml`：整臂 follower 配置，数字控制示例默认使用。
- `Leader.yaml`：整臂 leader 配置。
- `motor_param/robot_config.yaml`：底层示例默认入口。
- `motor_param/motor_1.yaml`：单电机配置。

## LCM 消息

LCM 类型定义和生成的 C++ 头文件位于 `lcm/`；安装后头文件仍放在
`include/motor_msg/`，因此现有代码可以继续使用：

```cpp
#include "motor_msg/motor_msg.hpp"
```

## 添加示例

1. 将源码放入 `examples/`、`examples/motor_examples/` 或 `examples/tools/`。
2. 在根目录 `CMakeLists.txt` 中添加 `add_executable()` 和链接声明。
3. 将目标加入对应的 `install(TARGETS ...)` 列表。
4. 使用 `colcon build --packages-select hightorque_robot` 验证。

## 验证清单

```bash
git diff --check
colcon build --packages-select hightorque_robot
source install/setup.bash
ros2 pkg executables hightorque_robot
colcon test --packages-select hightorque_robot
```
