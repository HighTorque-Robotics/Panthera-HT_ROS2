# Load the CMake targets installed with hightorque_robot's bundled libraries.
# These are vendored dependencies, not standalone ROS packages.
get_filename_component(_hightorque_robot_prefix
  "${hightorque_robot_DIR}/../../.." ABSOLUTE)

if(NOT TARGET lcm)
  include("${_hightorque_robot_prefix}/lib/lcm/cmake/lcmConfig.cmake")
endif()

if(NOT TARGET serial::serial_cmake)
  include("${_hightorque_robot_prefix}/lib/cmake/serial_cmake/serial_cmakeConfig.cmake")
endif()

unset(_hightorque_robot_prefix)
