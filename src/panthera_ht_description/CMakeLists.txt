cmake_minimum_required(VERSION 3.8)
project(panthera_ht_description)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(xacro REQUIRED)

xacro_add_files(
  urdf/panthera_ht_ros_description_gripper.urdf.xacro
  INSTALL DESTINATION urdf
)

# Install directories
install(DIRECTORY
  config
  launch
  meshes
  urdf
  DESTINATION share/${PROJECT_NAME}/
)

ament_package()
