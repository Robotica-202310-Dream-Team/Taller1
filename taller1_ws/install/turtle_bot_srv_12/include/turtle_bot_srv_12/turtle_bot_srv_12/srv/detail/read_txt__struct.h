// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_bot_srv_12:srv/ReadTxt.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__STRUCT_H_
#define TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mensaje'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReadTxt in the package turtle_bot_srv_12.
typedef struct turtle_bot_srv_12__srv__ReadTxt_Request
{
  /// e.g. for hardware enabling / disabling
  rosidl_runtime_c__String mensaje;
} turtle_bot_srv_12__srv__ReadTxt_Request;

// Struct for a sequence of turtle_bot_srv_12__srv__ReadTxt_Request.
typedef struct turtle_bot_srv_12__srv__ReadTxt_Request__Sequence
{
  turtle_bot_srv_12__srv__ReadTxt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_bot_srv_12__srv__ReadTxt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'respuesta'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReadTxt in the package turtle_bot_srv_12.
typedef struct turtle_bot_srv_12__srv__ReadTxt_Response
{
  /// informational, e.g. for error messages
  rosidl_runtime_c__String respuesta;
} turtle_bot_srv_12__srv__ReadTxt_Response;

// Struct for a sequence of turtle_bot_srv_12__srv__ReadTxt_Response.
typedef struct turtle_bot_srv_12__srv__ReadTxt_Response__Sequence
{
  turtle_bot_srv_12__srv__ReadTxt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_bot_srv_12__srv__ReadTxt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__STRUCT_H_
