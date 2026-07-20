import tempfile

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare
from moveit_configs_utils import MoveItConfigsBuilder


ARM_JOINTS = ["joint1", "joint2", "joint3", "joint4", "joint5", "joint6"]


GRIPPER_ROBOT_DESCRIPTION_PREFIX = """<?xml version="1.0"?>
<robot name="panthera_ht_ros_description">
  <mujoco>
    <compiler meshdir="../meshes/" balanceinertia="true" discardvisual="false"/>
  </mujoco>

  <link name="base_link">
    <inertial>
      <origin xyz="5.789e-05 -0.00015938 0.02298649" rpy="0 0 0"/>
      <mass value="0.62922454"/>
      <inertia ixx="0.00061305" ixy="-1.32e-06" ixz="1.69e-06" iyy="0.00063876" iyz="-2.1e-07" izz="0.0007565"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/base_link.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/base_link.STL"/></geometry>
    </collision>
  </link>

  <link name="link1">
    <inertial>
      <origin xyz="0.00278873 -0.00094387 0.02491842" rpy="0 0 0"/>
      <mass value="0.28101551"/>
      <inertia ixx="0.00039386" ixy="3.75e-06" ixz="-3.733e-05" iyy="0.0002136" iyz="7.17e-06" izz="0.00037066"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link1.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link1.STL"/></geometry>
    </collision>
  </link>
  <joint name="joint1" type="revolute">
    <origin xyz="0 0 0.0584" rpy="0 0 0"/>
    <parent link="base_link"/>
    <child link="link1"/>
    <axis xyz="0 0 1"/>
    <limit lower="-2.4" upper="2.4" effort="21" velocity="4.2"/>
  </joint>

  <link name="link2">
    <inertial>
      <origin xyz="-0.12936212 -0.00213339 7.183e-05" rpy="0 0 0"/>
      <mass value="1.5165092"/>
      <inertia ixx="0.00044711" ixy="3.071e-05" ixz="-5.119e-05" iyy="0.02261049" iyz="3.01e-06" izz="0.02272105"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link2.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link2.STL"/></geometry>
    </collision>
  </link>
  <joint name="joint2" type="revolute">
    <origin xyz="0.018199 0 0.053" rpy="0 0 0"/>
    <parent link="link1"/>
    <child link="link2"/>
    <axis xyz="0 1 0"/>
    <limit lower="0.0" upper="3.2" effort="36" velocity="5"/>
  </joint>

  <link name="link3">
    <inertial>
      <origin xyz="0.16343103 -0.00164646 0.05337427" rpy="0 0 0"/>
      <mass value="0.66917784"/>
      <inertia ixx="0.00061339" ixy="-1.439e-05" ixz="-0.00070321" iyy="0.00538615" iyz="-1.404e-05" izz="0.00532976"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link3.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link3.STL"/></geometry>
    </collision>
  </link>
  <joint name="joint3" type="revolute">
    <origin xyz="-0.26 0 0" rpy="0 0 0"/>
    <parent link="link2"/>
    <child link="link3"/>
    <axis xyz="0 -1 0"/>
    <limit lower="0.0" upper="4.0" effort="36" velocity="5"/>
  </joint>

  <link name="link4">
    <inertial>
      <origin xyz="0.05240131 -0.00055249 0.04094177" rpy="0 0 0"/>
      <mass value="0.30780516"/>
      <inertia ixx="0.00025787" ixy="-1.011e-05" ixz="-0.00017337" iyy="0.00039454" iyz="-8.09e-06" izz="0.00035094"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link4.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link4.STL"/></geometry>
    </collision>
  </link>
  <joint name="joint4" type="revolute">
    <origin xyz="0.23 0 0.06" rpy="0 0 0"/>
    <parent link="link3"/>
    <child link="link4"/>
    <axis xyz="0 -1 0"/>
    <limit lower="-1.6" upper="1.6" effort="21" velocity="4.2"/>
  </joint>

  <link name="link5">
    <inertial>
      <origin xyz="0.00303007 8.509e-05 -0.03624079" rpy="0 0 0"/>
      <mass value="0.23711139"/>
      <inertia ixx="4.815e-05" ixy="-3e-08" ixz="-1.5e-07" iyy="5.773e-05" iyz="-1e-08" izz="3.359e-05"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link5.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link5.STL"/></geometry>
    </collision>
  </link>
  <joint name="joint5" type="revolute">
    <origin xyz="0.07 0 0.036319" rpy="0 0 0"/>
    <parent link="link4"/>
    <child link="link5"/>
    <axis xyz="0 0 -1"/>
    <limit lower="-1.7" upper="1.7" effort="10" velocity="3.7"/>
  </joint>

  <link name="link6">
    <inertial>
      <origin xyz="0.002 0.00 0.00" rpy="0 0 0"/>
      <mass value="0.01"/>
      <inertia ixx="0.00107368" ixy="-1.25e-05" ixz="3e-07" iyy="0.00068998" iyz="2.517e-05" izz="0.00167551"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link6.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/link6.STL"/></geometry>
    </collision>
  </link>
  <joint name="joint6" type="revolute">
    <origin xyz="0.02345 0 -0.039" rpy="0 0 0"/>
    <parent link="link5"/>
    <child link="link6"/>
    <axis xyz="1 0 0"/>
    <limit lower="-2.5" upper="2.5" effort="10" velocity="3.7"/>
  </joint>

  <link name="L_finger">
    <inertial>
      <origin xyz="-0.0685513053302154 0.016863783322054 -0.000510235194009112" rpy="0 0 0"/>
      <mass value="0.127457990512492"/>
      <inertia ixx="2.28803355388279E-05" ixy="-4.20099870625027E-06" ixz="3.42841892600802E-07" iyy="5.15650351948181E-05" iyz="-5.67310171718486E-10" izz="4.64985980845228E-05"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/L_finger.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/L_finger.STL"/></geometry>
    </collision>
  </link>
  <joint name="L_finger_joint" type="prismatic">
    <origin xyz="0.165 0 0" rpy="0 0 0"/>
    <parent link="link6"/>
    <child link="L_finger"/>
    <axis xyz="0 1 0"/>
    <limit lower="0" upper="0.04" effort="100" velocity="0.1"/>
  </joint>

  <link name="R_finger">
    <inertial>
      <origin xyz="-0.0685513053307259 -0.0168637833221451 0.000510464525338844" rpy="0 0 0"/>
      <mass value="0.127457990511979"/>
      <inertia ixx="2.28803355389148E-05" ixy="4.20099870615578E-06" ixz="-3.42841892362391E-07" iyy="5.15650351903219E-05" iyz="-5.67310157866966E-10" izz="4.64985980799091E-05"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/R_finger.STL"/></geometry>
      <material name=""><color rgba="0.752941176470588 0.752941176470588 0.752941176470588 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/R_finger.STL"/></geometry>
    </collision>
  </link>
  <joint name="R_finger_joint" type="prismatic">
    <origin xyz="0.165 0 0" rpy="0 0 0"/>
    <parent link="link6"/>
    <child link="R_finger"/>
    <axis xyz="0 1 0"/>
    <limit lower="-0.04" upper="0" effort="100" velocity="0.1"/>
    <mimic joint="L_finger_joint" multiplier="-1" offset="0"/>
  </joint>

  <link name="gripper_center">
    <inertial>
      <origin xyz="-0.124818615882779 -4.88421114370448E-05 -3.8373269199643E-05" rpy="0 0 0"/>
      <mass value="0.0960375427712166"/>
      <inertia ixx="9.09311609578797E-05" ixy="2.21893449480774E-09" ixz="-4.1053650775334E-09" iyy="1.13385601698219E-05" iyz="4.83664470143672E-08" izz="8.46740055322188E-05"/>
    </inertial>
    <visual>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/gripper_center.STL"/></geometry>
      <material name=""><color rgba="0.866666666666667 0.909803921568627 1 1"/></material>
    </visual>
    <collision>
      <origin xyz="0 0 0" rpy="0 0 0"/>
      <geometry><mesh filename="package://panthera_ht_ros_description/meshes/gripper_center.STL"/></geometry>
    </collision>
  </link>
  <joint name="gripper_center_joint" type="fixed">
    <origin xyz="0.165 0 0" rpy="0 0 0"/>
    <parent link="link6"/>
    <child link="gripper_center"/>
  </joint>

  <ros2_control name="PantheraHardware" type="system">
    <hardware>
      <plugin>panthera_hardware/PantheraHardwareInterface</plugin>
      <param name="config_file">"""


