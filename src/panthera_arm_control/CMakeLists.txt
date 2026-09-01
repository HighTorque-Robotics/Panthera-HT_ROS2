cmake_minimum_required(VERSION 3.22)
project(panthera_arm_control)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(hightorque_robot REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(panthera_interfaces REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(orocos_kdl REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_kdl REQUIRED)

add_executable(arm_control_node src/arm_control_node.cpp)
add_executable(test_kdl src/test_kdl.cpp)
target_link_libraries(arm_control_node PRIVATE
  hightorque_robot::hightorque_robot
  ${rclcpp_TARGETS}
  ${ament_index_cpp_TARGETS}
  ${example_interfaces_TARGETS}
  ${panthera_interfaces_TARGETS}
  ${sensor_msgs_TARGETS}
  ${std_msgs_TARGETS}
  ${std_srvs_TARGETS}
  ${kdl_parser_TARGETS}
  ${orocos_kdl_TARGETS}
  ${geometry_msgs_TARGETS}
  ${tf2_TARGETS}
  ${tf2_kdl_TARGETS}
)

target_link_libraries(test_kdl PRIVATE
  ${ament_index_cpp_TARGETS}
  ${kdl_parser_TARGETS}
  ${orocos_kdl_TARGETS}
)

install(TARGETS
  arm_control_node
  test_kdl
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
