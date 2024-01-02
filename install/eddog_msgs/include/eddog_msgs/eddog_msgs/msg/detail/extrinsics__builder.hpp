// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eddog_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__EXTRINSICS__BUILDER_HPP_
#define EDDOG_MSGS__MSG__DETAIL__EXTRINSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eddog_msgs/msg/detail/extrinsics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eddog_msgs
{

namespace msg
{

namespace builder
{

class Init_Extrinsics_translation
{
public:
  explicit Init_Extrinsics_translation(::eddog_msgs::msg::Extrinsics & msg)
  : msg_(msg)
  {}
  ::eddog_msgs::msg::Extrinsics translation(::eddog_msgs::msg::Extrinsics::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eddog_msgs::msg::Extrinsics msg_;
};

class Init_Extrinsics_rotation
{
public:
  Init_Extrinsics_rotation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Extrinsics_translation rotation(::eddog_msgs::msg::Extrinsics::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_Extrinsics_translation(msg_);
  }

private:
  ::eddog_msgs::msg::Extrinsics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::msg::Extrinsics>()
{
  return eddog_msgs::msg::builder::Init_Extrinsics_rotation();
}

}  // namespace eddog_msgs

#endif  // EDDOG_MSGS__MSG__DETAIL__EXTRINSICS__BUILDER_HPP_
