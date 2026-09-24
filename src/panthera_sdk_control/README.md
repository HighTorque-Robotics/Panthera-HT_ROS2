# panthera_sdk_control

Panthera-HT 机械臂的 ROS 2 直接 SDK 控制节点，提供关节/末端控制、状态发布、夹爪控制及 KDL 正逆运动学接口。

## 构建
    
```bash
colcon build --packages-select panthera_sdk_control
source install/setup.bash
```

## 运行

启动控制节点：

```bash
ros2 launch panthera_sdk_control arm_control.launch.py
```

常用启动参数包括 `config_file`、`status_publish_rate`、`max_velocity` 和 `tip_link`。未指定配置时使用 `hightorque_robot` 中的默认机器人参数。

## 目录说明

- `src/arm_control_node.cpp`：机械臂控制 ROS 2 节点。
- `tools/kdl_kinematics_demo.cpp`：URDF、KDL 正逆运动学验证工具。
- `launch/arm_control.launch.py`：控制节点启动文件。

节点接口定义位于 `panthera_interfaces` 包。
