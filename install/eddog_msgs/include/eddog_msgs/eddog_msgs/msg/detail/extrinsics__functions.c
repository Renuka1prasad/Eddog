// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eddog_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice
#include "eddog_msgs/msg/detail/extrinsics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
eddog_msgs__msg__Extrinsics__init(eddog_msgs__msg__Extrinsics * msg)
{
  if (!msg) {
    return false;
  }
  // rotation
  // translation
  return true;
}

void
eddog_msgs__msg__Extrinsics__fini(eddog_msgs__msg__Extrinsics * msg)
{
  if (!msg) {
    return;
  }
  // rotation
  // translation
}

bool
eddog_msgs__msg__Extrinsics__are_equal(const eddog_msgs__msg__Extrinsics * lhs, const eddog_msgs__msg__Extrinsics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rotation
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->rotation[i] != rhs->rotation[i]) {
      return false;
    }
  }
  // translation
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->translation[i] != rhs->translation[i]) {
      return false;
    }
  }
  return true;
}

bool
eddog_msgs__msg__Extrinsics__copy(
  const eddog_msgs__msg__Extrinsics * input,
  eddog_msgs__msg__Extrinsics * output)
{
  if (!input || !output) {
    return false;
  }
  // rotation
  for (size_t i = 0; i < 9; ++i) {
    output->rotation[i] = input->rotation[i];
  }
  // translation
  for (size_t i = 0; i < 3; ++i) {
    output->translation[i] = input->translation[i];
  }
  return true;
}

eddog_msgs__msg__Extrinsics *
eddog_msgs__msg__Extrinsics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eddog_msgs__msg__Extrinsics * msg = (eddog_msgs__msg__Extrinsics *)allocator.allocate(sizeof(eddog_msgs__msg__Extrinsics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eddog_msgs__msg__Extrinsics));
  bool success = eddog_msgs__msg__Extrinsics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eddog_msgs__msg__Extrinsics__destroy(eddog_msgs__msg__Extrinsics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eddog_msgs__msg__Extrinsics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eddog_msgs__msg__Extrinsics__Sequence__init(eddog_msgs__msg__Extrinsics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eddog_msgs__msg__Extrinsics * data = NULL;

  if (size) {
    data = (eddog_msgs__msg__Extrinsics *)allocator.zero_allocate(size, sizeof(eddog_msgs__msg__Extrinsics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eddog_msgs__msg__Extrinsics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eddog_msgs__msg__Extrinsics__fini(&data[i - 1]);
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
eddog_msgs__msg__Extrinsics__Sequence__fini(eddog_msgs__msg__Extrinsics__Sequence * array)
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
      eddog_msgs__msg__Extrinsics__fini(&array->data[i]);
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

eddog_msgs__msg__Extrinsics__Sequence *
eddog_msgs__msg__Extrinsics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eddog_msgs__msg__Extrinsics__Sequence * array = (eddog_msgs__msg__Extrinsics__Sequence *)allocator.allocate(sizeof(eddog_msgs__msg__Extrinsics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eddog_msgs__msg__Extrinsics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eddog_msgs__msg__Extrinsics__Sequence__destroy(eddog_msgs__msg__Extrinsics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eddog_msgs__msg__Extrinsics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eddog_msgs__msg__Extrinsics__Sequence__are_equal(const eddog_msgs__msg__Extrinsics__Sequence * lhs, const eddog_msgs__msg__Extrinsics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eddog_msgs__msg__Extrinsics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eddog_msgs__msg__Extrinsics__Sequence__copy(
  const eddog_msgs__msg__Extrinsics__Sequence * input,
  eddog_msgs__msg__Extrinsics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eddog_msgs__msg__Extrinsics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eddog_msgs__msg__Extrinsics * data =
      (eddog_msgs__msg__Extrinsics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eddog_msgs__msg__Extrinsics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eddog_msgs__msg__Extrinsics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eddog_msgs__msg__Extrinsics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
