// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice
#include "panthera_interfaces/msg/detail/arm_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "panthera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "panthera_interfaces/msg/detail/arm_status__struct.h"
#include "panthera_interfaces/msg/detail/arm_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // error_message
#include "rosidl_runtime_c/string_functions.h"  // error_message
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_panthera_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ArmStatus__ros_msg_type = panthera_interfaces__msg__ArmStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
bool cdr_serialize_panthera_interfaces__msg__ArmStatus(
  const panthera_interfaces__msg__ArmStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: arm_enabled
  {
    cdr << (ros_message->arm_enabled ? true : false);
  }

  // Field name: motion_status
  {
    cdr << ros_message->motion_status;
  }

  // Field name: error_message
  {
    const rosidl_runtime_c__String * str = &ros_message->error_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_modes
  {
    size_t size = 6;
    auto array_ptr = ros_message->motor_modes;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: motor_faults
  {
    size_t size = 6;
    auto array_ptr = ros_message->motor_faults;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: joint_at_limit
  {
    size_t size = 6;
    auto array_ptr = ros_message->joint_at_limit;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: gripper_position
  {
    cdr << ros_message->gripper_position;
  }

  // Field name: gripper_fault
  {
    cdr << ros_message->gripper_fault;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
bool cdr_deserialize_panthera_interfaces__msg__ArmStatus(
  eprosima::fastcdr::Cdr & cdr,
  panthera_interfaces__msg__ArmStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: arm_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arm_enabled = tmp ? true : false;
  }

  // Field name: motion_status
  {
    cdr >> ros_message->motion_status;
  }

  // Field name: error_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_message.data) {
      rosidl_runtime_c__String__init(&ros_message->error_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_message'\n");
      return false;
    }
  }

  // Field name: motor_modes
  {
    size_t size = 6;
    auto array_ptr = ros_message->motor_modes;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: motor_faults
  {
    size_t size = 6;
    auto array_ptr = ros_message->motor_faults;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: joint_at_limit
  {
    size_t size = 6;
    auto array_ptr = ros_message->joint_at_limit;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: gripper_position
  {
    cdr >> ros_message->gripper_position;
  }

  // Field name: gripper_fault
  {
    cdr >> ros_message->gripper_fault;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t get_serialized_size_panthera_interfaces__msg__ArmStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmStatus__ros_msg_type * ros_message = static_cast<const _ArmStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: arm_enabled
  {
    size_t item_size = sizeof(ros_message->arm_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motion_status
  {
    size_t item_size = sizeof(ros_message->motion_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_message.size + 1);

  // Field name: motor_modes
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->motor_modes;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_faults
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->motor_faults;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_at_limit
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->joint_at_limit;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_position
  {
    size_t item_size = sizeof(ros_message->gripper_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_fault
  {
    size_t item_size = sizeof(ros_message->gripper_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t max_serialized_size_panthera_interfaces__msg__ArmStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: arm_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motion_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: error_message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: motor_modes
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motor_faults
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joint_at_limit
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: gripper_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = panthera_interfaces__msg__ArmStatus;
    is_plain =
      (
      offsetof(DataType, gripper_fault) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
bool cdr_serialize_key_panthera_interfaces__msg__ArmStatus(
  const panthera_interfaces__msg__ArmStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: arm_enabled
  {
    cdr << (ros_message->arm_enabled ? true : false);
  }

  // Field name: motion_status
  {
    cdr << ros_message->motion_status;
  }

  // Field name: error_message
  {
    const rosidl_runtime_c__String * str = &ros_message->error_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_modes
  {
    size_t size = 6;
    auto array_ptr = ros_message->motor_modes;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: motor_faults
  {
    size_t size = 6;
    auto array_ptr = ros_message->motor_faults;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: joint_at_limit
  {
    size_t size = 6;
    auto array_ptr = ros_message->joint_at_limit;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: gripper_position
  {
    cdr << ros_message->gripper_position;
  }

  // Field name: gripper_fault
  {
    cdr << ros_message->gripper_fault;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t get_serialized_size_key_panthera_interfaces__msg__ArmStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmStatus__ros_msg_type * ros_message = static_cast<const _ArmStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: arm_enabled
  {
    size_t item_size = sizeof(ros_message->arm_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motion_status
  {
    size_t item_size = sizeof(ros_message->motion_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_message.size + 1);

  // Field name: motor_modes
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->motor_modes;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motor_faults
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->motor_faults;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_at_limit
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->joint_at_limit;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_position
  {
    size_t item_size = sizeof(ros_message->gripper_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gripper_fault
  {
    size_t item_size = sizeof(ros_message->gripper_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panthera_interfaces
size_t max_serialized_size_key_panthera_interfaces__msg__ArmStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: arm_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motion_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: error_message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: motor_modes
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: motor_faults
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joint_at_limit
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gripper_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: gripper_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = panthera_interfaces__msg__ArmStatus;
    is_plain =
      (
      offsetof(DataType, gripper_fault) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ArmStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const panthera_interfaces__msg__ArmStatus * ros_message = static_cast<const panthera_interfaces__msg__ArmStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_panthera_interfaces__msg__ArmStatus(ros_message, cdr);
}

static bool _ArmStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  panthera_interfaces__msg__ArmStatus * ros_message = static_cast<panthera_interfaces__msg__ArmStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_panthera_interfaces__msg__ArmStatus(cdr, ros_message);
}

static uint32_t _ArmStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panthera_interfaces__msg__ArmStatus(
      untyped_ros_message, 0));
}

static size_t _ArmStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panthera_interfaces__msg__ArmStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmStatus = {
  "panthera_interfaces::msg",
  "ArmStatus",
  _ArmStatus__cdr_serialize,
  _ArmStatus__cdr_deserialize,
  _ArmStatus__get_serialized_size,
  _ArmStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ArmStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmStatus,
  get_message_typesupport_handle_function,
  &panthera_interfaces__msg__ArmStatus__get_type_hash,
  &panthera_interfaces__msg__ArmStatus__get_type_description,
  &panthera_interfaces__msg__ArmStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panthera_interfaces, msg, ArmStatus)() {
  return &_ArmStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
