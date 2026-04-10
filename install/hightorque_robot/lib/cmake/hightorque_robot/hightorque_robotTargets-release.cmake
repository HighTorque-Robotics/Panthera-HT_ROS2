#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hightorque_robot::hightorque_robot" for configuration "Release"
set_property(TARGET hightorque_robot::hightorque_robot APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hightorque_robot::hightorque_robot PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhightorque_robot.so.4.4.7"
  IMPORTED_SONAME_RELEASE "libhightorque_robot.so.4"
  )

list(APPEND _cmake_import_check_targets hightorque_robot::hightorque_robot )
list(APPEND _cmake_import_check_files_for_hightorque_robot::hightorque_robot "${_IMPORT_PREFIX}/lib/libhightorque_robot.so.4.4.7" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
