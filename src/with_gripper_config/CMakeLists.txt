cmake_minimum_required(VERSION 3.22)
project(with_gripper_config)

find_package(ament_cmake REQUIRED)

ament_package()

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/launch")
  install(
    DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}
    PATTERN "setup_assistant.launch" EXCLUDE)
endif()

install(DIRECTORY config DESTINATION share/${PROJECT_NAME})
# Create symlink for motor_param so Follower_absolute.yaml's relative path works
file(CREATE_LINK
  ${CMAKE_SOURCE_DIR}/../hightorque_robot/robot_param/motor_param
  ${CMAKE_CURRENT_SOURCE_DIR}/robot_param/motor_param
  SYMBOLIC)

install(DIRECTORY robot_param DESTINATION share/${PROJECT_NAME})
install(FILES .setup_assistant DESTINATION share/${PROJECT_NAME})
