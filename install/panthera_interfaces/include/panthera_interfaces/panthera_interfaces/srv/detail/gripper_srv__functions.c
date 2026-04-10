// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from panthera_interfaces:srv/GripperSrv.idl
// generated code does not contain a copyright notice
#include "panthera_interfaces/srv/detail/gripper_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
panthera_interfaces__srv__GripperSrv_Request__init(panthera_interfaces__srv__GripperSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // gripper_angle
  // gripper_effort
  // gripper_code
  // set_zero
  return true;
}

void
panthera_interfaces__srv__GripperSrv_Request__fini(panthera_interfaces__srv__GripperSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // gripper_angle
  // gripper_effort
  // gripper_code
  // set_zero
}

bool
panthera_interfaces__srv__GripperSrv_Request__are_equal(const panthera_interfaces__srv__GripperSrv_Request * lhs, const panthera_interfaces__srv__GripperSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripper_angle
  if (lhs->gripper_angle != rhs->gripper_angle) {
    return false;
  }
  // gripper_effort
  if (lhs->gripper_effort != rhs->gripper_effort) {
    return false;
  }
  // gripper_code
  if (lhs->gripper_code != rhs->gripper_code) {
    return false;
  }
  // set_zero
  if (lhs->set_zero != rhs->set_zero) {
    return false;
  }
  return true;
}

bool
panthera_interfaces__srv__GripperSrv_Request__copy(
  const panthera_interfaces__srv__GripperSrv_Request * input,
  panthera_interfaces__srv__GripperSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // gripper_angle
  output->gripper_angle = input->gripper_angle;
  // gripper_effort
  output->gripper_effort = input->gripper_effort;
  // gripper_code
  output->gripper_code = input->gripper_code;
  // set_zero
  output->set_zero = input->set_zero;
  return true;
}

