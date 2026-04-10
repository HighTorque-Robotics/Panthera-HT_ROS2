// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:msg/PosCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/pos_cmd.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__BUILDER_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/msg/detail/pos_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace msg
{

namespace builder
{

class Init_PosCmd_mode2
{
public:
  explicit Init_PosCmd_mode2(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::msg::PosCmd mode2(::panthera_interfaces::msg::PosCmd::_mode2_type arg)
  {
    msg_.mode2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_mode1
{
public:
  explicit Init_PosCmd_mode1(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_mode2 mode1(::panthera_interfaces::msg::PosCmd::_mode1_type arg)
  {
    msg_.mode1 = std::move(arg);
    return Init_PosCmd_mode2(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_gripper
{
public:
  explicit Init_PosCmd_gripper(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_mode1 gripper(::panthera_interfaces::msg::PosCmd::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return Init_PosCmd_mode1(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_yaw
{
public:
  explicit Init_PosCmd_yaw(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_gripper yaw(::panthera_interfaces::msg::PosCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PosCmd_gripper(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_pitch
{
public:
  explicit Init_PosCmd_pitch(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_yaw pitch(::panthera_interfaces::msg::PosCmd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_PosCmd_yaw(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_roll
{
public:
  explicit Init_PosCmd_roll(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_pitch roll(::panthera_interfaces::msg::PosCmd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_PosCmd_pitch(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_z
{
public:
  explicit Init_PosCmd_z(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_roll z(::panthera_interfaces::msg::PosCmd::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PosCmd_roll(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_y
{
public:
  explicit Init_PosCmd_y(::panthera_interfaces::msg::PosCmd & msg)
  : msg_(msg)
  {}
  Init_PosCmd_z y(::panthera_interfaces::msg::PosCmd::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosCmd_z(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

class Init_PosCmd_x
{
public:
  Init_PosCmd_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosCmd_y x(::panthera_interfaces::msg::PosCmd::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosCmd_y(msg_);
  }

private:
  ::panthera_interfaces::msg::PosCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::msg::PosCmd>()
{
  return panthera_interfaces::msg::builder::Init_PosCmd_x();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__BUILDER_HPP_
