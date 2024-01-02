// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eddog_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__METADATA__BUILDER_HPP_
#define EDDOG_MSGS__MSG__DETAIL__METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eddog_msgs/msg/detail/metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eddog_msgs
{

namespace msg
{

namespace builder
{

class Init_Metadata_json_data
{
public:
  explicit Init_Metadata_json_data(::eddog_msgs::msg::Metadata & msg)
  : msg_(msg)
  {}
  ::eddog_msgs::msg::Metadata json_data(::eddog_msgs::msg::Metadata::_json_data_type arg)
  {
    msg_.json_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eddog_msgs::msg::Metadata msg_;
};

class Init_Metadata_header
{
public:
  Init_Metadata_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Metadata_json_data header(::eddog_msgs::msg::Metadata::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Metadata_json_data(msg_);
  }

private:
  ::eddog_msgs::msg::Metadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::msg::Metadata>()
{
  return eddog_msgs::msg::builder::Init_Metadata_header();
}

}  // namespace eddog_msgs

#endif  // EDDOG_MSGS__MSG__DETAIL__METADATA__BUILDER_HPP_
