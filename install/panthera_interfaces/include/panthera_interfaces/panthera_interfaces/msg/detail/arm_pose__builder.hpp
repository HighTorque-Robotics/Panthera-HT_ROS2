// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_pose.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__BUILDER_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/msg/detail/arm_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArmPose_cartesian_path
{
public:
  explicit Init_ArmPose_cartesian_path(::panthera_interfaces::msg::ArmPose & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::msg::ArmPose cartesian_path(::panthera_interfaces::msg::ArmPose::_cartesian_path_type arg)
  {
    msg_.cartesian_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

class Init_ArmPose_yaw
{
public:
  explicit Init_ArmPose_yaw(::panthera_interfaces::msg::ArmPose & msg)
  : msg_(msg)
  {}
  Init_ArmPose_cartesian_path yaw(::panthera_interfaces::msg::ArmPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ArmPose_cartesian_path(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

class Init_ArmPose_pitch
{
public:
  explicit Init_ArmPose_pitch(::panthera_interfaces::msg::ArmPose & msg)
  : msg_(msg)
  {}
  Init_ArmPose_yaw pitch(::panthera_interfaces::msg::ArmPose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ArmPose_yaw(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

class Init_ArmPose_roll
{
public:
  explicit Init_ArmPose_roll(::panthera_interfaces::msg::ArmPose & msg)
  : msg_(msg)
  {}
  Init_ArmPose_pitch roll(::panthera_interfaces::msg::ArmPose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ArmPose_pitch(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

class Init_ArmPose_z
{
public:
  explicit Init_ArmPose_z(::panthera_interfaces::msg::ArmPose & msg)
  : msg_(msg)
  {}
  Init_ArmPose_roll z(::panthera_interfaces::msg::ArmPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ArmPose_roll(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

class Init_ArmPose_y
{
public:
  explicit Init_ArmPose_y(::panthera_interfaces::msg::ArmPose & msg)
  : msg_(msg)
  {}
  Init_ArmPose_z y(::panthera_interfaces::msg::ArmPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ArmPose_z(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

class Init_ArmPose_x
{
public:
  Init_ArmPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmPose_y x(::panthera_interfaces::msg::ArmPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ArmPose_y(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::msg::ArmPose>()
{
  return panthera_interfaces::msg::builder::Init_ArmPose_x();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__BUILDER_HPP_
