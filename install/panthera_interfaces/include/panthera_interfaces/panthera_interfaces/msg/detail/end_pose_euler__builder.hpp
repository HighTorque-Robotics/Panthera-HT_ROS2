// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:msg/EndPoseEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/end_pose_euler.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__BUILDER_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/msg/detail/end_pose_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace msg
{

namespace builder
{

class Init_EndPoseEuler_yaw
{
public:
  explicit Init_EndPoseEuler_yaw(::panthera_interfaces::msg::EndPoseEuler & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::msg::EndPoseEuler yaw(::panthera_interfaces::msg::EndPoseEuler::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

class Init_EndPoseEuler_pitch
{
public:
  explicit Init_EndPoseEuler_pitch(::panthera_interfaces::msg::EndPoseEuler & msg)
  : msg_(msg)
  {}
  Init_EndPoseEuler_yaw pitch(::panthera_interfaces::msg::EndPoseEuler::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EndPoseEuler_yaw(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

class Init_EndPoseEuler_roll
{
public:
  explicit Init_EndPoseEuler_roll(::panthera_interfaces::msg::EndPoseEuler & msg)
  : msg_(msg)
  {}
  Init_EndPoseEuler_pitch roll(::panthera_interfaces::msg::EndPoseEuler::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EndPoseEuler_pitch(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

class Init_EndPoseEuler_z
{
public:
  explicit Init_EndPoseEuler_z(::panthera_interfaces::msg::EndPoseEuler & msg)
  : msg_(msg)
  {}
  Init_EndPoseEuler_roll z(::panthera_interfaces::msg::EndPoseEuler::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EndPoseEuler_roll(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

class Init_EndPoseEuler_y
{
public:
  explicit Init_EndPoseEuler_y(::panthera_interfaces::msg::EndPoseEuler & msg)
  : msg_(msg)
  {}
  Init_EndPoseEuler_z y(::panthera_interfaces::msg::EndPoseEuler::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EndPoseEuler_z(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

class Init_EndPoseEuler_x
{
public:
  explicit Init_EndPoseEuler_x(::panthera_interfaces::msg::EndPoseEuler & msg)
  : msg_(msg)
  {}
  Init_EndPoseEuler_y x(::panthera_interfaces::msg::EndPoseEuler::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EndPoseEuler_y(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

class Init_EndPoseEuler_header
{
public:
  Init_EndPoseEuler_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EndPoseEuler_x header(::panthera_interfaces::msg::EndPoseEuler::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EndPoseEuler_x(msg_);
  }

private:
  ::panthera_interfaces::msg::EndPoseEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::msg::EndPoseEuler>()
{
  return panthera_interfaces::msg::builder::Init_EndPoseEuler_header();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__BUILDER_HPP_
