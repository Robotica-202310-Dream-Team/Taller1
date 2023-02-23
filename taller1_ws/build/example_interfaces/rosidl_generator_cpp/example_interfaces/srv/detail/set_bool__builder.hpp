// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__BUILDER_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/srv/detail/set_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBool_Request_mensaje
{
public:
  Init_SetBool_Request_mensaje()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::srv::SetBool_Request mensaje(::example_interfaces::srv::SetBool_Request::_mensaje_type arg)
  {
    msg_.mensaje = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::SetBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::SetBool_Request>()
{
  return example_interfaces::srv::builder::Init_SetBool_Request_mensaje();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBool_Response_respuesta
{
public:
  Init_SetBool_Response_respuesta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::srv::SetBool_Response respuesta(::example_interfaces::srv::SetBool_Response::_respuesta_type arg)
  {
    msg_.respuesta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::SetBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::SetBool_Response>()
{
  return example_interfaces::srv::builder::Init_SetBool_Response_respuesta();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__BUILDER_HPP_
