// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_bot_srv_12:srv/ReadTxt.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__TRAITS_HPP_
#define TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_bot_srv_12/srv/detail/read_txt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_bot_srv_12
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadTxt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mensaje
  {
    out << "mensaje: ";
    rosidl_generator_traits::value_to_yaml(msg.mensaje, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadTxt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mensaje
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mensaje: ";
    rosidl_generator_traits::value_to_yaml(msg.mensaje, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadTxt_Request & msg, bool use_flow_style = false)
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

}  // namespace turtle_bot_srv_12

namespace rosidl_generator_traits
{

[[deprecated("use turtle_bot_srv_12::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_bot_srv_12::srv::ReadTxt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_bot_srv_12::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_bot_srv_12::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_bot_srv_12::srv::ReadTxt_Request & msg)
{
  return turtle_bot_srv_12::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_bot_srv_12::srv::ReadTxt_Request>()
{
  return "turtle_bot_srv_12::srv::ReadTxt_Request";
}

template<>
inline const char * name<turtle_bot_srv_12::srv::ReadTxt_Request>()
{
  return "turtle_bot_srv_12/srv/ReadTxt_Request";
}

template<>
struct has_fixed_size<turtle_bot_srv_12::srv::ReadTxt_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_bot_srv_12::srv::ReadTxt_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_bot_srv_12::srv::ReadTxt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_bot_srv_12
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadTxt_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: respuesta
  {
    out << "respuesta: ";
    rosidl_generator_traits::value_to_yaml(msg.respuesta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadTxt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: respuesta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respuesta: ";
    rosidl_generator_traits::value_to_yaml(msg.respuesta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadTxt_Response & msg, bool use_flow_style = false)
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

}  // namespace turtle_bot_srv_12

namespace rosidl_generator_traits
{

[[deprecated("use turtle_bot_srv_12::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_bot_srv_12::srv::ReadTxt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_bot_srv_12::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_bot_srv_12::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_bot_srv_12::srv::ReadTxt_Response & msg)
{
  return turtle_bot_srv_12::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_bot_srv_12::srv::ReadTxt_Response>()
{
  return "turtle_bot_srv_12::srv::ReadTxt_Response";
}

template<>
inline const char * name<turtle_bot_srv_12::srv::ReadTxt_Response>()
{
  return "turtle_bot_srv_12/srv/ReadTxt_Response";
}

template<>
struct has_fixed_size<turtle_bot_srv_12::srv::ReadTxt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_bot_srv_12::srv::ReadTxt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_bot_srv_12::srv::ReadTxt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_bot_srv_12::srv::ReadTxt>()
{
  return "turtle_bot_srv_12::srv::ReadTxt";
}

template<>
inline const char * name<turtle_bot_srv_12::srv::ReadTxt>()
{
  return "turtle_bot_srv_12/srv/ReadTxt";
}

template<>
struct has_fixed_size<turtle_bot_srv_12::srv::ReadTxt>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_bot_srv_12::srv::ReadTxt_Request>::value &&
    has_fixed_size<turtle_bot_srv_12::srv::ReadTxt_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_bot_srv_12::srv::ReadTxt>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_bot_srv_12::srv::ReadTxt_Request>::value &&
    has_bounded_size<turtle_bot_srv_12::srv::ReadTxt_Response>::value
  >
{
};

template<>
struct is_service<turtle_bot_srv_12::srv::ReadTxt>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_bot_srv_12::srv::ReadTxt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_bot_srv_12::srv::ReadTxt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__TRAITS_HPP_
