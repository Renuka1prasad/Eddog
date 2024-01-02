// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eddog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__LIMITS__STRUCT_H_
#define EDDOG_MSGS__MSG__DETAIL__LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Limits in the package eddog_msgs.
/**
  * std_msgs/Header header
 */
typedef struct eddog_msgs__msg__Limits
{
  int16_t eular_ang_range[3];
  int16_t height_range[2];
  int16_t steplength_range[2];
} eddog_msgs__msg__Limits;

// Struct for a sequence of eddog_msgs__msg__Limits.
typedef struct eddog_msgs__msg__Limits__Sequence
{
  eddog_msgs__msg__Limits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eddog_msgs__msg__Limits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDDOG_MSGS__MSG__DETAIL__LIMITS__STRUCT_H_
