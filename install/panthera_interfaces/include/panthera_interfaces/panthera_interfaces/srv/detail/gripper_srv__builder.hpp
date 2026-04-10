// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:srv/GripperSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/gripper_srv.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__BUILDER_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/srv/detail/gripper_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperSrv_Request_set_zero
{
public:
  explicit Init_GripperSrv_Request_set_zero(::panthera_interfaces::srv::GripperSrv_Request & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GripperSrv_Request set_zero(::panthera_interfaces::srv::GripperSrv_Request::_set_zero_type arg)
  {
    msg_.set_zero = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Request msg_;
};

class Init_GripperSrv_Request_gripper_code
{
public:
  explicit Init_GripperSrv_Request_gripper_code(::panthera_interfaces::srv::GripperSrv_Request & msg)
  : msg_(msg)
  {}
  Init_GripperSrv_Request_set_zero gripper_code(::panthera_interfaces::srv::GripperSrv_Request::_gripper_code_type arg)
  {
    msg_.gripper_code = std::move(arg);
    return Init_GripperSrv_Request_set_zero(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Request msg_;
};

class Init_GripperSrv_Request_gripper_effort
{
public:
  explicit Init_GripperSrv_Request_gripper_effort(::panthera_interfaces::srv::GripperSrv_Request & msg)
  : msg_(msg)
  {}
  Init_GripperSrv_Request_gripper_code gripper_effort(::panthera_interfaces::srv::GripperSrv_Request::_gripper_effort_type arg)
  {
    msg_.gripper_effort = std::move(arg);
    return Init_GripperSrv_Request_gripper_code(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Request msg_;
};

class Init_GripperSrv_Request_gripper_angle
{
public:
  Init_GripperSrv_Request_gripper_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperSrv_Request_gripper_effort gripper_angle(::panthera_interfaces::srv::GripperSrv_Request::_gripper_angle_type arg)
  {
    msg_.gripper_angle = std::move(arg);
    return Init_GripperSrv_Request_gripper_effort(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GripperSrv_Request>()
{
  return panthera_interfaces::srv::builder::Init_GripperSrv_Request_gripper_angle();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperSrv_Response_status
{
public:
  explicit Init_GripperSrv_Response_status(::panthera_interfaces::srv::GripperSrv_Response & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GripperSrv_Response status(::panthera_interfaces::srv::GripperSrv_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Response msg_;
};

class Init_GripperSrv_Response_code
{
public:
  Init_GripperSrv_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperSrv_Response_status code(::panthera_interfaces::srv::GripperSrv_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_GripperSrv_Response_status(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GripperSrv_Response>()
{
  return panthera_interfaces::srv::builder::Init_GripperSrv_Response_code();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperSrv_Event_response
{
public:
  explicit Init_GripperSrv_Event_response(::panthera_interfaces::srv::GripperSrv_Event & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GripperSrv_Event response(::panthera_interfaces::srv::GripperSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Event msg_;
};

class Init_GripperSrv_Event_request
{
public:
  explicit Init_GripperSrv_Event_request(::panthera_interfaces::srv::GripperSrv_Event & msg)
  : msg_(msg)
  {}
  Init_GripperSrv_Event_response request(::panthera_interfaces::srv::GripperSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperSrv_Event_response(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Event msg_;
};

class Init_GripperSrv_Event_info
{
public:
  Init_GripperSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperSrv_Event_request info(::panthera_interfaces::srv::GripperSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperSrv_Event_request(msg_);
  }

private:
  ::panthera_interfaces::srv::GripperSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GripperSrv_Event>()
{
  return panthera_interfaces::srv::builder::Init_GripperSrv_Event_info();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__BUILDER_HPP_
