// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define TURTLE_BOT_SRV_12__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_turtle_bot_srv_12 __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_bot_srv_12 __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_turtle_bot_srv_12 __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_bot_srv_12 __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_turtle_bot_srv_12
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_bot_srv_12 ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_turtle_bot_srv_12
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_bot_srv_12 ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_bot_srv_12
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_turtle_bot_srv_12 __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_bot_srv_12
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_bot_srv_12 __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_bot_srv_12
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // TURTLE_BOT_SRV_12__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
