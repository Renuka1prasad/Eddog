// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eddog_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__EXTRINSICS__STRUCT_H_
#define EDDOG_MSGS__MSG__DETAIL__EXTRINSICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Extrinsics in the package eddog_msgs.
/**
  * Cross-stream extrinsics: encodes the topology describing how the different devices are oriented
 */
typedef struct eddog_msgs__msg__Extrinsics
{
  /// Column - major 3x3 rotation matrix
  double rotation[9];
  /// Three-element translation vector, in meters
  double translation[3];
} eddog_msgs__msg__Extrinsics;

// Struct for a sequence of eddog_msgs__msg__Extrinsics.
typedef struct eddog_msgs__msg__Extrinsics__Sequence
{
  eddog_msgs__msg__Extrinsics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eddog_msgs__msg__Extrinsics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDDOG_MSGS__MSG__DETAIL__EXTRINSICS__STRUCT_H_
