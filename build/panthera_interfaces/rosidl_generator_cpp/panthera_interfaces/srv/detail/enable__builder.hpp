// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:srv/Enable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/enable.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__BUILDER_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/srv/detail/enable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Enable_Request_enable_request
{
public:
  Init_Enable_Request_enable_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panthera_interfaces::srv::Enable_Request enable_request(::panthera_interfaces::srv::Enable_Request::_enable_request_type arg)
  {
    msg_.enable_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::Enable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::Enable_Request>()
{
  return panthera_interfaces::srv::builder::Init_Enable_Request_enable_request();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Enable_Response_enable_response
{
public:
  Init_Enable_Response_enable_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panthera_interfaces::srv::Enable_Response enable_response(::panthera_interfaces::srv::Enable_Response::_enable_response_type arg)
  {
    msg_.enable_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::Enable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::Enable_Response>()
{
  return panthera_interfaces::srv::builder::Init_Enable_Response_enable_response();
}

}  // namespace panthera_interfaces


namespace panthera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Enable_Event_response
{
public:
  explicit Init_Enable_Event_response(::panthera_interfaces::srv::Enable_Event & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::srv::Enable_Event response(::panthera_interfaces::srv::Enable_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::srv::Enable_Event msg_;
};

class Init_Enable_Event_request
{
public:
  explicit Init_Enable_Event_request(::panthera_interfaces::srv::Enable_Event & msg)
  : msg_(msg)
  {}
  Init_Enable_Event_response request(::panthera_interfaces::srv::Enable_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Enable_Event_response(msg_);
  }

private:
  ::panthera_interfaces::srv::Enable_Event msg_;
};

class Init_Enable_Event_info
{
public:
  Init_Enable_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Enable_Event_request info(::panthera_interfaces::srv::Enable_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Enable_Event_request(msg_);
  }

private:
  ::panthera_interfaces::srv::Enable_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::srv::Enable_Event>()
{
  return panthera_interfaces::srv::builder::Init_Enable_Event_info();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__BUILDER_HPP_
