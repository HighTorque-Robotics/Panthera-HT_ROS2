// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panthera_interfaces:srv/Enable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/enable.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__STRUCT_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__Enable_Request __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__Enable_Request __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Enable_Request_
{
  using Type = Enable_Request_<ContainerAllocator>;

  explicit Enable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_request = false;
    }
  }

  explicit Enable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_request = false;
    }
  }

  // field types and members
  using _enable_request_type =
    bool;
  _enable_request_type enable_request;

  // setters for named parameter idiom
  Type & set__enable_request(
    const bool & _arg)
  {
    this->enable_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::Enable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::Enable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__Enable_Request
    std::shared_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__Enable_Request
    std::shared_ptr<panthera_interfaces::srv::Enable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Enable_Request_ & other) const
  {
    if (this->enable_request != other.enable_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const Enable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Enable_Request_

// alias to use template instance with default allocator
using Enable_Request =
  panthera_interfaces::srv::Enable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces


#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__Enable_Response __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__Enable_Response __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Enable_Response_
{
  using Type = Enable_Response_<ContainerAllocator>;

  explicit Enable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_response = false;
    }
  }

  explicit Enable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_response = false;
    }
  }

  // field types and members
  using _enable_response_type =
    bool;
  _enable_response_type enable_response;

  // setters for named parameter idiom
  Type & set__enable_response(
    const bool & _arg)
  {
    this->enable_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::Enable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::Enable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__Enable_Response
    std::shared_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__Enable_Response
    std::shared_ptr<panthera_interfaces::srv::Enable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Enable_Response_ & other) const
  {
    if (this->enable_response != other.enable_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Enable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Enable_Response_

// alias to use template instance with default allocator
using Enable_Response =
  panthera_interfaces::srv::Enable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__Enable_Event __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__Enable_Event __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Enable_Event_
{
  using Type = Enable_Event_<ContainerAllocator>;

  explicit Enable_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Enable_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::Enable_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::Enable_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::Enable_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::Enable_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::Enable_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::Enable_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__Enable_Event
    std::shared_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__Enable_Event
    std::shared_ptr<panthera_interfaces::srv::Enable_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Enable_Event_ & other) const
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
  bool operator!=(const Enable_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Enable_Event_

// alias to use template instance with default allocator
using Enable_Event =
  panthera_interfaces::srv::Enable_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces

namespace panthera_interfaces
{

namespace srv
{

struct Enable
{
  using Request = panthera_interfaces::srv::Enable_Request;
  using Response = panthera_interfaces::srv::Enable_Response;
  using Event = panthera_interfaces::srv::Enable_Event;
};

}  // namespace srv

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__ENABLE__STRUCT_HPP_
