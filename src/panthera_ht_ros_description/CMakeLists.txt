cmake_minimum_required(VERSION 3.22)
project(panthera_ht_ros_description)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(xacro REQUIRED)

# Generate a static URDF for consumers such as panthera_arm_control's KDL
# solver. The source xacro includes the physical gripper_center link; keeping
# the generated file in the install space avoids requiring runtime xacro
# processing in the direct SDK node.
xacro_add_files(
  urdf/panthera_ht_ros_description_gripper.urdf.xacro
  INSTALL DESTINATION urdf
)

# Install directories
install(DIRECTORY
  launch
  meshes
  urdf
  DESTINATION share/${PROJECT_NAME}/
  # Extensionless *.launch files are legacy ROS 1 / Gazebo Classic launch files.
  PATTERN "*.launch" EXCLUDE
)

ament_package()
