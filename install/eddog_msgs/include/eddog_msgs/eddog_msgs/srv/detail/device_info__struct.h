// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eddog_msgs:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__SRV__DETAIL__DEVICE_INFO__STRUCT_H_
#define EDDOG_MSGS__SRV__DETAIL__DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DeviceInfo in the package eddog_msgs.
typedef struct eddog_msgs__srv__DeviceInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} eddog_msgs__srv__DeviceInfo_Request;

// Struct for a sequence of eddog_msgs__srv__DeviceInfo_Request.
typedef struct eddog_msgs__srv__DeviceInfo_Request__Sequence
{
  eddog_msgs__srv__DeviceInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eddog_msgs__srv__DeviceInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'device_name'
// Member 'serial_number'
// Member 'firmware_version'
// Member 'usb_type_descriptor'
// Member 'firmware_update_id'
// Member 'sensors'
// Member 'physical_port'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeviceInfo in the package eddog_msgs.
typedef struct eddog_msgs__srv__DeviceInfo_Response
{
  rosidl_runtime_c__String device_name;
  rosidl_runtime_c__String serial_number;
  rosidl_runtime_c__String firmware_version;
  rosidl_runtime_c__String usb_type_descriptor;
  rosidl_runtime_c__String firmware_update_id;
  rosidl_runtime_c__String sensors;
  rosidl_runtime_c__String physical_port;
} eddog_msgs__srv__DeviceInfo_Response;

// Struct for a sequence of eddog_msgs__srv__DeviceInfo_Response.
typedef struct eddog_msgs__srv__DeviceInfo_Response__Sequence
{
  eddog_msgs__srv__DeviceInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eddog_msgs__srv__DeviceInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDDOG_MSGS__SRV__DETAIL__DEVICE_INFO__STRUCT_H_
