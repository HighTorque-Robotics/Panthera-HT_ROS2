#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "config_file",
            default_value=PathJoinSubstitution([
                FindPackageShare("hightorque_robot"),
                "robot_param",
                "Follower_absolute.yaml"
            ]),
            description="Path to Panthera robot configuration file",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "control_mode",
            default_value="position_velocity",
            description="Control mode: position_velocity or pd_control",
        )
    )

    # Initialize Arguments
    config_file = LaunchConfiguration("config_file")
    control_mode = LaunchConfiguration("control_mode")

    # Generate one complete robot description, including ros2_control.
    robot_description_content = ParameterValue(Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution([
                FindPackageShare("panthera_ht_ros_description"),
                "urdf",
                "panthera_ht_ros_description_gripper.urdf.xacro"
            ]),
            " ",
            "config_file:=",
            config_file,
            " ",
            "control_mode:=",
            control_mode,
        ]
    ), value_type=str)
    robot_description = {"robot_description": robot_description_content}

    # Get ros2_control URDF
    robot_controllers = PathJoinSubstitution([
        FindPackageShare("panthera_hardware"),
        "config",
        "ros2_controllers.yaml",
    ])

    # Robot state publisher
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )

    # Controller manager
    controller_manager_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_controllers],
        output="both",
        remappings=[
            ("~/robot_description", "/robot_description"),
        ],
    )

    # Joint state broadcaster spawner
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    # Arm controller spawner
    arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["arm_controller", "--controller-manager", "/controller_manager"],
    )

    # Gripper controller spawner
    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["gripper_controller", "--controller-manager", "/controller_manager"],
    )

    # Delay arm controller spawner after joint state broadcaster
    delay_arm_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[arm_controller_spawner],
        )
    )

    # Delay gripper controller spawner after arm controller
    delay_gripper_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=arm_controller_spawner,
            on_exit=[gripper_controller_spawner],
        )
    )

    nodes = [
        robot_state_publisher_node,
        controller_manager_node,
        joint_state_broadcaster_spawner,
        delay_arm_controller_spawner,
        delay_gripper_controller_spawner,
    ]

    return LaunchDescription(declared_arguments + nodes)
