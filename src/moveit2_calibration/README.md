# MoveIt Calibration — Panthera-HT 手眼标定

本目录包含两个 ROS2 包，为 Panthera-HT 提供 RViz 手眼标定功能：

```text
moveit2_calibration/
├── moveit_calibration_plugins/   # ArUco/ChArUco 检测与 AX=XB 求解器
├── moveit_calibration_gui/       # RViz HandEye Calibration 面板
└── moveit_calibration_demos/     # Gazebo 演示（COLCON_IGNORE，默认不编译）
```

## 构建

```bash
source /opt/ros/lyrical/setup.bash
colcon build --packages-select moveit_calibration_plugins moveit_calibration_gui
source install/setup.bash
```

该功能是可选组件，不使用手眼标定时可以跳过这两个包。

## 启动

Panthera-HT 集成启动文件由 `panthera_bringup` 提供：

```bash
ros2 launch panthera_bringup calibration.launch.py
```

运行前需要机械臂上电、RealSense D435/D435i 和 ChArUco 标定板。默认配置为：

```text
图像话题：/camera/realsense2_camera/color/image_raw
Sensor frame：camera_link
Object frame：handeye_target
End-effector frame：tool0
Robot base frame：base_link
```

## 面板功能

- **Target**：选择 ArUco/ChArUco、图像话题和标定板参数，可生成标定板 PNG。
- **Context**：选择 `Eye-to-hand` 或 `Eye-in-hand`，设置关键坐标系和相机初始位姿。
- **Calibrate**：手动采样、自动加载关节状态、求解、预览 TF，并保存相机位姿。

手动标定时点击 `Take Sample` 采集不同姿态，至少需要 5 组样本，建议覆盖不同角度和距离。

## 求解算法与结果

插件通过 OpenCV `cv::calibrateHandEye()` 提供：

```text
Tsai1989、Park1994、Horaud1995、Andreff1999、Daniilidis1998
```

标定结果可保存为 `.launch.py`、`.xml` 或 `.yaml`，用于静态 TF 集成。

## 依赖

- ROS 2 Lyrical、MoveIt、RViz、tf2_ros
- OpenCV contrib（ArUco/ChArUco）和 Qt6
- `realsense2_camera`（仅集成标定启动需要）

参考：[MoveIt Calibration 上游仓库](https://github.com/ros-planning/moveit_calibration)
