// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_bot_srv_12:srv/ReadTxt.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__STRUCT_HPP_
#define TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Request __declspec(deprecated)
#endif

namespace turtle_bot_srv_12
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadTxt_Request_
{
  using Type = ReadTxt_Request_<ContainerAllocator>;

  explicit ReadTxt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mensaje = "";
    }
  }

  explicit ReadTxt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Request
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Request
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadTxt_Request_ & other) const
  {
    if (this->mensaje != other.mensaje) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadTxt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadTxt_Request_

// alias to use template instance with default allocator
using ReadTxt_Request =
  turtle_bot_srv_12::srv::ReadTxt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_bot_srv_12


#ifndef _WIN32
# define DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Response __declspec(deprecated)
#endif

namespace turtle_bot_srv_12
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadTxt_Response_
{
  using Type = ReadTxt_Response_<ContainerAllocator>;

  explicit ReadTxt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respuesta = "";
    }
  }

  explicit ReadTxt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Response
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_bot_srv_12__srv__ReadTxt_Response
    std::shared_ptr<turtle_bot_srv_12::srv::ReadTxt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadTxt_Response_ & other) const
  {
    if (this->respuesta != other.respuesta) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadTxt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadTxt_Response_

// alias to use template instance with default allocator
using ReadTxt_Response =
  turtle_bot_srv_12::srv::ReadTxt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_bot_srv_12

namespace turtle_bot_srv_12
{

namespace srv
{

struct ReadTxt
{
  using Request = turtle_bot_srv_12::srv::ReadTxt_Request;
  using Response = turtle_bot_srv_12::srv::ReadTxt_Response;
};

}  // namespace srv

}  // namespace turtle_bot_srv_12

#endif  // TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__STRUCT_HPP_
