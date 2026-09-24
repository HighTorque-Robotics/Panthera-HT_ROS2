# moveit_calibration_plugins

MoveIt 手眼标定核心插件，提供 ArUco/ChArUco 目标检测和 OpenCV AX=XB 求解器。

```text
moveit_calibration_plugins/
├── handeye_calibration_target/
├── handeye_calibration_solver/
└── *plugin_description.xml
```

构建：

```bash
colcon build --packages-select moveit_calibration_plugins
```
