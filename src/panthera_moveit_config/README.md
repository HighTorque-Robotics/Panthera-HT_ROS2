# panthera_moveit_config

Panthera-HT 的 MoveIt 配置包，提供机器人语义描述、运动学、关节限制、控制器映射、RViz 和规划启动文件。

```text
panthera_moveit_config/
├── config/       # URDF/Xacro、SRDF、运动学和控制器配置
├── launch/       # MoveIt、RViz 和仿真规划启动文件
├── robot_param/  # 机器人参数 YAML
└── .setup_assistant
```

构建：

```bash
colcon build --packages-select panthera_moveit_config
```
