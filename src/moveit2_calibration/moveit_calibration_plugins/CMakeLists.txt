cmake_minimum_required(VERSION 3.22)
project(moveit_calibration_plugins)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Common cmake code applied to all moveit packages
find_package(moveit_common REQUIRED)
moveit_package()

# find dependencies
find_package(ament_cmake_ros REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(eigen3_cmake_module REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(OpenCV REQUIRED imgcodecs aruco)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_eigen REQUIRED)

set(THIS_PACKAGE_INCLUDE_DEPENDS
  Eigen3
  geometry_msgs
  OpenCV
  pluginlib
  rclcpp
  sensor_msgs
  tf2
  tf2_eigen
)

function(target_link_ros_packages target)
  foreach(package_name IN LISTS ARGN)
    if(DEFINED ${package_name}_TARGETS)
      target_link_libraries(${target} PUBLIC ${${package_name}_TARGETS})
    elseif(DEFINED ${package_name}_LIBRARIES)
      target_link_libraries(${target} PUBLIC ${${package_name}_LIBRARIES})
    endif()
    if(DEFINED ${package_name}_INCLUDE_DIRS)
      target_include_directories(${target} SYSTEM PUBLIC ${${package_name}_INCLUDE_DIRS})
    endif()
  endforeach()
endfunction()

# Add project sub-libraries
add_subdirectory(handeye_calibration_solver)
add_subdirectory(handeye_calibration_target)

# Export plugin descriptions to register with pluginlib
pluginlib_export_plugin_description_file(
  moveit_calibration_plugins
  handeye_calibration_target_plugin_description.xml
)
pluginlib_export_plugin_description_file(
  moveit_calibration_plugins
  handeye_calibration_solver_plugin_description.xml
)

ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})
ament_package()
