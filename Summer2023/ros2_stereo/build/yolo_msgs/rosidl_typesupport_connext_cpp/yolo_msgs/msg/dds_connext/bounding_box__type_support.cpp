// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from yolo_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "yolo_msgs/msg/bounding_box__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace yolo_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__BoundingBox()
{
  return yolo_msgs::msg::dds_::BoundingBox_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const yolo_msgs::msg::BoundingBox & ros_message,
  yolo_msgs::msg::dds_::BoundingBox_ & dds_message)
{
  // member.name probability
  dds_message.probability_ =
    ros_message.probability;

  // member.name x_center
  dds_message.x_center_ =
    ros_message.x_center;

  // member.name y_center
  dds_message.y_center_ =
    ros_message.y_center;

  // member.name width
  dds_message.width_ =
    ros_message.width;

  // member.name height
  dds_message.height_ =
    ros_message.height;

  // member.name track_id
  dds_message.track_id_ =
    ros_message.track_id;

  // member.name class_id
  dds_message.class_id_ =
    ros_message.class_id;

  return true;
}

bool
convert_dds_message_to_ros(
  const yolo_msgs::msg::dds_::BoundingBox_ & dds_message,
  yolo_msgs::msg::BoundingBox & ros_message)
{
  // member.name probability
  ros_message.probability =
    dds_message.probability_;

  // member.name x_center
  ros_message.x_center =
    dds_message.x_center_;

  // member.name y_center
  ros_message.y_center =
    dds_message.y_center_;

  // member.name width
  ros_message.width =
    dds_message.width_;

  // member.name height
  ros_message.height =
    dds_message.height_;

  // member.name track_id
  ros_message.track_id =
    dds_message.track_id_;

  // member.name class_id
  ros_message.class_id =
    dds_message.class_id_;

  return true;
}

bool
to_cdr_stream__BoundingBox(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const yolo_msgs::msg::BoundingBox & ros_message =
    *(const yolo_msgs::msg::BoundingBox *)untyped_ros_message;

  // create a respective connext dds type
  yolo_msgs::msg::dds_::BoundingBox_ * dds_message = yolo_msgs::msg::dds_::BoundingBox_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (yolo_msgs::msg::dds_::BoundingBox_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call yolo_msgs::msg::dds_::BoundingBox_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (yolo_msgs::msg::dds_::BoundingBox_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (yolo_msgs::msg::dds_::BoundingBox_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__BoundingBox(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  yolo_msgs::msg::dds_::BoundingBox_ * dds_message =
    yolo_msgs::msg::dds_::BoundingBox_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (yolo_msgs::msg::dds_::BoundingBox_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  yolo_msgs::msg::BoundingBox & ros_message =
    *(yolo_msgs::msg::BoundingBox *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (yolo_msgs::msg::dds_::BoundingBox_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _BoundingBox__callbacks = {
  "yolo_msgs::msg",
  "BoundingBox",
  &get_type_code__BoundingBox,
  nullptr,
  nullptr,
  &to_cdr_stream__BoundingBox,
  &to_message__BoundingBox
};

static rosidl_message_type_support_t _BoundingBox__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_BoundingBox__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace yolo_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_yolo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<yolo_msgs::msg::BoundingBox>()
{
  return &yolo_msgs::msg::typesupport_connext_cpp::_BoundingBox__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  yolo_msgs, msg,
  BoundingBox)()
{
  return &yolo_msgs::msg::typesupport_connext_cpp::_BoundingBox__handle;
}

#ifdef __cplusplus
}
#endif
