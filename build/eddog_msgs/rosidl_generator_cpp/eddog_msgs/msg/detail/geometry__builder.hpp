// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eddog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_
#define EDDOG_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eddog_msgs/msg/detail/geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eddog_msgs
{

namespace msg
{

namespace builder
{

class Init_Geometry_euler_ang
{
public:
  explicit Init_Geometry_euler_ang(::eddog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  ::eddog_msgs::msg::Geometry euler_ang(::eddog_msgs::msg::Geometry::_euler_ang_type arg)
  {
    msg_.euler_ang = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eddog_msgs::msg::Geometry msg_;
};

class Init_Geometry_bl
{
public:
  explicit Init_Geometry_bl(::eddog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_euler_ang bl(::eddog_msgs::msg::Geometry::_bl_type arg)
  {
    msg_.bl = std::move(arg);
    return Init_Geometry_euler_ang(msg_);
  }

private:
  ::eddog_msgs::msg::Geometry msg_;
};

class Init_Geometry_br
{
public:
  explicit Init_Geometry_br(::eddog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_bl br(::eddog_msgs::msg::Geometry::_br_type arg)
  {
    msg_.br = std::move(arg);
    return Init_Geometry_bl(msg_);
  }

private:
  ::eddog_msgs::msg::Geometry msg_;
};

class Init_Geometry_fl
{
public:
  explicit Init_Geometry_fl(::eddog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_br fl(::eddog_msgs::msg::Geometry::_fl_type arg)
  {
    msg_.fl = std::move(arg);
    return Init_Geometry_br(msg_);
  }

private:
  ::eddog_msgs::msg::Geometry msg_;
};

class Init_Geometry_fr
{
public:
  Init_Geometry_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Geometry_fl fr(::eddog_msgs::msg::Geometry::_fr_type arg)
  {
    msg_.fr = std::move(arg);
    return Init_Geometry_fl(msg_);
  }

private:
  ::eddog_msgs::msg::Geometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::msg::Geometry>()
{
  return eddog_msgs::msg::builder::Init_Geometry_fr();
}

}  // namespace eddog_msgs

#endif  // EDDOG_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_
