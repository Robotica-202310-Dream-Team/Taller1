// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_bot_srv_12:msg/String.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__MSG__DETAIL__STRING__TRAITS_HPP_
#define TURTLE_BOT_SRV_12__MSG__DETAIL__STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_bot_srv_12/msg/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_bot_srv_12
{

namespace msg
{

inline void to_flow_style_yaml(
  const String & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const String & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const String & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtle_bot_srv_12

namespace rosidl_generator_traits
{

[[deprecated("use turtle_bot_srv_12::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_bot_srv_12::msg::String & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_bot_srv_12::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_bot_srv_12::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_bot_srv_12::msg::String & msg)
{
  return turtle_bot_srv_12::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_bot_srv_12::msg::String>()
{
  return "turtle_bot_srv_12::msg::String";
}

template<>
inline const char * name<turtle_bot_srv_12::msg::String>()
{
  return "turtle_bot_srv_12/msg/String";
}

template<>
struct has_fixed_size<turtle_bot_srv_12::msg::String>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_bot_srv_12::msg::String>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_bot_srv_12::msg::String>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_BOT_SRV_12__MSG__DETAIL__STRING__TRAITS_HPP_
