# panthera_bringup

Panthera-HT 的系统启动包，负责启动真实硬件、`ros2_control`、MoveIt、RViz 和手眼标定入口。

## 实机 ros2_control

实机唯一的控制器配置入口是：

```text
config/ros2_controllers.yaml
```

`hardware.launch.py`、`hardware_gripper.launch.py` 和
`hardware_moveit_rviz.launch.py` 均从该文件加载控制器参数。它声明：

- `joint_state_broadcaster`：发布真实关节状态；
- `arm_controller`：控制 `joint1`～`joint6`；
- `gripper_controller`：控制 `L_finger_joint`。

该配置连接 `panthera_hardware/PantheraHardwareInterface`，使用真实 SDK 和
电机；不要在实机启动中改用 `panthera_gazebo/config/ros2_controllers.yaml`。
URDF/Xacro 中的 `<ros2_control>` 负责声明硬件插件，本文件只负责控制器参数。

```text
panthera_bringup/
├── launch/   # 硬件、MoveIt、标定和控制器启动文件
├── config/   # 实机 ros2_controllers.yaml
└── package.xml
```

构建：

```bash
colcon build --packages-select panthera_bringup
```
