cmake_minimum_required(VERSION 3.22)
project(panthera_hardware)

if(POLICY CMP0167)
  cmake_policy(SET CMP0167 NEW)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(hightorque_robot REQUIRED)
find_package(pinocchio REQUIRED)

# Add hardware interface library
add_library(
  panthera_hardware
  SHARED
  src/panthera_hardware_interface.cpp
)

target_include_directories(
  panthera_hardware
  PRIVATE
  include
)

target_link_libraries(
  panthera_hardware
  PRIVATE
  rclcpp::rclcpp
  hardware_interface::hardware_interface
  pluginlib::pluginlib
  rclcpp_lifecycle::rclcpp_lifecycle
  hightorque_robot::hightorque_robot
  pinocchio::pinocchio
)

# Export hardware plugin
pluginlib_export_plugin_description_file(hardware_interface panthera_hardware.xml)

# Install
install(
  TARGETS panthera_hardware
  DESTINATION lib
)

install(
  DIRECTORY include/
  DESTINATION include
)

install(
  DIRECTORY config launch
  DESTINATION share/${PROJECT_NAME}
)

# Export dependencies
ament_export_include_directories(
  include
)
ament_export_libraries(
  panthera_hardware
)
ament_export_dependencies(
  rclcpp
  hardware_interface
  pluginlib
  rclcpp_lifecycle
  hightorque_robot
  pinocchio
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
