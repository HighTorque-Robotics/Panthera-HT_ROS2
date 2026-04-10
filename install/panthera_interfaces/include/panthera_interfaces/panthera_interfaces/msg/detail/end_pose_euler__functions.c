// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panthera_interfaces:msg/EndPoseEuler.idl
// generated code does not contain a copyright notice
#include "panthera_interfaces/msg/detail/end_pose_euler__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
panthera_interfaces__msg__EndPoseEuler__init(panthera_interfaces__msg__EndPoseEuler * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    panthera_interfaces__msg__EndPoseEuler__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  return true;
}

void
panthera_interfaces__msg__EndPoseEuler__fini(panthera_interfaces__msg__EndPoseEuler * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
}

bool
panthera_interfaces__msg__EndPoseEuler__are_equal(const panthera_interfaces__msg__EndPoseEuler * lhs, const panthera_interfaces__msg__EndPoseEuler * rhs)
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
  return true;
}

bool
panthera_interfaces__msg__EndPoseEuler__copy(
  const panthera_interfaces__msg__EndPoseEuler * input,
  panthera_interfaces__msg__EndPoseEuler * output)
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
  return true;
}

panthera_interfaces__msg__EndPoseEuler *
panthera_interfaces__msg__EndPoseEuler__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__EndPoseEuler * msg = (panthera_interfaces__msg__EndPoseEuler *)allocator.allocate(sizeof(panthera_interfaces__msg__EndPoseEuler), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panthera_interfaces__msg__EndPoseEuler));
  bool success = panthera_interfaces__msg__EndPoseEuler__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panthera_interfaces__msg__EndPoseEuler__destroy(panthera_interfaces__msg__EndPoseEuler * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panthera_interfaces__msg__EndPoseEuler__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panthera_interfaces__msg__EndPoseEuler__Sequence__init(panthera_interfaces__msg__EndPoseEuler__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__EndPoseEuler * data = NULL;

  if (size) {
    data = (panthera_interfaces__msg__EndPoseEuler *)allocator.zero_allocate(size, sizeof(panthera_interfaces__msg__EndPoseEuler), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panthera_interfaces__msg__EndPoseEuler__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panthera_interfaces__msg__EndPoseEuler__fini(&data[i - 1]);
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
panthera_interfaces__msg__EndPoseEuler__Sequence__fini(panthera_interfaces__msg__EndPoseEuler__Sequence * array)
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
      panthera_interfaces__msg__EndPoseEuler__fini(&array->data[i]);
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

panthera_interfaces__msg__EndPoseEuler__Sequence *
panthera_interfaces__msg__EndPoseEuler__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__msg__EndPoseEuler__Sequence * array = (panthera_interfaces__msg__EndPoseEuler__Sequence *)allocator.allocate(sizeof(panthera_interfaces__msg__EndPoseEuler__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panthera_interfaces__msg__EndPoseEuler__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panthera_interfaces__msg__EndPoseEuler__Sequence__destroy(panthera_interfaces__msg__EndPoseEuler__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panthera_interfaces__msg__EndPoseEuler__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panthera_interfaces__msg__EndPoseEuler__Sequence__are_equal(const panthera_interfaces__msg__EndPoseEuler__Sequence * lhs, const panthera_interfaces__msg__EndPoseEuler__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panthera_interfaces__msg__EndPoseEuler__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panthera_interfaces__msg__EndPoseEuler__Sequence__copy(
  const panthera_interfaces__msg__EndPoseEuler__Sequence * input,
  panthera_interfaces__msg__EndPoseEuler__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panthera_interfaces__msg__EndPoseEuler);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panthera_interfaces__msg__EndPoseEuler * data =
      (panthera_interfaces__msg__EndPoseEuler *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panthera_interfaces__msg__EndPoseEuler__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panthera_interfaces__msg__EndPoseEuler__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panthera_interfaces__msg__EndPoseEuler__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
