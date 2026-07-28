import tempfile

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare
from moveit_configs_utils import MoveItConfigsBuilder


ARM_JOINTS = ["joint1", "joint2", "joint3", "joint4", "joint5", "joint6"]


GRIPPER_SRDF = """<?xml version="1.0" encoding="UTF-8"?>
<robot name="panthera_ht_ros_description">
  <group name="arm">
    <joint name="virtual_joint"/>
    <joint name="joint1"/>
    <joint name="joint2"/>
    <joint name="joint3"/>
    <joint name="joint4"/>
    <joint name="joint5"/>
    <joint name="joint6"/>
    <joint name="gripper_center_joint"/>
  </group>
  <group name="gripper">
    <joint name="L_finger_joint"/>
  </group>
  <group_state name="home" group="arm">
    <joint name="joint1" value="0"/>
    <joint name="joint2" value="0"/>
    <joint name="joint3" value="0"/>
    <joint name="joint4" value="0"/>
    <joint name="joint5" value="0"/>
    <joint name="joint6" value="0"/>
  </group_state>
  <group_state name="pose1" group="arm">
    <joint name="joint1" value="0"/>
    <joint name="joint2" value="1.6"/>
    <joint name="joint3" value="1.6"/>
    <joint name="joint4" value="0"/>
    <joint name="joint5" value="0"/>
    <joint name="joint6" value="0"/>
  </group_state>
  <group_state name="pose2" group="arm">
    <joint name="joint1" value="-0.1989"/>
    <joint name="joint2" value="0.7072"/>
    <joint name="joint3" value="0.663"/>
    <joint name="joint4" value="-0.4862"/>
    <joint name="joint5" value="0.5917"/>
    <joint name="joint6" value="-0.7597"/>
  </group_state>
  <group_state name="close" group="gripper">
    <joint name="L_finger_joint" value="0"/>
  </group_state>
  <group_state name="open" group="gripper">
    <joint name="L_finger_joint" value="0.04"/>
  </group_state>
  <group_state name="half_open" group="gripper">
    <joint name="L_finger_joint" value="0.02"/>
  </group_state>
  <end_effector name="gripper" parent_link="gripper_center" group="gripper" parent_group="arm"/>
  <virtual_joint name="virtual_joint" type="fixed" parent_frame="world" child_link="base_link"/>
  <disable_collisions link1="L_finger" link2="R_finger" reason="Never"/>
  <disable_collisions link1="L_finger" link2="gripper_center" reason="Default"/>
  <disable_collisions link1="L_finger" link2="link3" reason="Never"/>
  <disable_collisions link1="L_finger" link2="link4" reason="Never"/>
  <disable_collisions link1="L_finger" link2="link5" reason="Never"/>
  <disable_collisions link1="L_finger" link2="link6" reason="Adjacent"/>
  <disable_collisions link1="R_finger" link2="gripper_center" reason="Default"/>
  <disable_collisions link1="R_finger" link2="link3" reason="Never"/>
  <disable_collisions link1="R_finger" link2="link4" reason="Never"/>
  <disable_collisions link1="R_finger" link2="link5" reason="Never"/>
  <disable_collisions link1="R_finger" link2="link6" reason="Adjacent"/>
  <disable_collisions link1="gripper_center" link2="link3" reason="Never"/>
  <disable_collisions link1="gripper_center" link2="link4" reason="Never"/>
  <disable_collisions link1="gripper_center" link2="link5" reason="Never"/>
  <disable_collisions link1="gripper_center" link2="link6" reason="Adjacent"/>
  <disable_collisions link1="base_link" link2="link1" reason="Adjacent"/>
  <disable_collisions link1="base_link" link2="link2" reason="Never"/>
  <disable_collisions link1="link1" link2="link2" reason="Adjacent"/>
  <disable_collisions link1="link2" link2="link3" reason="Adjacent"/>
  <disable_collisions link1="link2" link2="link4" reason="Never"/>
  <disable_collisions link1="link2" link2="link5" reason="Never"/>
  <disable_collisions link1="link2" link2="link6" reason="Never"/>
  <disable_collisions link1="link3" link2="link4" reason="Adjacent"/>
  <disable_collisions link1="link3" link2="link5" reason="Never"/>
  <disable_collisions link1="link3" link2="link6" reason="Never"/>
  <disable_collisions link1="link4" link2="link5" reason="Adjacent"/>
  <disable_collisions link1="link4" link2="link6" reason="Never"/>
  <disable_collisions link1="link5" link2="link6" reason="Adjacent"/>
</robot>
"""


ROS2_CONTROLLERS_YAML = """controller_manager:
  ros__parameters:
    update_rate: 100
    use_sim_time: false

    arm_controller:
      type: joint_trajectory_controller/JointTrajectoryController

    gripper_controller:
      type: joint_trajectory_controller/JointTrajectoryController

    joint_state_broadcaster:
      type: joint_state_broadcaster/JointStateBroadcaster

joint_state_broadcaster:
  ros__parameters:
    use_sim_time: false

arm_controller:
  ros__parameters:
    use_sim_time: false
    joints:
      - joint1
      - joint2
      - joint3
      - joint4
      - joint5
      - joint6

    command_interfaces:
      - position
      - velocity

    state_interfaces:
      - position
      - velocity

    state_publish_rate: 50.0
    action_monitor_rate: 20.0
    allow_partial_joints_goal: false
    allow_integration_in_goal_trajectories: true

    constraints:
      stopped_velocity_tolerance: 0.01
      goal_time: 0.0

gripper_controller:
  ros__parameters:
    use_sim_time: false
    joints:
      - L_finger_joint

    command_interfaces:
      - position
      - velocity

    state_interfaces:
      - position
      - velocity

    state_publish_rate: 50.0
    action_monitor_rate: 20.0
    allow_partial_joints_goal: false

    constraints:
      stopped_velocity_tolerance: 0.01
      goal_time: 0.0
"""


