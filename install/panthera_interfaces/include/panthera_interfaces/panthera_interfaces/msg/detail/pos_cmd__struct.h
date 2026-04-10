// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panthera_interfaces:msg/PosCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/pos_cmd.h"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__STRUCT_H_
#define PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PosCmd in the package panthera_interfaces.
/**
  * PosCmd.msg - Combined end-effector pose + gripper command
 */
typedef struct panthera_interfaces__msg__PosCmd
{
  double x;
  double y;
  double z;
  double roll;
  double pitch;
  double yaw;
  /// Gripper value (0.0=close, 1.0=fully open)
  double gripper;
  /// 0=joint-space planning, 1=cartesian path
  uint8_t mode1;
  /// Reserved for future use
  uint8_t mode2;
} panthera_interfaces__msg__PosCmd;

// Struct for a sequence of panthera_interfaces__msg__PosCmd.
typedef struct panthera_interfaces__msg__PosCmd__Sequence
{
  panthera_interfaces__msg__PosCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panthera_interfaces__msg__PosCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__STRUCT_H_
