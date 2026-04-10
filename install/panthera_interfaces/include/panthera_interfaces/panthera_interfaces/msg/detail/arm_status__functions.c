// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice
#include "panthera_interfaces/msg/detail/arm_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

bool
panthera_interfaces__msg__ArmStatus__init(panthera_interfaces__msg__ArmStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    panthera_interfaces__msg__ArmStatus__fini(msg);
    return false;
  }
  // arm_enabled
  // motion_status
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    panthera_interfaces__msg__ArmStatus__fini(msg);
    return false;
  }
  // motor_modes
  // motor_faults
  // joint_at_limit
  // gripper_position
  // gripper_fault
  return true;
}

void
panthera_interfaces__msg__ArmStatus__fini(panthera_interfaces__msg__ArmStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // arm_enabled
  // motion_status
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // motor_modes
  // motor_faults
  // joint_at_limit
  // gripper_position
  // gripper_fault
}

bool
panthera_interfaces__msg__ArmStatus__are_equal(const panthera_interfaces__msg__ArmStatus * lhs, const panthera_interfaces__msg__ArmStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // arm_enabled
  if (lhs->arm_enabled != rhs->arm_enabled) {
    return false;
  }
  // motion_status
  if (lhs->motion_status != rhs->motion_status) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // motor_modes
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->motor_modes[i] != rhs->motor_modes[i]) {
      return false;
    }
  }
  // motor_faults
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->motor_faults[i] != rhs->motor_faults[i]) {
      return false;
    }
  }
  // joint_at_limit
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->joint_at_limit[i] != rhs->joint_at_limit[i]) {
      return false;
    }
  }
  // gripper_position
  if (lhs->gripper_position != rhs->gripper_position) {
    return false;
  }
  // gripper_fault
  if (lhs->gripper_fault != rhs->gripper_fault) {
    return false;
  }
  return true;
}

bool
panthera_interfaces__msg__ArmStatus__copy(
  const panthera_interfaces__msg__ArmStatus * input,
  panthera_interfaces__msg__ArmStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // arm_enabled
  output->arm_enabled = input->arm_enabled;
  // motion_status
  output->motion_status = input->motion_status;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // motor_modes
  for (size_t i = 0; i < 6; ++i) {
    output->motor_modes[i] = input->motor_modes[i];
  }
  // motor_faults
  for (size_t i = 0; i < 6; ++i) {
    output->motor_faults[i] = input->motor_faults[i];
  }
  // joint_at_limit
  for (size_t i = 0; i < 6; ++i) {
    output->joint_at_limit[i] = input->joint_at_limit[i];
  }
  // gripper_position
  output->gripper_position = input->gripper_position;
  // gripper_fault
  output->gripper_fault = input->gripper_fault;
  return true;
}

panthera_interfaces__msg__ArmStatus *
panthera_interfaces__msg__ArmStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__ArmStatus * msg = (panthera_interfaces__msg__ArmStatus *)allocator.allocate(sizeof(panthera_interfaces__msg__ArmStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panthera_interfaces__msg__ArmStatus));
  bool success = panthera_interfaces__msg__ArmStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panthera_interfaces__msg__ArmStatus__destroy(panthera_interfaces__msg__ArmStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panthera_interfaces__msg__ArmStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panthera_interfaces__msg__ArmStatus__Sequence__init(panthera_interfaces__msg__ArmStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__ArmStatus * data = NULL;

  if (size) {
    data = (panthera_interfaces__msg__ArmStatus *)allocator.zero_allocate(size, sizeof(panthera_interfaces__msg__ArmStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panthera_interfaces__msg__ArmStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panthera_interfaces__msg__ArmStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
panthera_interfaces__msg__ArmStatus__Sequence__fini(panthera_interfaces__msg__ArmStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      panthera_interfaces__msg__ArmStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

panthera_interfaces__msg__ArmStatus__Sequence *
panthera_interfaces__msg__ArmStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__ArmStatus__Sequence * array = (panthera_interfaces__msg__ArmStatus__Sequence *)allocator.allocate(sizeof(panthera_interfaces__msg__ArmStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panthera_interfaces__msg__ArmStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panthera_interfaces__msg__ArmStatus__Sequence__destroy(panthera_interfaces__msg__ArmStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panthera_interfaces__msg__ArmStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panthera_interfaces__msg__ArmStatus__Sequence__are_equal(const panthera_interfaces__msg__ArmStatus__Sequence * lhs, const panthera_interfaces__msg__ArmStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panthera_interfaces__msg__ArmStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panthera_interfaces__msg__ArmStatus__Sequence__copy(
  const panthera_interfaces__msg__ArmStatus__Sequence * input,
  panthera_interfaces__msg__ArmStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panthera_interfaces__msg__ArmStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panthera_interfaces__msg__ArmStatus * data =
      (panthera_interfaces__msg__ArmStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panthera_interfaces__msg__ArmStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panthera_interfaces__msg__ArmStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panthera_interfaces__msg__ArmStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
