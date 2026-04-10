// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panthera_interfaces:msg/EndPoseEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/end_pose_euler.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__STRUCT_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__STRUCT_HPP_

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
# define DEPRECATED__panthera_interfaces__msg__EndPoseEuler __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__msg__EndPoseEuler __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EndPoseEuler_
{
  using Type = EndPoseEuler_<ContainerAllocator>;

  explicit EndPoseEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit EndPoseEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__msg__EndPoseEuler
    std::shared_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__msg__EndPoseEuler
    std::shared_ptr<panthera_interfaces::msg::EndPoseEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndPoseEuler_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const EndPoseEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndPoseEuler_

// alias to use template instance with default allocator
using EndPoseEuler =
  panthera_interfaces::msg::EndPoseEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__END_POSE_EULER__STRUCT_HPP_
