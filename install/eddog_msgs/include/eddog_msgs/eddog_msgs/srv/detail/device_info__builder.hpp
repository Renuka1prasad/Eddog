// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eddog_msgs:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef EDDOG_MSGS__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define EDDOG_MSGS__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eddog_msgs/srv/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eddog_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::srv::DeviceInfo_Request>()
{
  return ::eddog_msgs::srv::DeviceInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace eddog_msgs


namespace eddog_msgs
{

namespace srv
{

namespace builder
{

class Init_DeviceInfo_Response_physical_port
{
public:
  explicit Init_DeviceInfo_Response_physical_port(::eddog_msgs::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  ::eddog_msgs::srv::DeviceInfo_Response physical_port(::eddog_msgs::srv::DeviceInfo_Response::_physical_port_type arg)
  {
    msg_.physical_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_sensors
{
public:
  explicit Init_DeviceInfo_Response_sensors(::eddog_msgs::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_physical_port sensors(::eddog_msgs::srv::DeviceInfo_Response::_sensors_type arg)
  {
    msg_.sensors = std::move(arg);
    return Init_DeviceInfo_Response_physical_port(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_firmware_update_id
{
public:
  explicit Init_DeviceInfo_Response_firmware_update_id(::eddog_msgs::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_sensors firmware_update_id(::eddog_msgs::srv::DeviceInfo_Response::_firmware_update_id_type arg)
  {
    msg_.firmware_update_id = std::move(arg);
    return Init_DeviceInfo_Response_sensors(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_usb_type_descriptor
{
public:
  explicit Init_DeviceInfo_Response_usb_type_descriptor(::eddog_msgs::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_firmware_update_id usb_type_descriptor(::eddog_msgs::srv::DeviceInfo_Response::_usb_type_descriptor_type arg)
  {
    msg_.usb_type_descriptor = std::move(arg);
    return Init_DeviceInfo_Response_firmware_update_id(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_firmware_version
{
public:
  explicit Init_DeviceInfo_Response_firmware_version(::eddog_msgs::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_usb_type_descriptor firmware_version(::eddog_msgs::srv::DeviceInfo_Response::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_DeviceInfo_Response_usb_type_descriptor(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_serial_number
{
public:
  explicit Init_DeviceInfo_Response_serial_number(::eddog_msgs::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_Response_firmware_version serial_number(::eddog_msgs::srv::DeviceInfo_Response::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_DeviceInfo_Response_firmware_version(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_device_name
{
public:
  Init_DeviceInfo_Response_device_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_Response_serial_number device_name(::eddog_msgs::srv::DeviceInfo_Response::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_DeviceInfo_Response_serial_number(msg_);
  }

private:
  ::eddog_msgs::srv::DeviceInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eddog_msgs::srv::DeviceInfo_Response>()
{
  return eddog_msgs::srv::builder::Init_DeviceInfo_Response_device_name();
}

}  // namespace eddog_msgs

#endif  // EDDOG_MSGS__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_
