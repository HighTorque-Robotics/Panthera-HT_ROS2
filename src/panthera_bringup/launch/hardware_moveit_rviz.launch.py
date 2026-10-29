import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    # Get package paths
    panthera_moveit_config_path = FindPackageShare('panthera_moveit_config')
    panthera_bringup_path = FindPackageShare('panthera_bringup')
    panthera_moveit_config_share = get_package_share_directory('panthera_moveit_config')

    # Construct relative path to config file
    default_config_file = PathJoinSubstitution([
        panthera_moveit_config_path,
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

    semantic_file = os.path.join(
        panthera_moveit_config_share,
        'config',
        'panthera_ht_ros_description.srdf',
    )
    moveit_controllers_file = os.path.join(
        panthera_moveit_config_share,
        'config',
        'moveit_controllers_hardware.yaml',
    )

    hardware_urdf_file = PathJoinSubstitution([
        panthera_moveit_config_path,
        'config',
        'panthera_ht_hardware.urdf.xacro'
    ])
    robot_description_content = ParameterValue(
        Command([
            FindExecutable(name='xacro'), ' ', hardware_urdf_file,
            ' config_file:=', LaunchConfiguration('config_file'),
            ' control_mode:=', LaunchConfiguration('control_mode')
        ]),
        value_type=str
    )

    # ============================================
    # 1. Hardware Launch (robot_state_publisher, controller_manager, controllers)
    # ============================================
    hardware_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_bringup_path,
                'launch',
                'hardware.launch.py'
            ])
        ]),
        launch_arguments={
            'config_file': LaunchConfiguration('config_file'),
            'control_mode': LaunchConfiguration('control_mode'),
        }.items()
    )

    # Publish the fixed world -> base_link transform declared by the SRDF.
    static_virtual_joint_tfs_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_moveit_config_path,
                'launch',
                'static_virtual_joint_tfs.launch.py'
            ])
        ])
    )

    # ============================================
    # 2. MoveIt Config
    # ============================================
    # Build only the semantic and trajectory parts here. The robot description
    # must come exclusively from the hardware xacro above; otherwise the
    # builder loads the fake-system URDF from the config package first.
    moveit_config = (
        MoveItConfigsBuilder(
            "panthera_ht_ros_description",
            package_name="panthera_moveit_config",
        )
        .robot_description_semantic(file_path=semantic_file)
        .trajectory_execution(file_path=moveit_controllers_file)
        .to_moveit_configs()
    )
    # MoveItConfigsBuilder adds the default FakeSystem robot_description when
    # no robot_description override is supplied.  The hardware launch already
    # publishes the real hardware URDF, so never pass or republish that fake
    # description from move_group/RViz.
    moveit_params = moveit_config.to_dict()
    moveit_params.pop("robot_description", None)

    # For real hardware, use system time, not simulation time
    move_group_configuration = {
        "publish_robot_description_semantic": True,
        "allow_trajectory_execution": True,
        "publish_robot_description": False,
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
        "monitor_dynamics": False,
        "use_sim_time": False,  # CRITICAL: Use system time for real hardware
    }

    # Keep every consumer on the same hardware URDF. Otherwise move_group republishes
    # the default FakeSystem description and can win the controller_manager startup race.
    hardware_robot_description = {"robot_description": robot_description_content}

    # RViz also needs the full moveit_config (kinematics.yaml, joint_limits.yaml, etc.)
    rviz_params = [
        moveit_params,
        hardware_robot_description,
        {"use_sim_time": False},
    ]

    move_group_params = [
        moveit_params,
        hardware_robot_description,
        move_group_configuration,
    ]

    # ============================================
    # 3. Move Group Node
    # ============================================
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=move_group_params,
    )

    # ============================================
    # 4. RViz Node - simplified
    # ============================================
    rviz_config_file = PathJoinSubstitution([
        panthera_moveit_config_path,
        'config',
        'moveit.rviz'
    ])

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", rviz_config_file],
        parameters=rviz_params,
        condition=IfCondition(LaunchConfiguration('rviz'))
    )

    return LaunchDescription([
        config_file_arg,
        control_mode_arg,
        rviz_arg,
        hardware_launch,
        static_virtual_joint_tfs_launch,
        move_group_node,
        rviz_node,
    ])
