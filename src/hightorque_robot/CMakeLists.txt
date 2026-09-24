cmake_minimum_required(VERSION 3.22)
project(hightorque_robot)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find ament_cmake for ROS2 integration
find_package(ament_cmake REQUIRED)

if(NOT CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install CACHE PATH "Install path prefix" FORCE)
endif()

set(VERSION_MAJOR 4)
set(VERSION_MINOR 4)
set(VERSION_PATCH 7)
set(PROJECT_VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

# The SDK vendors LCM.  Only its runtime libraries are needed by this package;
# disabling the bundled examples avoids building unrelated legacy test code.
set(LCM_ENABLE_EXAMPLES OFF CACHE BOOL "Build bundled LCM examples" FORCE)
add_subdirectory(third_party/lcm)
add_subdirectory(third_party/serial_cmake)

# find_package(lcm REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(ament_index_cpp REQUIRED)

find_library(SERIALPORT_LIBRARY serialport)
find_path(SERIALPORT_INCLUDE_DIR libserialport.h)
if(NOT SERIALPORT_LIBRARY OR NOT SERIALPORT_INCLUDE_DIR)
  message(FATAL_ERROR "libserialport headers or library not found! Please install libserialport-dev.")
else()
  message(STATUS "Found libserialport library: ${SERIALPORT_LIBRARY}")
endif()

set(rt_LIBRARIES rt)
set(pthread_LIBRARIES pthread)

set(serial_SRCS
    src/serial_driver.cpp
    src/parse_robot_params.cpp
    src/hardware/motor.cpp
    src/hardware/canport.cpp
    src/hardware/canboard.cpp
    src/hardware/robot.cpp
    src/crc/crc8.cpp
    src/crc/crc16.cpp
    src/panthera/Panthera.cpp
)

add_library(hightorque_robot SHARED ${serial_SRCS})

target_include_directories(hightorque_robot PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/crc>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/hardware>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/panthera>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/lcm>
  $<BUILD_INTERFACE:${SERIALPORT_INCLUDE_DIR}>
  $<INSTALL_INTERFACE:include>
  $<INSTALL_INTERFACE:include/crc>
  $<INSTALL_INTERFACE:include/hardware>
  $<INSTALL_INTERFACE:include/panthera>
  $<INSTALL_INTERFACE:include/motor_msg>
)

target_link_libraries(hightorque_robot 
    PUBLIC 
        lcm
        yaml-cpp
        serial_cmake
        ament_index_cpp::ament_index_cpp
        ${SERIALPORT_LIBRARY}   # libserialport
    PRIVATE 
        rt 
        pthread
)


add_executable(canboard_update examples/tools/canboard_update.cpp)
target_link_libraries(canboard_update hightorque_robot)

add_executable(motor_feedback examples/motor_examples/motor_feedback.cpp)
target_link_libraries(motor_feedback hightorque_robot)

add_executable(motor_move_zero examples/motor_examples/motor_move_zero.cpp)
target_link_libraries(motor_move_zero hightorque_robot)

add_executable(motor_run examples/motor_examples/motor_run.cpp)
target_link_libraries(motor_run hightorque_robot)

add_executable(motor_msg_subscriber examples/tools/motor_msg_subscriber.cpp)
target_link_libraries(motor_msg_subscriber hightorque_robot)

add_executable(parse_demo examples/tools/parse_demo.cpp)
target_link_libraries(parse_demo hightorque_robot)

set_target_properties(hightorque_robot PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${VERSION_MAJOR}
    PUBLIC_HEADER "include/hardware/robot.hpp;include/hardware/motor.hpp;include/hardware/canport.hpp;include/hardware/canboard.hpp;include/parse_robot_params.hpp;include/serial_struct.hpp;include/serial_driver.hpp;include/crc/crc8.hpp;include/crc/crc16.hpp;include/panthera/Panthera.hpp;lcm/motor_msg/motor_msg.hpp"
)

install(TARGETS hightorque_robot
    EXPORT export_${PROJECT_NAME}
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    PUBLIC_HEADER DESTINATION include
)

install(DIRECTORY include/ DESTINATION include 
    FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h")
install(DIRECTORY lcm/motor_msg/ DESTINATION include/motor_msg
    FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h")
install(DIRECTORY robot_param/ DESTINATION share/hightorque_robot/robot_param
    FILES_MATCHING PATTERN "*.yaml")
install(FILES LICENSE DESTINATION share/${PROJECT_NAME})
install(DIRECTORY docs DESTINATION share/${PROJECT_NAME})
# Old Panthera-HT_description URDF removed - using panthera_ht_description instead
# install(DIRECTORY Panthera-HT_description/urdf/ DESTINATION share/hightorque_robot/urdf
#     FILES_MATCHING PATTERN "*.urdf")

add_executable(motor_set_zero examples/motor_examples/motor_set_zero.cpp)
target_link_libraries(motor_set_zero hightorque_robot)

# Panthera examples
add_executable(0_robot_get_state examples/0_robot_get_state.cpp)
target_link_libraries(0_robot_get_state hightorque_robot ament_index_cpp::ament_index_cpp)

add_executable(0_robot_set_zero examples/0_robot_set_zero.cpp)
target_link_libraries(0_robot_set_zero hightorque_robot ament_index_cpp::ament_index_cpp)

add_executable(1_PD_control examples/1_PD_control.cpp)
target_link_libraries(1_PD_control hightorque_robot ament_index_cpp::ament_index_cpp)

add_executable(1_PosVel_control examples/1_PosVel_control.cpp)
target_link_libraries(1_PosVel_control hightorque_robot ament_index_cpp::ament_index_cpp)

# Pinocchio is required by the dynamics/impedance examples below.
find_package(pinocchio REQUIRED)

if(pinocchio_FOUND)
  message(STATUS "Found pinocchio, building 2_joint_impedance_control example")
  add_executable(2_joint_impedance_control examples/2_joint_impedance_control.cpp)
  target_link_libraries(2_joint_impedance_control hightorque_robot pinocchio::pinocchio ament_index_cpp::ament_index_cpp)

  message(STATUS "Building 3_cartesian_impedance_control example")
  add_executable(3_cartesian_impedance_control examples/3_cartesian_impedance_control.cpp)
  target_link_libraries(3_cartesian_impedance_control hightorque_robot pinocchio::pinocchio ament_index_cpp::ament_index_cpp)

  message(STATUS "Building 4_cartesian_position_impedance example")
  add_executable(4_cartesian_position_impedance examples/4_cartesian_position_impedance.cpp)
  target_link_libraries(4_cartesian_position_impedance hightorque_robot pinocchio::pinocchio ament_index_cpp::ament_index_cpp)

  message(STATUS "Building 5_pure_cartesian_impedance_control example")
  add_executable(5_pure_cartesian_impedance_control examples/5_pure_cartesian_impedance_control.cpp)
  target_link_libraries(5_pure_cartesian_impedance_control hightorque_robot pinocchio::pinocchio ament_index_cpp::ament_index_cpp)

  message(STATUS "Building 3_cartesian_impedance_ab_motion example")
  add_executable(3_cartesian_impedance_ab_motion examples/3_cartesian_impedance_ab_motion.cpp)
  target_link_libraries(3_cartesian_impedance_ab_motion hightorque_robot pinocchio::pinocchio ament_index_cpp::ament_index_cpp)
else()
  message(STATUS "pinocchio not found, skipping impedance control examples")
endif()


# Install example executables so ros2 run can find them
install(TARGETS
    canboard_update
    motor_feedback
    motor_move_zero
    motor_run
    motor_msg_subscriber
    parse_demo
    motor_set_zero
    0_robot_get_state
    0_robot_set_zero
    1_PD_control
    1_PosVel_control
    RUNTIME DESTINATION lib/${PROJECT_NAME}
)

if(pinocchio_FOUND)
  install(TARGETS
      2_joint_impedance_control
      3_cartesian_impedance_control
      4_cartesian_position_impedance
      5_pure_cartesian_impedance_control
      3_cartesian_impedance_ab_motion
      RUNTIME DESTINATION lib/${PROJECT_NAME}
  )
endif()

# Ament package setup for ROS2
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(ament_index_cpp yaml-cpp)
ament_package(CONFIG_EXTRAS cmake/hightorque_robot_vendor_dependencies.cmake)
