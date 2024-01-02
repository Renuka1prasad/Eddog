// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eddog_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_
#define EDDOG_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eddog_msgs/msg/detail/metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace eddog_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Metadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: json_data
  {
    out << "json_data: ";
    rosidl_generator_traits::value_to_yaml(msg.json_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Metadata & msg,
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

  // member: json_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json_data: ";
    rosidl_generator_traits::value_to_yaml(msg.json_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Metadata & msg, bool use_flow_style = false)
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
  const eddog_msgs::msg::Metadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  eddog_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eddog_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eddog_msgs::msg::Metadata & msg)
{
  return eddog_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eddog_msgs::msg::Metadata>()
{
  return "eddog_msgs::msg::Metadata";
}

template<>
inline const char * name<eddog_msgs::msg::Metadata>()
{
  return "eddog_msgs/msg/Metadata";
}

template<>
struct has_fixed_size<eddog_msgs::msg::Metadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eddog_msgs::msg::Metadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eddog_msgs::msg::Metadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EDDOG_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_
