// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/move_to_pose.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/srv/detail/move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Request_acceleration_scaling
{
public:
  explicit Init_MoveToPose_Request_acceleration_scaling(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::MoveToPose_Request acceleration_scaling(::panthera_interfaces::srv::MoveToPose_Request::_acceleration_scaling_type arg)
  {
    msg_.acceleration_scaling = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_velocity_scaling
{
public:
  explicit Init_MoveToPose_Request_velocity_scaling(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_acceleration_scaling velocity_scaling(::panthera_interfaces::srv::MoveToPose_Request::_velocity_scaling_type arg)
  {
    msg_.velocity_scaling = std::move(arg);
    return Init_MoveToPose_Request_acceleration_scaling(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_cartesian_path
{
public:
  explicit Init_MoveToPose_Request_cartesian_path(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_velocity_scaling cartesian_path(::panthera_interfaces::srv::MoveToPose_Request::_cartesian_path_type arg)
  {
    msg_.cartesian_path = std::move(arg);
    return Init_MoveToPose_Request_velocity_scaling(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_yaw
{
public:
  explicit Init_MoveToPose_Request_yaw(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_cartesian_path yaw(::panthera_interfaces::srv::MoveToPose_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MoveToPose_Request_cartesian_path(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_pitch
{
public:
  explicit Init_MoveToPose_Request_pitch(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_yaw pitch(::panthera_interfaces::srv::MoveToPose_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_MoveToPose_Request_yaw(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_roll
{
public:
  explicit Init_MoveToPose_Request_roll(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_pitch roll(::panthera_interfaces::srv::MoveToPose_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_MoveToPose_Request_pitch(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_z
{
public:
  explicit Init_MoveToPose_Request_z(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_roll z(::panthera_interfaces::srv::MoveToPose_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MoveToPose_Request_roll(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_y
{
public:
  explicit Init_MoveToPose_Request_y(::panthera_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Request_z y(::panthera_interfaces::srv::MoveToPose_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveToPose_Request_z(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_x
{
public:
  Init_MoveToPose_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPose_Request_y x(::panthera_interfaces::srv::MoveToPose_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveToPose_Request_y(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::MoveToPose_Request>()
{
  return panthera_interfaces::srv::builder::Init_MoveToPose_Request_x();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Response_message
{
public:
  explicit Init_MoveToPose_Response_message(::panthera_interfaces::srv::MoveToPose_Response & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::MoveToPose_Response message(::panthera_interfaces::srv::MoveToPose_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Response msg_;
};

class Init_MoveToPose_Response_success
{
public:
  Init_MoveToPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPose_Response_message success(::panthera_interfaces::srv::MoveToPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToPose_Response_message(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::MoveToPose_Response>()
{
  return panthera_interfaces::srv::builder::Init_MoveToPose_Response_success();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Event_response
{
public:
  explicit Init_MoveToPose_Event_response(::panthera_interfaces::srv::MoveToPose_Event & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::MoveToPose_Event response(::panthera_interfaces::srv::MoveToPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Event msg_;
};

class Init_MoveToPose_Event_request
{
public:
  explicit Init_MoveToPose_Event_request(::panthera_interfaces::srv::MoveToPose_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToPose_Event_response request(::panthera_interfaces::srv::MoveToPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToPose_Event_response(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Event msg_;
};

class Init_MoveToPose_Event_info
{
public:
  Init_MoveToPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPose_Event_request info(::panthera_interfaces::srv::MoveToPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToPose_Event_request(msg_);
  }

private:
  ::panthera_interfaces::srv::MoveToPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::MoveToPose_Event>()
{
  return panthera_interfaces::srv::builder::Init_MoveToPose_Event_info();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
