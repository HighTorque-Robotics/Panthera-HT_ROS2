import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, SetEnvironmentVariable, IncludeLaunchDescription, TimerAction, RegisterEventHandler
from launch.event_handlers import OnProcessExit
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
    panthera_description_path = FindPackageShare('panthera_ht_description')

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
            # Primitive collision proxies keep the Humble DART backend
            # numerically stable for this arm while preserving mesh visuals.
            ' use_mesh_collisions:=false',
            # Gazebo 6's DART backend otherwise locks the overlapping shoulder
            # collision bodies at their zero-limit pose. MoveIt still uses the
            # full collision model because this is only the Gazebo description.
            ' use_collisions:=false'
        ]),
        value_type=str
    )

    # Set Gazebo Ignition resource path for meshes
    gz_model_path = SetEnvironmentVariable(
        name='GZ_SIM_RESOURCE_PATH',
        value=[
            panthera_description_path, ':',
            PathJoinSubstitution([panthera_description_path, '..']), ':',
            os.environ.get('GZ_SIM_RESOURCE_PATH', '')
        ]
    )

    # Set Gazebo plugin path for gz_ros2_control
    gz_plugin_path = SetEnvironmentVariable(
        name='GZ_SIM_SYSTEM_PLUGIN_PATH',
        value=[
            '/opt/ros/humble/lib:',
            os.environ.get('GZ_SIM_SYSTEM_PLUGIN_PATH', '')
        ]
    )

    # Ignition Gazebo v6 uses IGN_IP for transport discovery.  On a
    # single-machine simulation, loopback avoids multicast errors when the
    # host has no usable multicast route.  Respect an explicitly configured
    # address for multi-machine simulations.
    ignition_ip = SetEnvironmentVariable(
        name='IGN_IP',
        value=os.environ.get('IGN_IP', '127.0.0.1')
    )
    gz_ip = SetEnvironmentVariable(
        name='GZ_IP',
        value=os.environ.get('GZ_IP', '127.0.0.1')
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

    # Start Gazebo Ignition using ros_gz_sim package
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('ros_gz_sim'),
                'launch',
                'gz_sim.launch.py'
            ])
        ]),
        launch_arguments={
            # Keep Gazebo 6's installed DART backend.  The Bullet plugin is
            # present on some Humble systems but crashes in gz_ros2_control;
            # primitive collision proxies above avoid the original joint lock.
            'gz_args': '-r empty.sdf -v 3',
            'on_exit_shutdown': 'true'
        }.items()
    )

    # Spawn robot in Gazebo Ignition with delay
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
        gz_plugin_path,
        ignition_ip,
        gz_ip,
        robot_state_publisher,
        gazebo,
        spawn_robot,
        joint_state_broadcaster_spawner,
        arm_controller_spawner,
        gripper_controller_spawner,
    ])
