import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launch_utils import DeclareBooleanLaunchArg


def generate_launch_description():
    config_share = get_package_share_directory("panthera_moveit_config")

    # The demo uses an in-process mock system.  The maintained controller YAML
    # files remain exclusively in panthera_bringup (hardware) and panthera_gazebo.
    moveit_config = (
        MoveItConfigsBuilder(
            "panthera_ht_ros_description", package_name="panthera_moveit_config"
        )
        .robot_description(
            file_path=os.path.join(
                config_share, "config", "panthera_ht_ros_description.urdf.xacro"
            ),
            mappings={
                "initial_positions_file": os.path.join(
                    config_share, "config", "initial_positions.yaml"
                ),
                "use_mock_hardware": "true",
            },
        )
        .robot_description_semantic(
            file_path=os.path.join(
                config_share, "config", "panthera_ht_ros_description_gripper.srdf"
            )
        )
        .joint_limits(
            file_path=os.path.join(config_share, "config", "joint_limits_sim.yaml")
        )
        .trajectory_execution(
            file_path=os.path.join(config_share, "config", "moveit_controllers_sim.yaml")
        )
        .to_moveit_configs()
    )

    use_rviz = LaunchConfiguration("use_rviz")
    use_sim_time = LaunchConfiguration("use_sim_time")
    # ros2_control_node is itself named ``controller_manager``.  Launch's
    # inline parameter form therefore uses the manager's parameter names
    # directly (the outer ``controller_manager: ros__parameters:`` wrapper is
    # only needed in a YAML file).
    controller_manager_parameters = {
        "update_rate": 100,
        "use_sim_time": use_sim_time,
        "enforce_command_limits": False,
        "joint_state_broadcaster.type": "joint_state_broadcaster/JointStateBroadcaster",
        "arm_controller.type": "joint_trajectory_controller/JointTrajectoryController",
        "gripper_controller.type": "joint_trajectory_controller/JointTrajectoryController",
    }

    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[
            {"robot_description": moveit_config.robot_description["robot_description"]},
            {"use_sim_time": use_sim_time},
        ],
    )
    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        name="controller_manager",
        output="screen",
        parameters=[controller_manager_parameters],
        remappings=[("/controller_manager/robot_description", "/robot_description")],
    )
    move_group = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            moveit_config.to_dict(),
            {
                "use_sim_time": use_sim_time,
                "publish_robot_description": False,
                "publish_robot_description_semantic": True,
            },
        ],
    )
    rviz = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", os.path.join(config_share, "config", "moveit.rviz")],
        parameters=[moveit_config.to_dict(), {"use_sim_time": use_sim_time}],
        condition=IfCondition(use_rviz),
    )
    static_world_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_world_to_base",
        arguments=["--frame-id", "world", "--child-frame-id", "base_link"],
    )

    controller_spawners = TimerAction(
        period=2.0,
        actions=[
            Node(
                package="controller_manager",
                executable="spawner",
                arguments=["joint_state_broadcaster"],
                output="screen",
            ),
            Node(
                package="controller_manager",
                executable="spawner",
                arguments=[
                    "arm_controller",
                    "--controller-ros-args",
                    "--ros-args --param joints:=[joint1,joint2,joint3,joint4,joint5,joint6] --param command_interfaces:=[position] --param state_interfaces:=[position,velocity]",
                ],
                output="screen",
            ),
            Node(
                package="controller_manager",
                executable="spawner",
                arguments=[
                    "gripper_controller",
                    "--controller-ros-args",
                    "--ros-args --param joints:=[L_finger_joint] --param command_interfaces:=[position] --param state_interfaces:=[position,velocity]",
                ],
                output="screen",
            ),
        ],
    )

    return LaunchDescription(
        [
            DeclareBooleanLaunchArg("use_rviz", default_value=True),
            DeclareLaunchArgument("use_sim_time", default_value="false"),
            static_world_tf,
            robot_state_publisher,
            ros2_control_node,
            move_group,
            rviz,
            controller_spawners,
        ]
    )
