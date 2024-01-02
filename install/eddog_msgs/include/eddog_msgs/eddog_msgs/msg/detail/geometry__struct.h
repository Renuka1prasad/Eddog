// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eddog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_H_
#define EDDOG_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fr'
// Member 'fl'
// Member 'br'
// Member 'bl'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'euler_ang'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Geometry in the package eddog_msgs.
/**
  * information of pose of the each leg and orientation of the body
 */
typedef struct eddog_msgs__msg__Geometry
{
  geometry_msgs__msg__Point32 fr;
  geometry_msgs__msg__Point32 fl;
  geometry_msgs__msg__Point32 br;
  geometry_msgs__msg__Point32 bl;
  geometry_msgs__msg__Quaternion euler_ang;
} eddog_msgs__msg__Geometry;

// Struct for a sequence of eddog_msgs__msg__Geometry.
typedef struct eddog_msgs__msg__Geometry__Sequence
{
  eddog_msgs__msg__Geometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eddog_msgs__msg__Geometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDDOG_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_H_
