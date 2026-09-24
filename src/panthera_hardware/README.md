# panthera_hardware

Panthera-HT 的 `ros2_control` 硬件接口插件，负责连接 `hightorque_robot` SDK 与控制器。

本包提供实机 `<ros2_control>` 硬件描述和
`panthera_hardware/PantheraHardwareInterface` 插件，不保存控制器参数入口。
实机控制器配置统一由 `panthera_bringup/config/ros2_controllers.yaml` 管理；
仿真控制器配置位于 `panthera_gazebo/config/ros2_controllers.yaml`。

```text
panthera_hardware/
├── include/   # 硬件接口头文件
├── src/       # PantheraHardwareInterface 实现
├── config/    # ros2_control Xacro
├── panthera_hardware.xml
└── CMakeLists.txt
```

构建：

```bash
colcon build --packages-select panthera_hardware
```
