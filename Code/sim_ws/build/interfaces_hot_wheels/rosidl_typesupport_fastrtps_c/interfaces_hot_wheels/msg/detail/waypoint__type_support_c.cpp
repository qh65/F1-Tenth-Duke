// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_hot_wheels:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "interfaces_hot_wheels/msg/detail/waypoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_hot_wheels/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_hot_wheels/msg/detail/waypoint__struct.h"
#include "interfaces_hot_wheels/msg/detail/waypoint__functions.h"
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


using _Waypoint__ros_msg_type = interfaces_hot_wheels__msg__Waypoint;

static bool _Waypoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Waypoint__ros_msg_type * ros_message = static_cast<const _Waypoint__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  // Field name: v
  {
    cdr << ros_message->v;
  }

  // Field name: arc_length
  {
    cdr << ros_message->arc_length;
  }

  // Field name: curvature
  {
    cdr << ros_message->curvature;
  }

  // Field name: l
  {
    cdr << ros_message->l;
  }

  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  return true;
}

static bool _Waypoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Waypoint__ros_msg_type * ros_message = static_cast<_Waypoint__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: theta
  {
    cdr >> ros_message->theta;
  }

  // Field name: v
  {
    cdr >> ros_message->v;
  }

  // Field name: arc_length
  {
    cdr >> ros_message->arc_length;
  }

  // Field name: curvature
  {
    cdr >> ros_message->curvature;
  }

  // Field name: l
  {
    cdr >> ros_message->l;
  }

  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_hot_wheels
size_t get_serialized_size_interfaces_hot_wheels__msg__Waypoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Waypoint__ros_msg_type * ros_message = static_cast<const _Waypoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v
  {
    size_t item_size = sizeof(ros_message->v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arc_length
  {
    size_t item_size = sizeof(ros_message->arc_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature
  {
    size_t item_size = sizeof(ros_message->curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l
  {
    size_t item_size = sizeof(ros_message->l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Waypoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_hot_wheels__msg__Waypoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_hot_wheels
size_t max_serialized_size_interfaces_hot_wheels__msg__Waypoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: arc_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curvature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: l
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Waypoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_hot_wheels__msg__Waypoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Waypoint = {
  "interfaces_hot_wheels::msg",
  "Waypoint",
  _Waypoint__cdr_serialize,
  _Waypoint__cdr_deserialize,
  _Waypoint__get_serialized_size,
  _Waypoint__max_serialized_size
};

static rosidl_message_type_support_t _Waypoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Waypoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_hot_wheels, msg, Waypoint)() {
  return &_Waypoint__type_support;
}

#if defined(__cplusplus)
}
#endif
