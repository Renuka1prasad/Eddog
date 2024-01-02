// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eddog_msgs:msg/RGBD.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__RGBD__TRAITS_HPP_
#define EDDOG_MSGS__MSG__DETAIL__RGBD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eddog_msgs/msg/detail/rgbd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rgb_camera_info'
// Member 'depth_camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace eddog_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGBD & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rgb_camera_info
  {
    out << "rgb_camera_info: ";
    to_flow_style_yaml(msg.rgb_camera_info, out);
    out << ", ";
  }

  // member: depth_camera_info
  {
    out << "depth_camera_info: ";
    to_flow_style_yaml(msg.depth_camera_info, out);
    out << ", ";
  }

  // member: rgb
  {
    out << "rgb: ";
    to_flow_style_yaml(msg.rgb, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    to_flow_style_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGBD & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: rgb_camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb_camera_info:\n";
    to_block_style_yaml(msg.rgb_camera_info, out, indentation + 2);
  }

  // member: depth_camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_camera_info:\n";
    to_block_style_yaml(msg.depth_camera_info, out, indentation + 2);
  }

  // member: rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb:\n";
    to_block_style_yaml(msg.rgb, out, indentation + 2);
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth:\n";
    to_block_style_yaml(msg.depth, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGBD & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace eddog_msgs

namespace rosidl_generator_traits
{

[[deprecated("use eddog_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eddog_msgs::msg::RGBD & msg,
  std::ostream & out, size_t indentation = 0)
{
  eddog_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eddog_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eddog_msgs::msg::RGBD & msg)
{
  return eddog_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eddog_msgs::msg::RGBD>()
{
  return "eddog_msgs::msg::RGBD";
}

template<>
inline const char * name<eddog_msgs::msg::RGBD>()
{
  return "eddog_msgs/msg/RGBD";
}

template<>
struct has_fixed_size<eddog_msgs::msg::RGBD>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::CameraInfo>::value && has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<eddog_msgs::msg::RGBD>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::CameraInfo>::value && has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<eddog_msgs::msg::RGBD>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EDDOG_MSGS__MSG__DETAIL__RGBD__TRAITS_HPP_
