// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "panthera_interfaces/msg/detail/arm_status__functions.h"
#include "panthera_interfaces/msg/detail/arm_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace panthera_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panthera_interfaces::msg::ArmStatus(_init);
}

void ArmStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panthera_interfaces::msg::ArmStatus *>(message_memory);
  typed_message->~ArmStatus();
}

size_t size_function__ArmStatus__motor_modes(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmStatus__motor_modes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmStatus__motor_modes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmStatus__motor_modes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__ArmStatus__motor_modes(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__ArmStatus__motor_modes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__ArmStatus__motor_modes(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__ArmStatus__motor_faults(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmStatus__motor_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmStatus__motor_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmStatus__motor_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__ArmStatus__motor_faults(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__ArmStatus__motor_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__ArmStatus__motor_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__ArmStatus__joint_at_limit(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmStatus__joint_at_limit(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmStatus__joint_at_limit(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmStatus__joint_at_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__ArmStatus__joint_at_limit(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__ArmStatus__joint_at_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__ArmStatus__joint_at_limit(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmStatus_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, arm_enabled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motion_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, motion_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, error_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_modes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, motor_modes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmStatus__motor_modes,  // size() function pointer
    get_const_function__ArmStatus__motor_modes,  // get_const(index) function pointer
    get_function__ArmStatus__motor_modes,  // get(index) function pointer
    fetch_function__ArmStatus__motor_modes,  // fetch(index, &value) function pointer
    assign_function__ArmStatus__motor_modes,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, motor_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmStatus__motor_faults,  // size() function pointer
    get_const_function__ArmStatus__motor_faults,  // get_const(index) function pointer
    get_function__ArmStatus__motor_faults,  // get(index) function pointer
    fetch_function__ArmStatus__motor_faults,  // fetch(index, &value) function pointer
    assign_function__ArmStatus__motor_faults,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_at_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, joint_at_limit),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmStatus__joint_at_limit,  // size() function pointer
    get_const_function__ArmStatus__joint_at_limit,  // get_const(index) function pointer
    get_function__ArmStatus__joint_at_limit,  // get(index) function pointer
    fetch_function__ArmStatus__joint_at_limit,  // fetch(index, &value) function pointer
    assign_function__ArmStatus__joint_at_limit,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gripper_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, gripper_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gripper_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panthera_interfaces::msg::ArmStatus, gripper_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmStatus_message_members = {
  "panthera_interfaces::msg",  // message namespace
  "ArmStatus",  // message name
  9,  // number of fields
  sizeof(panthera_interfaces::msg::ArmStatus),
  false,  // has_any_key_member_
  ArmStatus_message_member_array,  // message members
  ArmStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmStatus_message_members,
  get_message_typesupport_handle_function,
  &panthera_interfaces__msg__ArmStatus__get_type_hash,
  &panthera_interfaces__msg__ArmStatus__get_type_description,
  &panthera_interfaces__msg__ArmStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace panthera_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panthera_interfaces::msg::ArmStatus>()
{
  return &::panthera_interfaces::msg::rosidl_typesupport_introspection_cpp::ArmStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panthera_interfaces, msg, ArmStatus)() {
  return &::panthera_interfaces::msg::rosidl_typesupport_introspection_cpp::ArmStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
