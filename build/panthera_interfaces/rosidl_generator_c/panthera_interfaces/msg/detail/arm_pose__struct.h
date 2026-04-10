// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_pose.h"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__STRUCT_H_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArmPose in the package panthera_interfaces.
typedef struct panthera_interfaces__msg__ArmPose
{
  double x;
  double y;
  double z;
  double roll;
  double pitch;
  double yaw;
  bool cartesian_path;
} panthera_interfaces__msg__ArmPose;

// Struct for a sequence of panthera_interfaces__msg__ArmPose.
typedef struct panthera_interfaces__msg__ArmPose__Sequence
{
  panthera_interfaces__msg__ArmPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__msg__ArmPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__STRUCT_H_
