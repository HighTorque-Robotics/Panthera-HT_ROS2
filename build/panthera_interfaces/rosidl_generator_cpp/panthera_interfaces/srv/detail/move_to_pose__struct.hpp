// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panthera_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/move_to_pose.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__MoveToPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__MoveToPose_Request __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPose_Request_
{
  using Type = MoveToPose_Request_<ContainerAllocator>;

  explicit MoveToPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->cartesian_path = false;
      this->velocity_scaling = 1.0;
      this->acceleration_scaling = 1.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->cartesian_path = false;
      this->velocity_scaling = 0.0;
      this->acceleration_scaling = 0.0;
    }
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

  explicit MoveToPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->cartesian_path = false;
      this->velocity_scaling = 1.0;
      this->acceleration_scaling = 1.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->cartesian_path = false;
      this->velocity_scaling = 0.0;
      this->acceleration_scaling = 0.0;
    }
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
  using _cartesian_path_type =
    bool;
  _cartesian_path_type cartesian_path;
  using _velocity_scaling_type =
    double;
  _velocity_scaling_type velocity_scaling;
  using _acceleration_scaling_type =
    double;
  _acceleration_scaling_type acceleration_scaling;

  // setters for named parameter idiom
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
  Type & set__cartesian_path(
    const bool & _arg)
  {
    this->cartesian_path = _arg;
    return *this;
  }
  Type & set__velocity_scaling(
    const double & _arg)
  {
    this->velocity_scaling = _arg;
    return *this;
  }
  Type & set__acceleration_scaling(
    const double & _arg)
  {
    this->acceleration_scaling = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__MoveToPose_Request
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__MoveToPose_Request
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPose_Request_ & other) const
  {
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
    if (this->cartesian_path != other.cartesian_path) {
      return false;
    }
    if (this->velocity_scaling != other.velocity_scaling) {
      return false;
    }
    if (this->acceleration_scaling != other.acceleration_scaling) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPose_Request_

// alias to use template instance with default allocator
using MoveToPose_Request =
  panthera_interfaces::srv::MoveToPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces


#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__MoveToPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__MoveToPose_Response __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPose_Response_
{
  using Type = MoveToPose_Response_<ContainerAllocator>;

  explicit MoveToPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MoveToPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__MoveToPose_Response
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__MoveToPose_Response
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPose_Response_

// alias to use template instance with default allocator
using MoveToPose_Response =
  panthera_interfaces::srv::MoveToPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__MoveToPose_Event __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__MoveToPose_Event __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPose_Event_
{
  using Type = MoveToPose_Event_<ContainerAllocator>;

  explicit MoveToPose_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveToPose_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__MoveToPose_Event
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__MoveToPose_Event
    std::shared_ptr<panthera_interfaces::srv::MoveToPose_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPose_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPose_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPose_Event_

// alias to use template instance with default allocator
using MoveToPose_Event =
  panthera_interfaces::srv::MoveToPose_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces

namespace panthera_interfaces
{

namespace srv
{

struct MoveToPose
{
  using Request = panthera_interfaces::srv::MoveToPose_Request;
  using Response = panthera_interfaces::srv::MoveToPose_Response;
  using Event = panthera_interfaces::srv::MoveToPose_Event;
};

}  // namespace srv

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_HPP_
