# panthera_interfaces

Panthera-HT 项目的 ROS 2 自定义消息和服务接口包，不包含控制节点或硬件实现。

## 接口分类

### 消息（`msg/`）

- `ArmPose`：末端位姿和笛卡尔路径标志。
- `ArmStatus`：机械臂、关节和夹爪状态。
- `EndPoseEuler`：末端欧拉位姿反馈。
- `PosCmd`：末端位姿与夹爪组合命令。

### 服务（`srv/`）

- `MoveToJoint`、`MoveToPose`：关节或末端运动请求。
- `Enable`、`GoZero`：使能和回零控制。
- `GripperControl`、`GripperSrv`：夹爪控制。

## 构建

```bash
colcon build --packages-select panthera_interfaces
source install/setup.bash
```

接口主要由 `panthera_sdk_control` 和 `panthera_moveit_commander` 使用。
