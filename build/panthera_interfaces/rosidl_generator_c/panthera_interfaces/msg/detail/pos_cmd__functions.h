// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from panthera_interfaces:msg/PosCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "panthera_interfaces/msg/pos_cmd.h"


#ifndef PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__FUNCTIONS_H_
#define PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "panthera_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "panthera_interfaces/msg/detail/pos_cmd__struct.h"

/// Initialize msg/PosCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * panthera_interfaces__msg__PosCmd
 * )) before or use
 * panthera_interfaces__msg__PosCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
bool
panthera_interfaces__msg__PosCmd__init(panthera_interfaces__msg__PosCmd * msg);

/// Finalize msg/PosCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
void
panthera_interfaces__msg__PosCmd__fini(panthera_interfaces__msg__PosCmd * msg);

/// Create msg/PosCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * panthera_interfaces__msg__PosCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
panthera_interfaces__msg__PosCmd *
panthera_interfaces__msg__PosCmd__create(void);

/// Destroy msg/PosCmd message.
/**
 * It calls
 * panthera_interfaces__msg__PosCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
void
panthera_interfaces__msg__PosCmd__destroy(panthera_interfaces__msg__PosCmd * msg);

/// Check for msg/PosCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
bool
panthera_interfaces__msg__PosCmd__are_equal(const panthera_interfaces__msg__PosCmd * lhs, const panthera_interfaces__msg__PosCmd * rhs);

/// Copy a msg/PosCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
bool
panthera_interfaces__msg__PosCmd__copy(
  const panthera_interfaces__msg__PosCmd * input,
  panthera_interfaces__msg__PosCmd * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_type_hash_t *
panthera_interfaces__msg__PosCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
panthera_interfaces__msg__PosCmd__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_runtime_c__type_description__TypeSource *
panthera_interfaces__msg__PosCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
panthera_interfaces__msg__PosCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PosCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * panthera_interfaces__msg__PosCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
bool
panthera_interfaces__msg__PosCmd__Sequence__init(panthera_interfaces__msg__PosCmd__Sequence * array, size_t size);

/// Finalize array of msg/PosCmd messages.
/**
 * It calls
 * panthera_interfaces__msg__PosCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
void
panthera_interfaces__msg__PosCmd__Sequence__fini(panthera_interfaces__msg__PosCmd__Sequence * array);

/// Create array of msg/PosCmd messages.
/**
 * It allocates the memory for the array and calls
 * panthera_interfaces__msg__PosCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
panthera_interfaces__msg__PosCmd__Sequence *
panthera_interfaces__msg__PosCmd__Sequence__create(size_t size);

/// Destroy array of msg/PosCmd messages.
/**
 * It calls
 * panthera_interfaces__msg__PosCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
void
panthera_interfaces__msg__PosCmd__Sequence__destroy(panthera_interfaces__msg__PosCmd__Sequence * array);

/// Check for msg/PosCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
bool
panthera_interfaces__msg__PosCmd__Sequence__are_equal(const panthera_interfaces__msg__PosCmd__Sequence * lhs, const panthera_interfaces__msg__PosCmd__Sequence * rhs);

/// Copy an array of msg/PosCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_panthera_interfaces
bool
panthera_interfaces__msg__PosCmd__Sequence__copy(
  const panthera_interfaces__msg__PosCmd__Sequence * input,
  panthera_interfaces__msg__PosCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PANTHERA_INTERFACES__MSG__DETAIL__POS_CMD__FUNCTIONS_H_
