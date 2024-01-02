// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eddog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__BUILDER_HPP_
#define EDDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eddog_msgs/msg/detail/joy_ctrl_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eddog_msgs
{

namespace msg
{

namespace builder
{

class Init_JoyCtrlCmds_gait_step
{
public:
  explicit Init_JoyCtrlCmds_gait_step(::eddog_msgs::msg::JoyCtrlCmds & msg)
  : msg_(msg)
  {}
  ::eddog_msgs::msg::JoyCtrlCmds gait_step(::eddog_msgs::msg::JoyCtrlCmds::_gait_step_type arg)
  {
    msg_.gait_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eddog_msgs::msg::JoyCtrlCmds msg_;
};

class Init_JoyCtrlCmds_pose
{
public:
  explicit Init_JoyCtrlCmds_pose(::eddog_msgs::msg::JoyCtrlCmds & msg)
  : msg_(msg)
  {}
  Init_JoyCtrlCmds_gait_step pose(::eddog_msgs::msg::JoyCtrlCmds::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_JoyCtrlCmds_gait_step(msg_);
  }

private:
  ::eddog_msgs::msg::JoyCtrlCmds msg_;
};

class Init_JoyCtrlCmds_gait_type
{
public:
  explicit Init_JoyCtrlCmds_gait_type(::eddog_msgs::msg::JoyCtrlCmds & msg)
  : msg_(msg)
  {}
  Init_JoyCtrlCmds_pose gait_type(::eddog_msgs::msg::JoyCtrlCmds::_gait_type_type arg)
  {
    msg_.gait_type = std::move(arg);
    return Init_JoyCtrlCmds_pose(msg_);
  }

private:
  ::eddog_msgs::msg::JoyCtrlCmds msg_;
};

class Init_JoyCtrlCmds_states
{
public:
  Init_JoyCtrlCmds_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoyCtrlCmds_gait_type states(::eddog_msgs::msg::JoyCtrlCmds::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_JoyCtrlCmds_gait_type(msg_);
  }

private:
  ::eddog_msgs::msg::JoyCtrlCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::msg::JoyCtrlCmds>()
{
  return eddog_msgs::msg::builder::Init_JoyCtrlCmds_states();
}

}  // namespace eddog_msgs

#endif  // EDDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__BUILDER_HPP_
