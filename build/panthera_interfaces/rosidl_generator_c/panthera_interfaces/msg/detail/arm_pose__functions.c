// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panthera_interfaces:msg/ArmPose.idl
// generated code does not contain a copyright notice
#include "panthera_interfaces/msg/detail/arm_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
panthera_interfaces__msg__ArmPose__init(panthera_interfaces__msg__ArmPose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // cartesian_path
  return true;
}

void
panthera_interfaces__msg__ArmPose__fini(panthera_interfaces__msg__ArmPose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // cartesian_path
}

bool
panthera_interfaces__msg__ArmPose__are_equal(const panthera_interfaces__msg__ArmPose * lhs, const panthera_interfaces__msg__ArmPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // cartesian_path
  if (lhs->cartesian_path != rhs->cartesian_path) {
    return false;
  }
  return true;
}

bool
panthera_interfaces__msg__ArmPose__copy(
  const panthera_interfaces__msg__ArmPose * input,
  panthera_interfaces__msg__ArmPose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // cartesian_path
  output->cartesian_path = input->cartesian_path;
  return true;
}

panthera_interfaces__msg__ArmPose *
panthera_interfaces__msg__ArmPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__ArmPose * msg = (panthera_interfaces__msg__ArmPose *)allocator.allocate(sizeof(panthera_interfaces__msg__ArmPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panthera_interfaces__msg__ArmPose));
  bool success = panthera_interfaces__msg__ArmPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panthera_interfaces__msg__ArmPose__destroy(panthera_interfaces__msg__ArmPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panthera_interfaces__msg__ArmPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panthera_interfaces__msg__ArmPose__Sequence__init(panthera_interfaces__msg__ArmPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__ArmPose * data = NULL;

  if (size) {
    data = (panthera_interfaces__msg__ArmPose *)allocator.zero_allocate(size, sizeof(panthera_interfaces__msg__ArmPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panthera_interfaces__msg__ArmPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panthera_interfaces__msg__ArmPose__fini(&data[i - 1]);
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
panthera_interfaces__msg__ArmPose__Sequence__fini(panthera_interfaces__msg__ArmPose__Sequence * array)
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
      panthera_interfaces__msg__ArmPose__fini(&array->data[i]);
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

panthera_interfaces__msg__ArmPose__Sequence *
panthera_interfaces__msg__ArmPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__ArmPose__Sequence * array = (panthera_interfaces__msg__ArmPose__Sequence *)allocator.allocate(sizeof(panthera_interfaces__msg__ArmPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panthera_interfaces__msg__ArmPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panthera_interfaces__msg__ArmPose__Sequence__destroy(panthera_interfaces__msg__ArmPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panthera_interfaces__msg__ArmPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panthera_interfaces__msg__ArmPose__Sequence__are_equal(const panthera_interfaces__msg__ArmPose__Sequence * lhs, const panthera_interfaces__msg__ArmPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panthera_interfaces__msg__ArmPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panthera_interfaces__msg__ArmPose__Sequence__copy(
  const panthera_interfaces__msg__ArmPose__Sequence * input,
  panthera_interfaces__msg__ArmPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panthera_interfaces__msg__ArmPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panthera_interfaces__msg__ArmPose * data =
      (panthera_interfaces__msg__ArmPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panthera_interfaces__msg__ArmPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panthera_interfaces__msg__ArmPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panthera_interfaces__msg__ArmPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