panthera_interfaces__srv__GripperSrv_Request *
panthera_interfaces__srv__GripperSrv_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Request * msg = (panthera_interfaces__srv__GripperSrv_Request *)allocator.allocate(sizeof(panthera_interfaces__srv__GripperSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panthera_interfaces__srv__GripperSrv_Request));
  bool success = panthera_interfaces__srv__GripperSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panthera_interfaces__srv__GripperSrv_Request__destroy(panthera_interfaces__srv__GripperSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panthera_interfaces__srv__GripperSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panthera_interfaces__srv__GripperSrv_Request__Sequence__init(panthera_interfaces__srv__GripperSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Request * data = NULL;

  if (size) {
    data = (panthera_interfaces__srv__GripperSrv_Request *)allocator.zero_allocate(size, sizeof(panthera_interfaces__srv__GripperSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panthera_interfaces__srv__GripperSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panthera_interfaces__srv__GripperSrv_Request__fini(&data[i - 1]);
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
panthera_interfaces__srv__GripperSrv_Request__Sequence__fini(panthera_interfaces__srv__GripperSrv_Request__Sequence * array)
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
      panthera_interfaces__srv__GripperSrv_Request__fini(&array->data[i]);
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

panthera_interfaces__srv__GripperSrv_Request__Sequence *
panthera_interfaces__srv__GripperSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Request__Sequence * array = (panthera_interfaces__srv__GripperSrv_Request__Sequence *)allocator.allocate(sizeof(panthera_interfaces__srv__GripperSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panthera_interfaces__srv__GripperSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panthera_interfaces__srv__GripperSrv_Request__Sequence__destroy(panthera_interfaces__srv__GripperSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panthera_interfaces__srv__GripperSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panthera_interfaces__srv__GripperSrv_Request__Sequence__are_equal(const panthera_interfaces__srv__GripperSrv_Request__Sequence * lhs, const panthera_interfaces__srv__GripperSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panthera_interfaces__srv__GripperSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panthera_interfaces__srv__GripperSrv_Request__Sequence__copy(
  const panthera_interfaces__srv__GripperSrv_Request__Sequence * input,
  panthera_interfaces__srv__GripperSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panthera_interfaces__srv__GripperSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panthera_interfaces__srv__GripperSrv_Request * data =
      (panthera_interfaces__srv__GripperSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panthera_interfaces__srv__GripperSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panthera_interfaces__srv__GripperSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panthera_interfaces__srv__GripperSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
panthera_interfaces__srv__GripperSrv_Response__init(panthera_interfaces__srv__GripperSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // status
  return true;
}

void
panthera_interfaces__srv__GripperSrv_Response__fini(panthera_interfaces__srv__GripperSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // code
  // status
}

bool
panthera_interfaces__srv__GripperSrv_Response__are_equal(const panthera_interfaces__srv__GripperSrv_Response * lhs, const panthera_interfaces__srv__GripperSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
panthera_interfaces__srv__GripperSrv_Response__copy(
  const panthera_interfaces__srv__GripperSrv_Response * input,
  panthera_interfaces__srv__GripperSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // status
  output->status = input->status;
  return true;
}

panthera_interfaces__srv__GripperSrv_Response *
panthera_interfaces__srv__GripperSrv_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Response * msg = (panthera_interfaces__srv__GripperSrv_Response *)allocator.allocate(sizeof(panthera_interfaces__srv__GripperSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panthera_interfaces__srv__GripperSrv_Response));
  bool success = panthera_interfaces__srv__GripperSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panthera_interfaces__srv__GripperSrv_Response__destroy(panthera_interfaces__srv__GripperSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panthera_interfaces__srv__GripperSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panthera_interfaces__srv__GripperSrv_Response__Sequence__init(panthera_interfaces__srv__GripperSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Response * data = NULL;

  if (size) {
    data = (panthera_interfaces__srv__GripperSrv_Response *)allocator.zero_allocate(size, sizeof(panthera_interfaces__srv__GripperSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panthera_interfaces__srv__GripperSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panthera_interfaces__srv__GripperSrv_Response__fini(&data[i - 1]);
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
panthera_interfaces__srv__GripperSrv_Response__Sequence__fini(panthera_interfaces__srv__GripperSrv_Response__Sequence * array)
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
      panthera_interfaces__srv__GripperSrv_Response__fini(&array->data[i]);
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

panthera_interfaces__srv__GripperSrv_Response__Sequence *
panthera_interfaces__srv__GripperSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Response__Sequence * array = (panthera_interfaces__srv__GripperSrv_Response__Sequence *)allocator.allocate(sizeof(panthera_interfaces__srv__GripperSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panthera_interfaces__srv__GripperSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panthera_interfaces__srv__GripperSrv_Response__Sequence__destroy(panthera_interfaces__srv__GripperSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panthera_interfaces__srv__GripperSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panthera_interfaces__srv__GripperSrv_Response__Sequence__are_equal(const panthera_interfaces__srv__GripperSrv_Response__Sequence * lhs, const panthera_interfaces__srv__GripperSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panthera_interfaces__srv__GripperSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panthera_interfaces__srv__GripperSrv_Response__Sequence__copy(
  const panthera_interfaces__srv__GripperSrv_Response__Sequence * input,
  panthera_interfaces__srv__GripperSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panthera_interfaces__srv__GripperSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panthera_interfaces__srv__GripperSrv_Response * data =
      (panthera_interfaces__srv__GripperSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panthera_interfaces__srv__GripperSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panthera_interfaces__srv__GripperSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panthera_interfaces__srv__GripperSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "panthera_interfaces/srv/detail/gripper_srv__functions.h"

bool
panthera_interfaces__srv__GripperSrv_Event__init(panthera_interfaces__srv__GripperSrv_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    panthera_interfaces__srv__GripperSrv_Event__fini(msg);
    return false;
  }
  // request
  if (!panthera_interfaces__srv__GripperSrv_Request__Sequence__init(&msg->request, 0)) {
    panthera_interfaces__srv__GripperSrv_Event__fini(msg);
    return false;
  }
  // response
  if (!panthera_interfaces__srv__GripperSrv_Response__Sequence__init(&msg->response, 0)) {
    panthera_interfaces__srv__GripperSrv_Event__fini(msg);
    return false;
  }
  return true;
}

void
panthera_interfaces__srv__GripperSrv_Event__fini(panthera_interfaces__srv__GripperSrv_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  panthera_interfaces__srv__GripperSrv_Request__Sequence__fini(&msg->request);
  // response
  panthera_interfaces__srv__GripperSrv_Response__Sequence__fini(&msg->response);
}

bool
panthera_interfaces__srv__GripperSrv_Event__are_equal(const panthera_interfaces__srv__GripperSrv_Event * lhs, const panthera_interfaces__srv__GripperSrv_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!panthera_interfaces__srv__GripperSrv_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!panthera_interfaces__srv__GripperSrv_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
panthera_interfaces__srv__GripperSrv_Event__copy(
  const panthera_interfaces__srv__GripperSrv_Event * input,
  panthera_interfaces__srv__GripperSrv_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!panthera_interfaces__srv__GripperSrv_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!panthera_interfaces__srv__GripperSrv_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

panthera_interfaces__srv__GripperSrv_Event *
panthera_interfaces__srv__GripperSrv_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Event * msg = (panthera_interfaces__srv__GripperSrv_Event *)allocator.allocate(sizeof(panthera_interfaces__srv__GripperSrv_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(panthera_interfaces__srv__GripperSrv_Event));
  bool success = panthera_interfaces__srv__GripperSrv_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
panthera_interfaces__srv__GripperSrv_Event__destroy(panthera_interfaces__srv__GripperSrv_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    panthera_interfaces__srv__GripperSrv_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
panthera_interfaces__srv__GripperSrv_Event__Sequence__init(panthera_interfaces__srv__GripperSrv_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Event * data = NULL;

  if (size) {
    data = (panthera_interfaces__srv__GripperSrv_Event *)allocator.zero_allocate(size, sizeof(panthera_interfaces__srv__GripperSrv_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = panthera_interfaces__srv__GripperSrv_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        panthera_interfaces__srv__GripperSrv_Event__fini(&data[i - 1]);
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
panthera_interfaces__srv__GripperSrv_Event__Sequence__fini(panthera_interfaces__srv__GripperSrv_Event__Sequence * array)
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
      panthera_interfaces__srv__GripperSrv_Event__fini(&array->data[i]);
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

panthera_interfaces__srv__GripperSrv_Event__Sequence *
panthera_interfaces__srv__GripperSrv_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  panthera_interfaces__srv__GripperSrv_Event__Sequence * array = (panthera_interfaces__srv__GripperSrv_Event__Sequence *)allocator.allocate(sizeof(panthera_interfaces__srv__GripperSrv_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = panthera_interfaces__srv__GripperSrv_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
panthera_interfaces__srv__GripperSrv_Event__Sequence__destroy(panthera_interfaces__srv__GripperSrv_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    panthera_interfaces__srv__GripperSrv_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
panthera_interfaces__srv__GripperSrv_Event__Sequence__are_equal(const panthera_interfaces__srv__GripperSrv_Event__Sequence * lhs, const panthera_interfaces__srv__GripperSrv_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!panthera_interfaces__srv__GripperSrv_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
panthera_interfaces__srv__GripperSrv_Event__Sequence__copy(
  const panthera_interfaces__srv__GripperSrv_Event__Sequence * input,
  panthera_interfaces__srv__GripperSrv_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(panthera_interfaces__srv__GripperSrv_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    panthera_interfaces__srv__GripperSrv_Event * data =
      (panthera_interfaces__srv__GripperSrv_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!panthera_interfaces__srv__GripperSrv_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          panthera_interfaces__srv__GripperSrv_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!panthera_interfaces__srv__GripperSrv_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
