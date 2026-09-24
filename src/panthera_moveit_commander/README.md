# panthera_moveit_commander

Panthera-HT 的 MoveIt 控制示例包，包含关节/笛卡尔运动、夹爪控制、圆轨迹和正弦轨迹程序。

## 构建

```bash
colcon build --packages-select panthera_moveit_commander \
  --symlink-install \
  --cmake-args -DPython3_EXECUTABLE=/usr/bin/python3
source install/setup.bash
```

## 运行

先启动 MoveIt：

```bash
ros2 launch panthera_bringup hardware_moveit_rviz.launch.py
```

再运行示例，例如：

```bash
ros2 run panthera_moveit_commander test_moveit
ros2 run panthera_moveit_commander draw_circle
```

`examples/` 保存轨迹示例，`tests/` 保存手动验证程序，`launch/` 保存启动文件，`docs/` 保存专项说明。