MOVEIT_CONTROLLERS = {
    "moveit_controller_manager": "moveit_simple_controller_manager/MoveItSimpleControllerManager",
    "moveit_simple_controller_manager": {
        "controller_names": ["arm_controller", "gripper_controller"],
        "arm_controller": {
            "action_ns": "follow_joint_trajectory",
            "type": "FollowJointTrajectory",
            "joints": ARM_JOINTS,
        },
        "gripper_controller": {
            "action_ns": "follow_joint_trajectory",
            "type": "FollowJointTrajectory",
            "joints": ["L_finger_joint"],
        },
    },
}


def create_ros2_controllers_file():
    controllers_file = tempfile.NamedTemporaryFile(
        mode="w",
        prefix="panthera_ht_gripper_controllers_",
        suffix=".yaml",
        delete=False,
    )
    with controllers_file:
        controllers_file.write(ROS2_CONTROLLERS_YAML)
    return controllers_file.name


def generate_launch_description():
    panthera_config_path = FindPackageShare("panthera_ht_config")
    panthera_description_path = FindPackageShare("panthera_ht_ros_description")

    config_file = LaunchConfiguration("config_file")
    control_mode = LaunchConfiguration("control_mode")
    rviz = LaunchConfiguration("rviz")
    controllers_file = create_ros2_controllers_file()

    default_config_file = PathJoinSubstitution([
        panthera_config_path,
        "robot_param",
        "Follower_absolute.yaml",
    ])

    urdf_file = PathJoinSubstitution([
        panthera_description_path,
        "urdf",
        "panthera_ht_ros_description_gripper.urdf.xacro",
    ])

    robot_description_content = ParameterValue(
        Command([
            FindExecutable(name="xacro"), " ", urdf_file,
            " config_file:=", config_file,
            " control_mode:=", control_mode,
        ]),
        value_type=str,
    )

    robot_description = {"robot_description": robot_description_content}
    robot_description_semantic = {"robot_description_semantic": GRIPPER_SRDF}

    moveit_config = MoveItConfigsBuilder(
        "panthera_ht_ros_description",
        package_name="panthera_ht_config",
    ).to_moveit_configs()

    move_group_configuration = {
        "publish_robot_description_semantic": True,
        "allow_trajectory_execution": True,
        "publish_robot_description": True,
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
        "monitor_dynamics": False,
        "use_sim_time": False,
    }

    moveit_params = [
        moveit_config.to_dict(),
        robot_description,
        robot_description_semantic,
        MOVEIT_CONTROLLERS,
        move_group_configuration,
        {"use_sim_time": False},
    ]

    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[
            robot_description,
            {"use_sim_time": False},
        ],
    )

    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[
            controllers_file,
            robot_description,
            {"use_sim_time": False},
        ],
        output="screen",
        arguments=["--ros-args", "--param", "use_sim_time:=false"],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager-timeout",
            "60",
            "--controller-manager",
            "/controller_manager",
        ],
        output="screen",
    )

    arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "arm_controller",
            "--controller-manager-timeout",
            "60",
            "--controller-manager",
            "/controller_manager",
        ],
        output="screen",
    )

    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "gripper_controller",
            "--controller-manager-timeout",
            "60",
            "--controller-manager",
            "/controller_manager",
        ],
        output="screen",
    )

    delay_arm_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[arm_controller_spawner],
        ),
    )

    delay_gripper_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=arm_controller_spawner,
            on_exit=[gripper_controller_spawner],
        ),
    )

    static_world_to_base = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        arguments=[
            "--x", "0",
            "--y", "0",
            "--z", "0",
            "--roll", "0",
            "--pitch", "0",
            "--yaw", "0",
            "--frame-id", "world",
            "--child-frame-id", "base_link",
        ],
        output="log",
    )

    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=moveit_params,
    )

    rviz_config_file = PathJoinSubstitution([
        panthera_config_path,
        "config",
        "moveit.rviz",
    ])

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
        parameters=moveit_params,
        condition=IfCondition(rviz),
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            "config_file",
            default_value=default_config_file,
            description="Path to robot configuration YAML file",
        ),
        DeclareLaunchArgument(
            "control_mode",
            default_value="position_velocity",
            description="Control mode: position_velocity, pd_control, or full_control",
        ),
        DeclareLaunchArgument(
            "rviz",
            default_value="true",
            description="Start RViz",
        ),
        robot_state_publisher,
        controller_manager,
        joint_state_broadcaster_spawner,
        delay_arm_controller_spawner,
        delay_gripper_controller_spawner,
        static_world_to_base,
        move_group_node,
        rviz_node,
    ])
