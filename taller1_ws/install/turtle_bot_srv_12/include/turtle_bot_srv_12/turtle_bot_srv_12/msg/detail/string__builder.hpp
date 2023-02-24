// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_bot_srv_12:msg/String.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__MSG__DETAIL__STRING__BUILDER_HPP_
#define TURTLE_BOT_SRV_12__MSG__DETAIL__STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_bot_srv_12/msg/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_bot_srv_12
{

namespace msg
{

namespace builder
{

class Init_String_data
{
public:
  Init_String_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_bot_srv_12::msg::String data(::turtle_bot_srv_12::msg::String::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_bot_srv_12::msg::String msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_bot_srv_12::msg::String>()
{
  return turtle_bot_srv_12::msg::builder::Init_String_data();
}

}  // namespace turtle_bot_srv_12

#endif  // TURTLE_BOT_SRV_12__MSG__DETAIL__STRING__BUILDER_HPP_