GRIPPER_ROBOT_DESCRIPTION_MIDDLE = """</param>
      <param name="control_mode">"""


GRIPPER_ROBOT_DESCRIPTION_SUFFIX = """</param>
      <param name="gripper_rad_to_m">0.025</param>
    </hardware>

    <joint name="joint1">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">21.0</param>
      <param name="max_velocity">1.0</param>
      <param name="kp">4.0</param>
      <param name="kd">0.5</param>
    </joint>
    <joint name="joint2">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">36.0</param>
      <param name="max_velocity">1.0</param>
      <param name="kp">10.0</param>
      <param name="kd">0.8</param>
    </joint>
    <joint name="joint3">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">36.0</param>
      <param name="max_velocity">1.0</param>
      <param name="kp">10.0</param>
      <param name="kd">0.8</param>
    </joint>
    <joint name="joint4">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">21.0</param>
      <param name="max_velocity">1.0</param>
      <param name="kp">2.0</param>
      <param name="kd">0.2</param>
    </joint>
    <joint name="joint5">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">10.0</param>
      <param name="max_velocity">1.0</param>
      <param name="kp">2.0</param>
      <param name="kd">0.2</param>
    </joint>
    <joint name="joint6">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">10.0</param>
      <param name="max_velocity">1.0</param>
      <param name="kp">1.0</param>
      <param name="kd">0.1</param>
    </joint>
    <joint name="L_finger_joint">
      <command_interface name="position"/>
      <command_interface name="velocity"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
      <param name="max_torque">0.5</param>
      <param name="max_velocity">0.5</param>
      <param name="kp">1.0</param>
      <param name="kd">0.1</param>
    </joint>
    <joint name="R_finger_joint">
      <state_interface name="position"/>
      <state_interface name="velocity"/>
      <state_interface name="effort"/>
    </joint>
  </ros2_control>
</robot>
"""


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

    config_file = LaunchConfiguration("config_file")
    control_mode = LaunchConfiguration("control_mode")
    rviz = LaunchConfiguration("rviz")
    controllers_file = create_ros2_controllers_file()

    default_config_file = PathJoinSubstitution([
        panthera_config_path,
        "robot_param",
        "Follower_absolute.yaml",
    ])

    robot_description_content = ParameterValue(
        [
            GRIPPER_ROBOT_DESCRIPTION_PREFIX,
            config_file,
            GRIPPER_ROBOT_DESCRIPTION_MIDDLE,
            control_mode,
            GRIPPER_ROBOT_DESCRIPTION_SUFFIX,
        ],
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
