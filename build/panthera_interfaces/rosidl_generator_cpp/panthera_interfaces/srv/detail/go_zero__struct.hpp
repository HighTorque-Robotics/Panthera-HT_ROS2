// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panthera_interfaces:srv/GoZero.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/srv/go_zero.hpp"


#ifndef PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__STRUCT_HPP_
#define PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__GoZero_Request __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__GoZero_Request __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoZero_Request_
{
  using Type = GoZero_Request_<ContainerAllocator>;

  explicit GoZero_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_mit_mode = false;
    }
  }

  explicit GoZero_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_mit_mode = false;
    }
  }

  // field types and members
  using _use_mit_mode_type =
    bool;
  _use_mit_mode_type use_mit_mode;

  // setters for named parameter idiom
  Type & set__use_mit_mode(
    const bool & _arg)
  {
    this->use_mit_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::GoZero_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::GoZero_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__GoZero_Request
    std::shared_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__GoZero_Request
    std::shared_ptr<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoZero_Request_ & other) const
  {
    if (this->use_mit_mode != other.use_mit_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoZero_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoZero_Request_

// alias to use template instance with default allocator
using GoZero_Request =
  panthera_interfaces::srv::GoZero_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces


#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__GoZero_Response __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__GoZero_Response __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoZero_Response_
{
  using Type = GoZero_Response_<ContainerAllocator>;

  explicit GoZero_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0ll;
      this->status = false;
    }
  }

  explicit GoZero_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0ll;
      this->status = false;
    }
  }

  // field types and members
  using _code_type =
    int64_t;
  _code_type code;
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__code(
    const int64_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::GoZero_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::GoZero_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__GoZero_Response
    std::shared_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__GoZero_Response
    std::shared_ptr<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoZero_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoZero_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoZero_Response_

// alias to use template instance with default allocator
using GoZero_Response =
  panthera_interfaces::srv::GoZero_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panthera_interfaces__srv__GoZero_Event __attribute__((deprecated))
#else
# define DEPRECATED__panthera_interfaces__srv__GoZero_Event __declspec(deprecated)
#endif

namespace panthera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoZero_Event_
{
  using Type = GoZero_Event_<ContainerAllocator>;

  explicit GoZero_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GoZero_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::GoZero_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<panthera_interfaces::srv::GoZero_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panthera_interfaces::srv::GoZero_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const panthera_interfaces::srv::GoZero_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::GoZero_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panthera_interfaces::srv::GoZero_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panthera_interfaces__srv__GoZero_Event
    std::shared_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panthera_interfaces__srv__GoZero_Event
    std::shared_ptr<panthera_interfaces::srv::GoZero_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoZero_Event_ & other) const
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
  bool operator!=(const GoZero_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoZero_Event_

// alias to use template instance with default allocator
using GoZero_Event =
  panthera_interfaces::srv::GoZero_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panthera_interfaces

namespace panthera_interfaces
{

namespace srv
{

struct GoZero
{
  using Request = panthera_interfaces::srv::GoZero_Request;
  using Response = panthera_interfaces::srv::GoZero_Response;
  using Event = panthera_interfaces::srv::GoZero_Event;
};

}  // namespace srv

}  // namespace panthera_interfaces

#endif  // PANTHERA_INTERFACES__SRV__DETAIL__GO_ZERO__STRUCT_HPP_
