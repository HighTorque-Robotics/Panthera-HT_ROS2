# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_panthera_ht_description_with_finger_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED panthera_ht_description_with_finger_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(panthera_ht_description_with_finger_FOUND FALSE)
  elseif(NOT panthera_ht_description_with_finger_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(panthera_ht_description_with_finger_FOUND FALSE)
  endif()
  return()
endif()
set(_panthera_ht_description_with_finger_CONFIG_INCLUDED TRUE)

# output package information
if(NOT panthera_ht_description_with_finger_FIND_QUIETLY)
  message(STATUS "Found panthera_ht_description_with_finger: 1.0.0 (${panthera_ht_description_with_finger_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'panthera_ht_description_with_finger' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT panthera_ht_description_with_finger_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(panthera_ht_description_with_finger_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${panthera_ht_description_with_finger_DIR}/${_extra}")
endforeach()
