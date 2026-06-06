// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/digital_output__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kobuki_ros_interfaces/msg/detail/digital_output__struct.h"
#include "kobuki_ros_interfaces/msg/detail/digital_output__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DigitalOutput__ros_msg_type = kobuki_ros_interfaces__msg__DigitalOutput;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
bool cdr_serialize_kobuki_ros_interfaces__msg__DigitalOutput(
  const kobuki_ros_interfaces__msg__DigitalOutput * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: values
  {
    size_t size = 4;
    auto array_ptr = ros_message->values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mask
  {
    size_t size = 4;
    auto array_ptr = ros_message->mask;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
bool cdr_deserialize_kobuki_ros_interfaces__msg__DigitalOutput(
  eprosima::fastcdr::Cdr & cdr,
  kobuki_ros_interfaces__msg__DigitalOutput * ros_message)
{
  // Field name: values
  {
    size_t size = 4;
    auto array_ptr = ros_message->values;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: mask
  {
    size_t size = 4;
    auto array_ptr = ros_message->mask;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t get_serialized_size_kobuki_ros_interfaces__msg__DigitalOutput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DigitalOutput__ros_msg_type * ros_message = static_cast<const _DigitalOutput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: values
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mask
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->mask;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t max_serialized_size_kobuki_ros_interfaces__msg__DigitalOutput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: values
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mask
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kobuki_ros_interfaces__msg__DigitalOutput;
    is_plain =
      (
      offsetof(DataType, mask) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
bool cdr_serialize_key_kobuki_ros_interfaces__msg__DigitalOutput(
  const kobuki_ros_interfaces__msg__DigitalOutput * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: values
  {
    size_t size = 4;
    auto array_ptr = ros_message->values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mask
  {
    size_t size = 4;
    auto array_ptr = ros_message->mask;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t get_serialized_size_key_kobuki_ros_interfaces__msg__DigitalOutput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DigitalOutput__ros_msg_type * ros_message = static_cast<const _DigitalOutput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: values
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mask
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->mask;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t max_serialized_size_key_kobuki_ros_interfaces__msg__DigitalOutput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: values
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mask
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kobuki_ros_interfaces__msg__DigitalOutput;
    is_plain =
      (
      offsetof(DataType, mask) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DigitalOutput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const kobuki_ros_interfaces__msg__DigitalOutput * ros_message = static_cast<const kobuki_ros_interfaces__msg__DigitalOutput *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_kobuki_ros_interfaces__msg__DigitalOutput(ros_message, cdr);
}

static bool _DigitalOutput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  kobuki_ros_interfaces__msg__DigitalOutput * ros_message = static_cast<kobuki_ros_interfaces__msg__DigitalOutput *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_kobuki_ros_interfaces__msg__DigitalOutput(cdr, ros_message);
}

static uint32_t _DigitalOutput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kobuki_ros_interfaces__msg__DigitalOutput(
      untyped_ros_message, 0));
}

static size_t _DigitalOutput__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kobuki_ros_interfaces__msg__DigitalOutput(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DigitalOutput = {
  "kobuki_ros_interfaces::msg",
  "DigitalOutput",
  _DigitalOutput__cdr_serialize,
  _DigitalOutput__cdr_deserialize,
  _DigitalOutput__get_serialized_size,
  _DigitalOutput__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DigitalOutput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DigitalOutput,
  get_message_typesupport_handle_function,
  &kobuki_ros_interfaces__msg__DigitalOutput__get_type_hash,
  &kobuki_ros_interfaces__msg__DigitalOutput__get_type_description,
  &kobuki_ros_interfaces__msg__DigitalOutput__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, msg, DigitalOutput)() {
  return &_DigitalOutput__type_support;
}

#if defined(__cplusplus)
}
#endif
