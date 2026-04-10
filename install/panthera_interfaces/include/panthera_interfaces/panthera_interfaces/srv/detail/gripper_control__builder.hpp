// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:srv/GripperControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/gripper_control.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/srv/detail/gripper_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Request_action
{
public:
  Init_GripperControl_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panthera_interfaces::srv::GripperControl_Request action(::panthera_interfaces::srv::GripperControl_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GripperControl_Request>()
{
  return panthera_interfaces::srv::builder::Init_GripperControl_Request_action();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Response_message
{
public:
  explicit Init_GripperControl_Response_message(::panthera_interfaces::srv::GripperControl_Response & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GripperControl_Response message(::panthera_interfaces::srv::GripperControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperControl_Response msg_;
};

class Init_GripperControl_Response_success
{
public:
  Init_GripperControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Response_message success(::panthera_interfaces::srv::GripperControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GripperControl_Response_message(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GripperControl_Response>()
{
  return panthera_interfaces::srv::builder::Init_GripperControl_Response_success();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Event_response
{
public:
  explicit Init_GripperControl_Event_response(::panthera_interfaces::srv::GripperControl_Event & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GripperControl_Event response(::panthera_interfaces::srv::GripperControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperControl_Event msg_;
};

class Init_GripperControl_Event_request
{
public:
  explicit Init_GripperControl_Event_request(::panthera_interfaces::srv::GripperControl_Event & msg)
  : msg_(msg)
  {}
  Init_GripperControl_Event_response request(::panthera_interfaces::srv::GripperControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperControl_Event_response(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperControl_Event msg_;
};

class Init_GripperControl_Event_info
{
public:
  Init_GripperControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Event_request info(::panthera_interfaces::srv::GripperControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperControl_Event_request(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GripperControl_Event>()
{
  return panthera_interfaces::srv::builder::Init_GripperControl_Event_info();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
