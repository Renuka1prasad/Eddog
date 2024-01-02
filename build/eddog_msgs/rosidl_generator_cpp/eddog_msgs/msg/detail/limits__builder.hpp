// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eddog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__LIMITS__BUILDER_HPP_
#define EDDOG_MSGS__MSG__DETAIL__LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eddog_msgs/msg/detail/limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eddog_msgs
{

namespace msg
{

namespace builder
{

class Init_Limits_steplength_range
{
public:
  explicit Init_Limits_steplength_range(::eddog_msgs::msg::Limits & msg)
  : msg_(msg)
  {}
  ::eddog_msgs::msg::Limits steplength_range(::eddog_msgs::msg::Limits::_steplength_range_type arg)
  {
    msg_.steplength_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eddog_msgs::msg::Limits msg_;
};

class Init_Limits_height_range
{
public:
  explicit Init_Limits_height_range(::eddog_msgs::msg::Limits & msg)
  : msg_(msg)
  {}
  Init_Limits_steplength_range height_range(::eddog_msgs::msg::Limits::_height_range_type arg)
  {
    msg_.height_range = std::move(arg);
    return Init_Limits_steplength_range(msg_);
  }

private:
  ::eddog_msgs::msg::Limits msg_;
};

class Init_Limits_eular_ang_range
{
public:
  Init_Limits_eular_ang_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Limits_height_range eular_ang_range(::eddog_msgs::msg::Limits::_eular_ang_range_type arg)
  {
    msg_.eular_ang_range = std::move(arg);
    return Init_Limits_height_range(msg_);
  }

private:
  ::eddog_msgs::msg::Limits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::msg::Limits>()
{
  return eddog_msgs::msg::builder::Init_Limits_eular_ang_range();
}

}  // namespace eddog_msgs

#endif  // EDDOG_MSGS__MSG__DETAIL__LIMITS__BUILDER_HPP_
