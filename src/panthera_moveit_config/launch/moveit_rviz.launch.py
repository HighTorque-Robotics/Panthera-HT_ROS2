import os
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_moveit_rviz_launch


def generate_launch_description():
    config_share = get_package_share_directory("panthera_moveit_config")
    moveit_config = (
        MoveItConfigsBuilder(
            "panthera_ht_ros_description", package_name="panthera_moveit_config"
        )
        .trajectory_execution(
            file_path=os.path.join(
                config_share, "config", "moveit_controllers_hardware.yaml"
            )
        )
        .to_moveit_configs()
    )
    return generate_moveit_rviz_launch(moveit_config)
