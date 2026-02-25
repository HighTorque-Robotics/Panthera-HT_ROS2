import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    # Get package paths
    panthera_config_path = FindPackageShare('panthera_ht_config')

    # Construct relative path to config file
    default_config_file = PathJoinSubstitution([
        panthera_config_path,
        'robot_param',
        'Follower_absolute.yaml'
    ])

    # Declare arguments
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=default_config_file,
        description='Path to robot configuration YAML file'
    )

    control_mode_arg = DeclareLaunchArgument(
        'control_mode',
        default_value='position_velocity',
        description='Control mode: position_velocity, pd_control, or full_control'
    )

    rviz_arg = DeclareLaunchArgument(
        'rviz',
        default_value='true',
        description='Start RViz'
    )

    # ============================================
    # 1. Hardware Launch (robot_state_publisher, controller_manager, controllers)
    # ============================================
    hardware_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_config_path,
                'launch',
                'hardware.launch.py'
            ])
        ]),
        launch_arguments={
            'config_file': LaunchConfiguration('config_file'),
            'control_mode': LaunchConfiguration('control_mode'),
        }.items()
    )

    # ============================================
    # 2. Static TF (world -> base_link)
    # ============================================
    static_tfs_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_config_path,
                'launch',
                'static_virtual_joint_tfs.launch.py'
            ])
        ])
    )

    # ============================================
    # 3. MoveIt Config
    # ============================================
    moveit_config = MoveItConfigsBuilder(
        "panthera_ht_ros_description",
        package_name="panthera_ht_config"
    ).to_moveit_configs()

    # For real hardware, use system time, not simulation time
    move_group_configuration = {
        "publish_robot_description_semantic": True,
        "allow_trajectory_execution": True,
        "publish_robot_description": True,
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
        "monitor_dynamics": False,
        "use_sim_time": False,  # CRITICAL: Use system time for real hardware
    }

    move_group_params = [
        moveit_config.to_dict(),
        move_group_configuration,
        {"use_sim_time": False},  # CRITICAL: Must be last to override any previous setting
    ]

    # ============================================
    # 4. Move Group Node
    # ============================================
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=move_group_params,
    )

    # ============================================
    # 5. RViz Node
    # ============================================
    rviz_config_file = PathJoinSubstitution([
        panthera_config_path,
        'config',
        'moveit.rviz'
    ])

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
        parameters=[
            moveit_config.to_dict(),
            {"use_sim_time": False},  # CRITICAL: Use system time for real hardware
        ],
        condition=IfCondition(LaunchConfiguration('rviz'))
    )

    return LaunchDescription([
        config_file_arg,
        control_mode_arg,
        rviz_arg,
        hardware_launch,
        static_tfs_launch,
        move_group_node,
        rviz_node,
    ])
