// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SetBool_Request __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SetBool_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBool_Request_
{
  using Type = SetBool_Request_<ContainerAllocator>;

  explicit SetBool_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mensaje = "";
    }
  }

  explicit SetBool_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mensaje(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mensaje = "";
    }
  }

  // field types and members
  using _mensaje_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mensaje_type mensaje;

  // setters for named parameter idiom
  Type & set__mensaje(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mensaje = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SetBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SetBool_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SetBool_Request
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SetBool_Request
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBool_Request_ & other) const
  {
    if (this->mensaje != other.mensaje) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBool_Request_

// alias to use template instance with default allocator
using SetBool_Request =
  example_interfaces::srv::SetBool_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces


#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SetBool_Response __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SetBool_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBool_Response_
{
  using Type = SetBool_Response_<ContainerAllocator>;

  explicit SetBool_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respuesta = "";
    }
  }

  explicit SetBool_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : respuesta(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respuesta = "";
    }
  }

  // field types and members
  using _respuesta_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _respuesta_type respuesta;

  // setters for named parameter idiom
  Type & set__respuesta(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->respuesta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SetBool_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SetBool_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SetBool_Response
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SetBool_Response
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBool_Response_ & other) const
  {
    if (this->respuesta != other.respuesta) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBool_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBool_Response_

// alias to use template instance with default allocator
using SetBool_Response =
  example_interfaces::srv::SetBool_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces

namespace example_interfaces
{

namespace srv
{

struct SetBool
{
  using Request = example_interfaces::srv::SetBool_Request;
  using Response = example_interfaces::srv::SetBool_Response;
};

}  // namespace srv

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_HPP_
