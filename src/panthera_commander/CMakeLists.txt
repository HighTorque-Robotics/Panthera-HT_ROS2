cmake_minimum_required(VERSION 3.22)
project(panthera_commander)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(panthera_interfaces REQUIRED)
find_package(hightorque_robot REQUIRED)
find_package(ament_index_cpp REQUIRED)

add_executable(test_moveit src/test_moveit.cpp)
target_link_libraries(test_moveit PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(test_moveit_by_cartesian src/test_moveit_by_cartesian.cpp)
target_link_libraries(test_moveit_by_cartesian PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(test_moveit_by_jointspace src/test_moveit_by_jointspace.cpp)
target_link_libraries(test_moveit_by_jointspace PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(test_moveit_by_siyuanshu src/test_moveit_by_siyuanshu.cpp)
target_link_libraries(test_moveit_by_siyuanshu PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(test_gripper src/test_gripper.cpp)
target_link_libraries(test_gripper PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(test_gripper_detailed src/test_gripper_detailed.cpp)
target_link_libraries(test_gripper_detailed PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(test_cartesian_from_pose1 src/test_cartesian_from_pose1.cpp)
target_link_libraries(test_cartesian_from_pose1 PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(commander_template src/commander_template.cpp)
target_link_libraries(commander_template PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS} ${panthera_interfaces_TARGETS})

add_executable(draw_circle src/draw_circle.cpp)
target_link_libraries(draw_circle PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(draw_horizontal_vertical_circles src/draw_horizontal_vertical_circles.cpp)
target_link_libraries(draw_horizontal_vertical_circles PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(draw_three_circles src/draw_three_circles.cpp)
target_link_libraries(draw_three_circles PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS} ${example_interfaces_TARGETS})

add_executable(sin_trajectory_control src/sin_trajectory_control.cpp)
target_link_libraries(sin_trajectory_control PRIVATE
  hightorque_robot::hightorque_robot
  ament_index_cpp::ament_index_cpp
)

add_executable(sin_trajectory_moveit src/sin_trajectory_moveit.cpp)
target_link_libraries(sin_trajectory_moveit PRIVATE ${rclcpp_TARGETS} ${moveit_ros_planning_interface_TARGETS})

install(TARGETS
  test_moveit
  test_moveit_by_cartesian
  test_moveit_by_jointspace
  test_moveit_by_siyuanshu
  test_gripper
  test_gripper_detailed
  test_cartesian_from_pose1
  commander_template
  draw_circle
  draw_horizontal_vertical_circles
  draw_three_circles
  sin_trajectory_control
  sin_trajectory_moveit
  DESTINATION lib/${PROJECT_NAME})

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
