// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_bot_srv_12:srv/ReadTxt.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__FUNCTIONS_H_
#define TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_bot_srv_12/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_bot_srv_12/srv/detail/read_txt__struct.h"

/// Initialize srv/ReadTxt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_bot_srv_12__srv__ReadTxt_Request
 * )) before or use
 * turtle_bot_srv_12__srv__ReadTxt_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Request__init(turtle_bot_srv_12__srv__ReadTxt_Request * msg);

/// Finalize srv/ReadTxt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Request__fini(turtle_bot_srv_12__srv__ReadTxt_Request * msg);

/// Create srv/ReadTxt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_bot_srv_12__srv__ReadTxt_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
turtle_bot_srv_12__srv__ReadTxt_Request *
turtle_bot_srv_12__srv__ReadTxt_Request__create();

/// Destroy srv/ReadTxt message.
/**
 * It calls
 * turtle_bot_srv_12__srv__ReadTxt_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Request__destroy(turtle_bot_srv_12__srv__ReadTxt_Request * msg);

/// Check for srv/ReadTxt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Request__are_equal(const turtle_bot_srv_12__srv__ReadTxt_Request * lhs, const turtle_bot_srv_12__srv__ReadTxt_Request * rhs);

/// Copy a srv/ReadTxt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Request__copy(
  const turtle_bot_srv_12__srv__ReadTxt_Request * input,
  turtle_bot_srv_12__srv__ReadTxt_Request * output);

/// Initialize array of srv/ReadTxt messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_bot_srv_12__srv__ReadTxt_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__init(turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * array, size_t size);

/// Finalize array of srv/ReadTxt messages.
/**
 * It calls
 * turtle_bot_srv_12__srv__ReadTxt_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__fini(turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * array);

/// Create array of srv/ReadTxt messages.
/**
 * It allocates the memory for the array and calls
 * turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence *
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__create(size_t size);

/// Destroy array of srv/ReadTxt messages.
/**
 * It calls
 * turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__destroy(turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * array);

/// Check for srv/ReadTxt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__are_equal(const turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * lhs, const turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * rhs);

/// Copy an array of srv/ReadTxt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Request__Sequence__copy(
  const turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * input,
  turtle_bot_srv_12__srv__ReadTxt_Request__Sequence * output);

/// Initialize srv/ReadTxt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_bot_srv_12__srv__ReadTxt_Response
 * )) before or use
 * turtle_bot_srv_12__srv__ReadTxt_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Response__init(turtle_bot_srv_12__srv__ReadTxt_Response * msg);

/// Finalize srv/ReadTxt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Response__fini(turtle_bot_srv_12__srv__ReadTxt_Response * msg);

/// Create srv/ReadTxt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_bot_srv_12__srv__ReadTxt_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
turtle_bot_srv_12__srv__ReadTxt_Response *
turtle_bot_srv_12__srv__ReadTxt_Response__create();

/// Destroy srv/ReadTxt message.
/**
 * It calls
 * turtle_bot_srv_12__srv__ReadTxt_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Response__destroy(turtle_bot_srv_12__srv__ReadTxt_Response * msg);

/// Check for srv/ReadTxt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Response__are_equal(const turtle_bot_srv_12__srv__ReadTxt_Response * lhs, const turtle_bot_srv_12__srv__ReadTxt_Response * rhs);

/// Copy a srv/ReadTxt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Response__copy(
  const turtle_bot_srv_12__srv__ReadTxt_Response * input,
  turtle_bot_srv_12__srv__ReadTxt_Response * output);

/// Initialize array of srv/ReadTxt messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_bot_srv_12__srv__ReadTxt_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__init(turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * array, size_t size);

/// Finalize array of srv/ReadTxt messages.
/**
 * It calls
 * turtle_bot_srv_12__srv__ReadTxt_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__fini(turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * array);

/// Create array of srv/ReadTxt messages.
/**
 * It allocates the memory for the array and calls
 * turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence *
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__create(size_t size);

/// Destroy array of srv/ReadTxt messages.
/**
 * It calls
 * turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
void
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__destroy(turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * array);

/// Check for srv/ReadTxt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__are_equal(const turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * lhs, const turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * rhs);

/// Copy an array of srv/ReadTxt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_srv_12
bool
turtle_bot_srv_12__srv__ReadTxt_Response__Sequence__copy(
  const turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * input,
  turtle_bot_srv_12__srv__ReadTxt_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_BOT_SRV_12__SRV__DETAIL__READ_TXT__FUNCTIONS_H_
