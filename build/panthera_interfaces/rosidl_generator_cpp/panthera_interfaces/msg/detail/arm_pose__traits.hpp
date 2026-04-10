// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panthera_interfaces:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_pose.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__TRAITS_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panthera_interfaces/msg/detail/arm_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panthera_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: cartesian_path
  {
    out << "cartesian_path: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: cartesian_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_path: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace panthera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use panthera_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panthera_interfaces::msg::ArmPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::msg::ArmPose & msg)
{
  return panthera_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::msg::ArmPose>()
{
  return "panthera_interfaces::msg::ArmPose";
}

template<>
inline const char * name<panthera_interfaces::msg::ArmPose>()
{
  return "panthera_interfaces/msg/ArmPose";
}

template<>
struct has_fixed_size<panthera_interfaces::msg::ArmPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panthera_interfaces::msg::ArmPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panthera_interfaces::msg::ArmPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_POSE__TRAITS_HPP_
