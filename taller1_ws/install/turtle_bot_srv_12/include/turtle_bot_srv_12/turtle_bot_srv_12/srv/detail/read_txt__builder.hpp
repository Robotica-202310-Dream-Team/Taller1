// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_bot_srv_12:srv/ReadTxt.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__BUILDER_HPP_
#define TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_bot_srv_12/srv/detail/read_txt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_bot_srv_12
{

namespace srv
{

namespace builder
{

class Init_ReadTxt_Request_mensaje
{
public:
  Init_ReadTxt_Request_mensaje()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_bot_srv_12::srv::ReadTxt_Request mensaje(::turtle_bot_srv_12::srv::ReadTxt_Request::_mensaje_type arg)
  {
    msg_.mensaje = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_bot_srv_12::srv::ReadTxt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_bot_srv_12::srv::ReadTxt_Request>()
{
  return turtle_bot_srv_12::srv::builder::Init_ReadTxt_Request_mensaje();
}

}  // namespace turtle_bot_srv_12


namespace turtle_bot_srv_12
{

namespace srv
{

namespace builder
{

class Init_ReadTxt_Response_respuesta
{
public:
  Init_ReadTxt_Response_respuesta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_bot_srv_12::srv::ReadTxt_Response respuesta(::turtle_bot_srv_12::srv::ReadTxt_Response::_respuesta_type arg)
  {
    msg_.respuesta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_bot_srv_12::srv::ReadTxt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_bot_srv_12::srv::ReadTxt_Response>()
{
  return turtle_bot_srv_12::srv::builder::Init_ReadTxt_Response_respuesta();
}

}  // namespace turtle_bot_srv_12

#endif  // TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__BUILDER_HPP_
