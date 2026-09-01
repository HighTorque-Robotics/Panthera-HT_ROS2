import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    # Declare arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    # Get package paths
    gripper_gazebo_path = FindPackageShare('panthera_gazebo')
    panthera_description_path = FindPackageShare('panthera_ht_ros_description')

    # Controller parameters file
    controllers_file = PathJoinSubstitution([
        gripper_gazebo_path,
        'config',
        'ros2_controllers.yaml'
    ])

    # URDF file path
    urdf_file = PathJoinSubstitution([
        gripper_gazebo_path,
        'urdf',
        'Panthera-HT_gazebo.urdf.xacro'
    ])

    # Generate robot_description with controller params
    robot_description_content = ParameterValue(
        Command([
            FindExecutable(name='xacro'), ' ', urdf_file,
            ' ros2_control_params:=', controllers_file,
            ' use_mesh_collisions:=false'
        ]),
        value_type=str
    )

    # Set Gazebo Sim resource path for meshes
    gz_model_path = SetEnvironmentVariable(
        name='GZ_SIM_RESOURCE_PATH',
        value=[
            panthera_description_path, ':',
            PathJoinSubstitution([panthera_description_path, '..']), ':',
            os.environ.get('GZ_SIM_RESOURCE_PATH', '')
        ]
    )

    # Robot State Publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description_content,
            'use_sim_time': use_sim_time
        }]
    )

    # Lyrical's embedded controller_manager is created after the model is spawned.
    # Repeat the transient description while it initializes so it cannot miss the
    # robot_state_publisher's initial sample.
    robot_description_republisher = Node(
        package='panthera_gazebo',
        executable='robot_description_republisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description_content,
            'publish_duration': 20.0,
        }]
    )

    # Start Gazebo Sim using ros_gz_sim package
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('ros_gz_sim'),
                'launch',
                'gz_sim.launch.py'
            ])
        ]),
        launch_arguments={
            # Bullet Featherstone supports URDF mesh collision geometry and
            # mimic constraints; DART (Gazebo's default) does not support
            # either completely for this model.
            'gz_args': (
                '-r empty.sdf -v 3 '
                '--physics-engine gz-physics-bullet-featherstone-plugin'
            ),
            'on_exit_shutdown': 'true'
        }.items()
    )

    # Bridge Gazebo simulation time into ROS for nodes using use_sim_time.
    clock_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'],
        output='screen'
    )

    # Spawn robot in Gazebo Sim with delay
    spawn_robot = TimerAction(
        period=3.0,
        actions=[
            Node(
                package='ros_gz_sim',
                executable='create',
                arguments=[
                    '-topic', 'robot_description',
                    '-name', 'panthera_with_gripper',
                    '-z', '0.1'
                ],
                output='screen'
            )
        ]
    )

    # Load controllers with delay - wait for robot to spawn and controller_manager to be ready
    joint_state_broadcaster_spawner = TimerAction(
        period=10.0,
        actions=[
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['joint_state_broadcaster',
                           '--param-file', controllers_file,
                           '--controller-manager-timeout', '60',
                           '--controller-manager', '/controller_manager'],
                output='screen'
            )
        ]
    )

    arm_controller_spawner = TimerAction(
        period=11.0,
        actions=[
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['arm_controller',
                           '--param-file', controllers_file,
                           '--controller-manager-timeout', '60',
                           '--controller-manager', '/controller_manager'],
                output='screen'
            )
        ]
    )

    gripper_controller_spawner = TimerAction(
        period=12.0,
        actions=[
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['gripper_controller',
                           '--param-file', controllers_file,
                           '--controller-manager-timeout', '60',
                           '--controller-manager', '/controller_manager'],
                output='screen'
            )
        ]
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Use simulation time'
        ),
        gz_model_path,
        robot_state_publisher,
        robot_description_republisher,
        gazebo,
        clock_bridge,
        spawn_robot,
        joint_state_broadcaster_spawner,
        arm_controller_spawner,
        gripper_controller_spawner,
    ])
