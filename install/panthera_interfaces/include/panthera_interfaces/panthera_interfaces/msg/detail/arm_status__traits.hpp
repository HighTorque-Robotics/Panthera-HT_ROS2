// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panthera_interfaces:msg/ArmStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/arm_status.hpp"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
#define PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panthera_interfaces/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace panthera_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: arm_enabled
  {
    out << "arm_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_enabled, out);
    out << ", ";
  }

  // member: motion_status
  {
    out << "motion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_status, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: motor_modes
  {
    if (msg.motor_modes.size() == 0) {
      out << "motor_modes: []";
    } else {
      out << "motor_modes: [";
      size_t pending_items = msg.motor_modes.size();
      for (auto item : msg.motor_modes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_faults
  {
    if (msg.motor_faults.size() == 0) {
      out << "motor_faults: []";
    } else {
      out << "motor_faults: [";
      size_t pending_items = msg.motor_faults.size();
      for (auto item : msg.motor_faults) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_at_limit
  {
    if (msg.joint_at_limit.size() == 0) {
      out << "joint_at_limit: []";
    } else {
      out << "joint_at_limit: [";
      size_t pending_items = msg.joint_at_limit.size();
      for (auto item : msg.joint_at_limit) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gripper_position
  {
    out << "gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_position, out);
    out << ", ";
  }

  // member: gripper_fault
  {
    out << "gripper_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: arm_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_enabled, out);
    out << "\n";
  }

  // member: motion_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_status, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: motor_modes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_modes.size() == 0) {
      out << "motor_modes: []\n";
    } else {
      out << "motor_modes:\n";
      for (auto item : msg.motor_modes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_faults.size() == 0) {
      out << "motor_faults: []\n";
    } else {
      out << "motor_faults:\n";
      for (auto item : msg.motor_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_at_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_at_limit.size() == 0) {
      out << "joint_at_limit: []\n";
    } else {
      out << "joint_at_limit:\n";
      for (auto item : msg.joint_at_limit) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gripper_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_position, out);
    out << "\n";
  }

  // member: gripper_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmStatus & msg, bool use_flow_style = false)
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
  const panthera_interfaces::msg::ArmStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::msg::ArmStatus & msg)
{
  return panthera_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::msg::ArmStatus>()
{
  return "panthera_interfaces::msg::ArmStatus";
}

template<>
inline const char * name<panthera_interfaces::msg::ArmStatus>()
{
  return "panthera_interfaces/msg/ArmStatus";
}

template<>
struct has_fixed_size<panthera_interfaces::msg::ArmStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panthera_interfaces::msg::ArmStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panthera_interfaces::msg::ArmStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
