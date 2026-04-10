// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:srv/GoZero.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/go_zero.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__BUILDER_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/srv/detail/go_zero__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GoZero_Request_use_mit_mode
{
public:
  Init_GoZero_Request_use_mit_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panthera_interfaces::srv::GoZero_Request use_mit_mode(::panthera_interfaces::srv::GoZero_Request::_use_mit_mode_type arg)
  {
    msg_.use_mit_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GoZero_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GoZero_Request>()
{
  return panthera_interfaces::srv::builder::Init_GoZero_Request_use_mit_mode();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GoZero_Response_status
{
public:
  explicit Init_GoZero_Response_status(::panthera_interfaces::srv::GoZero_Response & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GoZero_Response status(::panthera_interfaces::srv::GoZero_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GoZero_Response msg_;
};

class Init_GoZero_Response_code
{
public:
  Init_GoZero_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoZero_Response_status code(::panthera_interfaces::srv::GoZero_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_GoZero_Response_status(msg_);
  }

private:
  ::panthera_interfaces::srv::GoZero_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GoZero_Response>()
{
  return panthera_interfaces::srv::builder::Init_GoZero_Response_code();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GoZero_Event_response
{
public:
  explicit Init_GoZero_Event_response(::panthera_interfaces::srv::GoZero_Event & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::GoZero_Event response(::panthera_interfaces::srv::GoZero_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::GoZero_Event msg_;
};

class Init_GoZero_Event_request
{
public:
  explicit Init_GoZero_Event_request(::panthera_interfaces::srv::GoZero_Event & msg)
  : msg_(msg)
  {}
  Init_GoZero_Event_response request(::panthera_interfaces::srv::GoZero_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoZero_Event_response(msg_);
  }

private:
  ::panthera_interfaces::srv::GoZero_Event msg_;
};

class Init_GoZero_Event_info
{
public:
  Init_GoZero_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoZero_Event_request info(::panthera_interfaces::srv::GoZero_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoZero_Event_request(msg_);
  }

private:
  ::panthera_interfaces::srv::GoZero_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::GoZero_Event>()
{
  return panthera_interfaces::srv::builder::Init_GoZero_Event_info();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__BUILDER_HPP_
