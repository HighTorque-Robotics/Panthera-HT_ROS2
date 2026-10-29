from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Get package paths
    panthera_gazebo_path = FindPackageShare('panthera_gazebo')
    panthera_moveit_config_path = FindPackageShare('panthera_moveit_config')

    # Include Gazebo launch
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_gazebo_path,
                'launch',
                'gazebo.launch.py'
            ])
        ])
    )

    # The Gazebo URDF already contains world_joint (world -> base_link), and
    # robot_state_publisher publishes it. Do not add a second static TF here.

    # Include MoveIt move_group
    move_group_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_moveit_config_path,
                'launch',
                'move_group.launch.py'
            ])
        ]),
        launch_arguments={'use_sim_time': 'true'}.items()
    )

    # Include MoveIt RViz
    moveit_rviz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                panthera_moveit_config_path,
                'launch',
                'moveit_rviz.launch.py'
            ])
        ]),
        launch_arguments={'use_sim_time': 'true'}.items()
    )

    return LaunchDescription([
        gazebo_launch,
        move_group_launch,
        moveit_rviz_launch,
    ])
