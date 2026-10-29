from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder(
            "panthera_ht_ros_description",
            package_name="panthera_moveit_config",
        )
        .robot_description_semantic()
        .to_moveit_configs()
    )

    return LaunchDescription([
        Node(
            package="panthera_moveit_commander",
            executable="commander_template",
            output="screen",
            parameters=[moveit_config.to_dict(), {"use_sim_time": False}],
        ),
    ])
