# panthera_ht_description

Panthera-HT 机器人描述包，提供 URDF/Xacro、网格模型和显示启动文件。

```text
panthera_ht_description/
├── urdf/      # 基础、夹爪和硬件机器人描述
├── meshes/    # STL 网格
├── launch/    # 显示和 Gazebo 启动文件
└── config/    # 关节名称配置
```

构建：

```bash
colcon build --packages-select panthera_ht_description
```
