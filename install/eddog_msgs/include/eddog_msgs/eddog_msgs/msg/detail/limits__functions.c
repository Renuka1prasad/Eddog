// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eddog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice
#include "eddog_msgs/msg/detail/limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
eddog_msgs__msg__Limits__init(eddog_msgs__msg__Limits * msg)
{
  if (!msg) {
    return false;
  }
  // eular_ang_range
  msg->eular_ang_range[0] = 40;
  msg->eular_ang_range[1] = 45;
  msg->eular_ang_range[2] = 50;
  // height_range
  msg->height_range[0] = 80;
  msg->height_range[1] = 240;
  // steplength_range
  msg->steplength_range[0] = 250;
  msg->steplength_range[1] = 250;
  return true;
}

void
eddog_msgs__msg__Limits__fini(eddog_msgs__msg__Limits * msg)
{
  if (!msg) {
    return;
  }
  // eular_ang_range
  // height_range
  // steplength_range
}

bool
eddog_msgs__msg__Limits__are_equal(const eddog_msgs__msg__Limits * lhs, const eddog_msgs__msg__Limits * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // eular_ang_range
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->eular_ang_range[i] != rhs->eular_ang_range[i]) {
      return false;
    }
  }
  // height_range
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->height_range[i] != rhs->height_range[i]) {
      return false;
    }
  }
  // steplength_range
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->steplength_range[i] != rhs->steplength_range[i]) {
      return false;
    }
  }
  return true;
}

bool
eddog_msgs__msg__Limits__copy(
  const eddog_msgs__msg__Limits * input,
  eddog_msgs__msg__Limits * output)
{
  if (!input || !output) {
    return false;
  }
  // eular_ang_range
  for (size_t i = 0; i < 3; ++i) {
    output->eular_ang_range[i] = input->eular_ang_range[i];
  }
  // height_range
  for (size_t i = 0; i < 2; ++i) {
    output->height_range[i] = input->height_range[i];
  }
  // steplength_range
  for (size_t i = 0; i < 2; ++i) {
    output->steplength_range[i] = input->steplength_range[i];
  }
  return true;
}

eddog_msgs__msg__Limits *
eddog_msgs__msg__Limits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eddog_msgs__msg__Limits * msg = (eddog_msgs__msg__Limits *)allocator.allocate(sizeof(eddog_msgs__msg__Limits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eddog_msgs__msg__Limits));
  bool success = eddog_msgs__msg__Limits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eddog_msgs__msg__Limits__destroy(eddog_msgs__msg__Limits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eddog_msgs__msg__Limits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eddog_msgs__msg__Limits__Sequence__init(eddog_msgs__msg__Limits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eddog_msgs__msg__Limits * data = NULL;

  if (size) {
    data = (eddog_msgs__msg__Limits *)allocator.zero_allocate(size, sizeof(eddog_msgs__msg__Limits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eddog_msgs__msg__Limits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eddog_msgs__msg__Limits__fini(&data[i - 1]);
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
eddog_msgs__msg__Limits__Sequence__fini(eddog_msgs__msg__Limits__Sequence * array)
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
      eddog_msgs__msg__Limits__fini(&array->data[i]);
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

eddog_msgs__msg__Limits__Sequence *
eddog_msgs__msg__Limits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eddog_msgs__msg__Limits__Sequence * array = (eddog_msgs__msg__Limits__Sequence *)allocator.allocate(sizeof(eddog_msgs__msg__Limits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eddog_msgs__msg__Limits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eddog_msgs__msg__Limits__Sequence__destroy(eddog_msgs__msg__Limits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eddog_msgs__msg__Limits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eddog_msgs__msg__Limits__Sequence__are_equal(const eddog_msgs__msg__Limits__Sequence * lhs, const eddog_msgs__msg__Limits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eddog_msgs__msg__Limits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eddog_msgs__msg__Limits__Sequence__copy(
  const eddog_msgs__msg__Limits__Sequence * input,
  eddog_msgs__msg__Limits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eddog_msgs__msg__Limits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eddog_msgs__msg__Limits * data =
      (eddog_msgs__msg__Limits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eddog_msgs__msg__Limits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eddog_msgs__msg__Limits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eddog_msgs__msg__Limits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
