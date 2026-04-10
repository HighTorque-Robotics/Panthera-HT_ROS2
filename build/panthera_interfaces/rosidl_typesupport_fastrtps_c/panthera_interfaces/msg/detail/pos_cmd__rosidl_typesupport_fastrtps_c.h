// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from panthera_interfaces:msg/PosCmd.idl
// generated code does not contain a copyright notice
#ifndef PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "panthera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "panthera_interfaces/msg/detail/pos_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
bool cdr_serialize_panthera_interfaces__msg__PosCmd(
  const panthera_interfaces__msg__PosCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
bool cdr_deserialize_panthera_interfaces__msg__PosCmd(
  eprosima::fastcdr::Cdr &,
  panthera_interfaces__msg__PosCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t get_serialized_size_panthera_interfaces__msg__PosCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t max_serialized_size_panthera_interfaces__msg__PosCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
bool cdr_serialize_key_panthera_interfaces__msg__PosCmd(
  const panthera_interfaces__msg__PosCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t get_serialized_size_key_panthera_interfaces__msg__PosCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t max_serialized_size_key_panthera_interfaces__msg__PosCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, msg, PosCmd)();

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
