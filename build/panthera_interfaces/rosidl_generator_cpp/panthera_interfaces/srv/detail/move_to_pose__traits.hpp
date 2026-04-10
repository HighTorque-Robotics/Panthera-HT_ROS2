// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panthera_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/move_to_pose.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__TRAITS_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panthera_interfaces/srv/detail/move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panthera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToPose_Request & msg,
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
    out << ", ";
  }

  // member: velocity_scaling
  {
    out << "velocity_scaling: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_scaling, out);
    out << ", ";
  }

  // member: acceleration_scaling
  {
    out << "acceleration_scaling: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_scaling, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPose_Request & msg,
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

  // member: velocity_scaling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_scaling: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_scaling, out);
    out << "\n";
  }

  // member: acceleration_scaling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_scaling: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_scaling, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPose_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panthera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use panthera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panthera_interfaces::srv::MoveToPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::srv::MoveToPose_Request & msg)
{
  return panthera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::srv::MoveToPose_Request>()
{
  return "panthera_interfaces::srv::MoveToPose_Request";
}

template<>
inline const char * name<panthera_interfaces::srv::MoveToPose_Request>()
{
  return "panthera_interfaces/srv/MoveToPose_Request";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::MoveToPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panthera_interfaces::srv::MoveToPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panthera_interfaces::srv::MoveToPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panthera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPose_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panthera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use panthera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panthera_interfaces::srv::MoveToPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::srv::MoveToPose_Response & msg)
{
  return panthera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::srv::MoveToPose_Response>()
{
  return "panthera_interfaces::srv::MoveToPose_Response";
}

template<>
inline const char * name<panthera_interfaces::srv::MoveToPose_Response>()
{
  return "panthera_interfaces/srv/MoveToPose_Response";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::MoveToPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panthera_interfaces::srv::MoveToPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panthera_interfaces::srv::MoveToPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace panthera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToPose_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPose_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPose_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panthera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use panthera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panthera_interfaces::srv::MoveToPose_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::srv::MoveToPose_Event & msg)
{
  return panthera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::srv::MoveToPose_Event>()
{
  return "panthera_interfaces::srv::MoveToPose_Event";
}

template<>
inline const char * name<panthera_interfaces::srv::MoveToPose_Event>()
{
  return "panthera_interfaces/srv/MoveToPose_Event";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::MoveToPose_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panthera_interfaces::srv::MoveToPose_Event>
  : std::integral_constant<bool, has_bounded_size<panthera_interfaces::srv::MoveToPose_Request>::value && has_bounded_size<panthera_interfaces::srv::MoveToPose_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<panthera_interfaces::srv::MoveToPose_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panthera_interfaces::srv::MoveToPose>()
{
  return "panthera_interfaces::srv::MoveToPose";
}

template<>
inline const char * name<panthera_interfaces::srv::MoveToPose>()
{
  return "panthera_interfaces/srv/MoveToPose";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::MoveToPose>
  : std::integral_constant<
    bool,
    has_fixed_size<panthera_interfaces::srv::MoveToPose_Request>::value &&
    has_fixed_size<panthera_interfaces::srv::MoveToPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<panthera_interfaces::srv::MoveToPose>
  : std::integral_constant<
    bool,
    has_bounded_size<panthera_interfaces::srv::MoveToPose_Request>::value &&
    has_bounded_size<panthera_interfaces::srv::MoveToPose_Response>::value
  >
{
};

template<>
struct is_service<panthera_interfaces::srv::MoveToPose>
  : std::true_type
{
};

template<>
struct is_service_request<panthera_interfaces::srv::MoveToPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panthera_interfaces::srv::MoveToPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__TRAITS_HPP_
