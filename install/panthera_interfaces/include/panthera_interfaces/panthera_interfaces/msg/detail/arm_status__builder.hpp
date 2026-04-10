// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_status.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panthera_interfaces/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panthera_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArmStatus_gripper_fault
{
public:
  explicit Init_ArmStatus_gripper_fault(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  ::panthera_interfaces::msg::ArmStatus gripper_fault(::panthera_interfaces::msg::ArmStatus::_gripper_fault_type arg)
  {
    msg_.gripper_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_gripper_position
{
public:
  explicit Init_ArmStatus_gripper_position(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_gripper_fault gripper_position(::panthera_interfaces::msg::ArmStatus::_gripper_position_type arg)
  {
    msg_.gripper_position = std::move(arg);
    return Init_ArmStatus_gripper_fault(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_joint_at_limit
{
public:
  explicit Init_ArmStatus_joint_at_limit(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_gripper_position joint_at_limit(::panthera_interfaces::msg::ArmStatus::_joint_at_limit_type arg)
  {
    msg_.joint_at_limit = std::move(arg);
    return Init_ArmStatus_gripper_position(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_motor_faults
{
public:
  explicit Init_ArmStatus_motor_faults(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_joint_at_limit motor_faults(::panthera_interfaces::msg::ArmStatus::_motor_faults_type arg)
  {
    msg_.motor_faults = std::move(arg);
    return Init_ArmStatus_joint_at_limit(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_motor_modes
{
public:
  explicit Init_ArmStatus_motor_modes(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_motor_faults motor_modes(::panthera_interfaces::msg::ArmStatus::_motor_modes_type arg)
  {
    msg_.motor_modes = std::move(arg);
    return Init_ArmStatus_motor_faults(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_error_message
{
public:
  explicit Init_ArmStatus_error_message(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_motor_modes error_message(::panthera_interfaces::msg::ArmStatus::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ArmStatus_motor_modes(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_motion_status
{
public:
  explicit Init_ArmStatus_motion_status(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_error_message motion_status(::panthera_interfaces::msg::ArmStatus::_motion_status_type arg)
  {
    msg_.motion_status = std::move(arg);
    return Init_ArmStatus_error_message(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_arm_enabled
{
public:
  explicit Init_ArmStatus_arm_enabled(::panthera_interfaces::msg::ArmStatus & msg)
  : msg_(msg)
  {}
  Init_ArmStatus_motion_status arm_enabled(::panthera_interfaces::msg::ArmStatus::_arm_enabled_type arg)
  {
    msg_.arm_enabled = std::move(arg);
    return Init_ArmStatus_motion_status(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

class Init_ArmStatus_header
{
public:
  Init_ArmStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmStatus_arm_enabled header(::panthera_interfaces::msg::ArmStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmStatus_arm_enabled(msg_);
  }

private:
  ::panthera_interfaces::msg::ArmStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panthera_interfaces::msg::ArmStatus>()
{
  return panthera_interfaces::msg::builder::Init_ArmStatus_header();
}

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
