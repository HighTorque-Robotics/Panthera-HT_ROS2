// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panthera_interfaces:srv/GripperSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/gripper_srv.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__TRAITS_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panthera_interfaces/srv/detail/gripper_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panthera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper_angle
  {
    out << "gripper_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_angle, out);
    out << ", ";
  }

  // member: gripper_effort
  {
    out << "gripper_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_effort, out);
    out << ", ";
  }

  // member: gripper_code
  {
    out << "gripper_code: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_code, out);
    out << ", ";
  }

  // member: set_zero
  {
    out << "set_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.set_zero, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_angle, out);
    out << "\n";
  }

  // member: gripper_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_effort, out);
    out << "\n";
  }

  // member: gripper_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_code: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_code, out);
    out << "\n";
  }

  // member: set_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.set_zero, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperSrv_Request & msg, bool use_flow_style = false)
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
  const panthera_interfaces::srv::GripperSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::srv::GripperSrv_Request & msg)
{
  return panthera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::srv::GripperSrv_Request>()
{
  return "panthera_interfaces::srv::GripperSrv_Request";
}

template<>
inline const char * name<panthera_interfaces::srv::GripperSrv_Request>()
{
  return "panthera_interfaces/srv/GripperSrv_Request";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::GripperSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panthera_interfaces::srv::GripperSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panthera_interfaces::srv::GripperSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panthera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperSrv_Response & msg, bool use_flow_style = false)
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
  const panthera_interfaces::srv::GripperSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::srv::GripperSrv_Response & msg)
{
  return panthera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::srv::GripperSrv_Response>()
{
  return "panthera_interfaces::srv::GripperSrv_Response";
}

template<>
inline const char * name<panthera_interfaces::srv::GripperSrv_Response>()
{
  return "panthera_interfaces/srv/GripperSrv_Response";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::GripperSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panthera_interfaces::srv::GripperSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panthera_interfaces::srv::GripperSrv_Response>
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
  const GripperSrv_Event & msg,
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
  const GripperSrv_Event & msg,
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

inline std::string to_yaml(const GripperSrv_Event & msg, bool use_flow_style = false)
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
  const panthera_interfaces::srv::GripperSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  panthera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panthera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const panthera_interfaces::srv::GripperSrv_Event & msg)
{
  return panthera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panthera_interfaces::srv::GripperSrv_Event>()
{
  return "panthera_interfaces::srv::GripperSrv_Event";
}

template<>
inline const char * name<panthera_interfaces::srv::GripperSrv_Event>()
{
  return "panthera_interfaces/srv/GripperSrv_Event";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::GripperSrv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panthera_interfaces::srv::GripperSrv_Event>
  : std::integral_constant<bool, has_bounded_size<panthera_interfaces::srv::GripperSrv_Request>::value && has_bounded_size<panthera_interfaces::srv::GripperSrv_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<panthera_interfaces::srv::GripperSrv_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panthera_interfaces::srv::GripperSrv>()
{
  return "panthera_interfaces::srv::GripperSrv";
}

template<>
inline const char * name<panthera_interfaces::srv::GripperSrv>()
{
  return "panthera_interfaces/srv/GripperSrv";
}

template<>
struct has_fixed_size<panthera_interfaces::srv::GripperSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<panthera_interfaces::srv::GripperSrv_Request>::value &&
    has_fixed_size<panthera_interfaces::srv::GripperSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<panthera_interfaces::srv::GripperSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<panthera_interfaces::srv::GripperSrv_Request>::value &&
    has_bounded_size<panthera_interfaces::srv::GripperSrv_Response>::value
  >
{
};

template<>
struct is_service<panthera_interfaces::srv::GripperSrv>
  : std::true_type
{
};

template<>
struct is_service_request<panthera_interfaces::srv::GripperSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panthera_interfaces::srv::GripperSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GRIPPER_SRV__TRAITS_HPP_
