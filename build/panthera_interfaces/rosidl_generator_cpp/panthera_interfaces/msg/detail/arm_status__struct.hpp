// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_status.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__STRUCT_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__msg__ArmStatus __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__msg__ArmStatus __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmStatus_
{
  using Type = ArmStatus_<ContainerAllocator>;

  explicit ArmStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_enabled = false;
      this->motion_status = 0;
      this->error_message = "";
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->motor_modes.begin(), this->motor_modes.end(), 0);
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->motor_faults.begin(), this->motor_faults.end(), 0);
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->joint_at_limit.begin(), this->joint_at_limit.end(), false);
      this->gripper_position = 0.0;
      this->gripper_fault = 0;
    }
  }

  explicit ArmStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    error_message(_alloc),
    motor_modes(_alloc),
    motor_faults(_alloc),
    joint_at_limit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_enabled = false;
      this->motion_status = 0;
      this->error_message = "";
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->motor_modes.begin(), this->motor_modes.end(), 0);
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->motor_faults.begin(), this->motor_faults.end(), 0);
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->joint_at_limit.begin(), this->joint_at_limit.end(), false);
      this->gripper_position = 0.0;
      this->gripper_fault = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _arm_enabled_type =
    bool;
  _arm_enabled_type arm_enabled;
  using _motion_status_type =
    uint8_t;
  _motion_status_type motion_status;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _motor_modes_type =
    std::array<uint8_t, 6>;
  _motor_modes_type motor_modes;
  using _motor_faults_type =
    std::array<uint8_t, 6>;
  _motor_faults_type motor_faults;
  using _joint_at_limit_type =
    std::array<bool, 6>;
  _joint_at_limit_type joint_at_limit;
  using _gripper_position_type =
    double;
  _gripper_position_type gripper_position;
  using _gripper_fault_type =
    uint8_t;
  _gripper_fault_type gripper_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__arm_enabled(
    const bool & _arg)
  {
    this->arm_enabled = _arg;
    return *this;
  }
  Type & set__motion_status(
    const uint8_t & _arg)
  {
    this->motion_status = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__motor_modes(
    const std::array<uint8_t, 6> & _arg)
  {
    this->motor_modes = _arg;
    return *this;
  }
  Type & set__motor_faults(
    const std::array<uint8_t, 6> & _arg)
  {
    this->motor_faults = _arg;
    return *this;
  }
  Type & set__joint_at_limit(
    const std::array<bool, 6> & _arg)
  {
    this->joint_at_limit = _arg;
    return *this;
  }
  Type & set__gripper_position(
    const double & _arg)
  {
    this->gripper_position = _arg;
    return *this;
  }
  Type & set__gripper_fault(
    const uint8_t & _arg)
  {
    this->gripper_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::msg::ArmStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::msg::ArmStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::msg::ArmStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::msg::ArmStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__msg__ArmStatus
    std::shared_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__msg__ArmStatus
    std::shared_ptr<panthera_interfaces::msg::ArmStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->arm_enabled != other.arm_enabled) {
      return false;
    }
    if (this->motion_status != other.motion_status) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->motor_modes != other.motor_modes) {
      return false;
    }
    if (this->motor_faults != other.motor_faults) {
      return false;
    }
    if (this->joint_at_limit != other.joint_at_limit) {
      return false;
    }
    if (this->gripper_position != other.gripper_position) {
      return false;
    }
    if (this->gripper_fault != other.gripper_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmStatus_

// alias to use template instance with default allocator
using ArmStatus =
  panthera_interfaces::msg::ArmStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__STRUCT_HPP_
