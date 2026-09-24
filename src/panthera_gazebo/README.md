# panthera_gazebo

Panthera-HT 的 Gazebo Sim 仿真包，提供机器人模型、仿真控制器、世界和 MoveIt 联动启动文件。

## 仿真 ros2_control

仿真唯一的控制器配置入口是：

```text
config/ros2_controllers.yaml
```

`gazebo.launch.py` 和 `gazebo_classic.launch.py` 会将该文件传给 Gazebo 的
`gz_ros2_control`/`gazebo_ros2_control` 插件。它声明：

- `joint_state_broadcaster`：发布仿真关节状态；
- `arm_controller`：控制 `joint1`～`joint6`；
- `gripper_controller`：控制 `L_finger_joint`。

该配置只连接虚拟关节，不会访问真实电机；实机启动应使用
`panthera_bringup/config/ros2_controllers.yaml`。Gazebo URDF/Xacro 中的
`<ros2_control>` 负责声明仿真插件，本文件只负责控制器参数。

```text
panthera_gazebo/
├── urdf/      # Gazebo Sim/Classic 模型
├── config/    # 仿真 ros2_controllers.yaml 及 Gazebo ros2_control Xacro
├── launch/    # Gazebo 和 MoveIt 启动文件
├── worlds/    # 仿真世界
└── scripts/   # 辅助脚本
```

构建：

```bash
colcon build --packages-select panthera_gazebo
```
