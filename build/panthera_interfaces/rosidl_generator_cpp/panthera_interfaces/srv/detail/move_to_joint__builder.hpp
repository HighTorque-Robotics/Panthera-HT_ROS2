// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:srv/MoveToJoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/move_to_joint.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_JOINT__BUILDER_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/srv/detail/move_to_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToJoint_Request_acceleration_scaling
{
public:
  explicit Init_MoveToJoint_Request_acceleration_scaling(::panthera_interfaces::srv::MoveToJoint_Request & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::MoveToJoint_Request acceleration_scaling(::panthera_interfaces::srv::MoveToJoint_Request::_acceleration_scaling_type arg)
  {
    msg_.acceleration_scaling = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Request msg_;
};

class Init_MoveToJoint_Request_velocity_scaling
{
public:
  explicit Init_MoveToJoint_Request_velocity_scaling(::panthera_interfaces::srv::MoveToJoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToJoint_Request_acceleration_scaling velocity_scaling(::panthera_interfaces::srv::MoveToJoint_Request::_velocity_scaling_type arg)
  {
    msg_.velocity_scaling = std::move(arg);
    return Init_MoveToJoint_Request_acceleration_scaling(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Request msg_;
};

class Init_MoveToJoint_Request_joint_angles
{
public:
  Init_MoveToJoint_Request_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToJoint_Request_velocity_scaling joint_angles(::panthera_interfaces::srv::MoveToJoint_Request::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_MoveToJoint_Request_velocity_scaling(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::MoveToJoint_Request>()
{
  return panthera_interfaces::srv::builder::Init_MoveToJoint_Request_joint_angles();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToJoint_Response_message
{
public:
  explicit Init_MoveToJoint_Response_message(::panthera_interfaces::srv::MoveToJoint_Response & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::MoveToJoint_Response message(::panthera_interfaces::srv::MoveToJoint_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Response msg_;
};

class Init_MoveToJoint_Response_success
{
public:
  Init_MoveToJoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToJoint_Response_message success(::panthera_interfaces::srv::MoveToJoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToJoint_Response_message(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::MoveToJoint_Response>()
{
  return panthera_interfaces::srv::builder::Init_MoveToJoint_Response_success();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToJoint_Event_response
{
public:
  explicit Init_MoveToJoint_Event_response(::panthera_interfaces::srv::MoveToJoint_Event & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::MoveToJoint_Event response(::panthera_interfaces::srv::MoveToJoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Event msg_;
};

class Init_MoveToJoint_Event_request
{
public:
  explicit Init_MoveToJoint_Event_request(::panthera_interfaces::srv::MoveToJoint_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToJoint_Event_response request(::panthera_interfaces::srv::MoveToJoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToJoint_Event_response(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Event msg_;
};

class Init_MoveToJoint_Event_info
{
public:
  Init_MoveToJoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToJoint_Event_request info(::panthera_interfaces::srv::MoveToJoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToJoint_Event_request(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToJoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::MoveToJoint_Event>()
{
  return panthera_interfaces::srv::builder::Init_MoveToJoint_Event_info();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_JOINT__BUILDER_HPP_
