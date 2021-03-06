/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rtty.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "rtty.pb-c.h"
void   rtty_message__env_entry__init
                     (RttyMessage__EnvEntry         *message)
{
  static RttyMessage__EnvEntry init_value = RTTY_MESSAGE__ENV_ENTRY__INIT;
  *message = init_value;
}
void   rtty_message__init
                     (RttyMessage         *message)
{
  static RttyMessage init_value = RTTY_MESSAGE__INIT;
  *message = init_value;
}
size_t rtty_message__get_packed_size
                     (const RttyMessage *message)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t rtty_message__pack
                     (const RttyMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t rtty_message__pack_to_buffer
                     (const RttyMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RttyMessage *
       rtty_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RttyMessage *)
     protobuf_c_message_unpack (&rtty_message__descriptor,
                                allocator, len, data);
}
void   rtty_message__free_unpacked
                     (RttyMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor rtty_message__env_entry__field_descriptors[2] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage__EnvEntry, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage__EnvEntry, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rtty_message__env_entry__field_indices_by_name[] = {
  0,   /* field[0] = key */
  1,   /* field[1] = value */
};
static const ProtobufCIntRange rtty_message__env_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor rtty_message__env_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rtty_message.EnvEntry",
  "EnvEntry",
  "RttyMessage__EnvEntry",
  "",
  sizeof(RttyMessage__EnvEntry),
  2,
  rtty_message__env_entry__field_descriptors,
  rtty_message__env_entry__field_indices_by_name,
  1,  rtty_message__env_entry__number_ranges,
  (ProtobufCMessageInit) rtty_message__env_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue rtty_message__type__enum_values_by_number[7] =
{
  { "UNKNOWN", "RTTY_MESSAGE__TYPE__UNKNOWN", 0 },
  { "LOGIN", "RTTY_MESSAGE__TYPE__LOGIN", 1 },
  { "LOGINACK", "RTTY_MESSAGE__TYPE__LOGINACK", 2 },
  { "LOGOUT", "RTTY_MESSAGE__TYPE__LOGOUT", 3 },
  { "TTY", "RTTY_MESSAGE__TYPE__TTY", 4 },
  { "COMMAND", "RTTY_MESSAGE__TYPE__COMMAND", 5 },
  { "WINSIZE", "RTTY_MESSAGE__TYPE__WINSIZE", 6 },
};
static const ProtobufCIntRange rtty_message__type__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex rtty_message__type__enum_values_by_name[7] =
{
  { "COMMAND", 5 },
  { "LOGIN", 1 },
  { "LOGINACK", 2 },
  { "LOGOUT", 3 },
  { "TTY", 4 },
  { "UNKNOWN", 0 },
  { "WINSIZE", 6 },
};
const ProtobufCEnumDescriptor rtty_message__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "rtty_message.Type",
  "Type",
  "RttyMessage__Type",
  "",
  7,
  rtty_message__type__enum_values_by_number,
  7,
  rtty_message__type__enum_values_by_name,
  1,
  rtty_message__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue rtty_message__login_code__enum_values_by_number[2] =
{
  { "OK", "RTTY_MESSAGE__LOGIN_CODE__OK", 0 },
  { "OFFLINE", "RTTY_MESSAGE__LOGIN_CODE__OFFLINE", 1 },
};
static const ProtobufCIntRange rtty_message__login_code__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex rtty_message__login_code__enum_values_by_name[2] =
{
  { "OFFLINE", 1 },
  { "OK", 0 },
};
const ProtobufCEnumDescriptor rtty_message__login_code__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "rtty_message.LoginCode",
  "LoginCode",
  "RttyMessage__LoginCode",
  "",
  2,
  rtty_message__login_code__enum_values_by_number,
  2,
  rtty_message__login_code__enum_values_by_name,
  1,
  rtty_message__login_code__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue rtty_message__command_err__enum_values_by_number[9] =
{
  { "NONE", "RTTY_MESSAGE__COMMAND_ERR__NONE", 0 },
  { "TIMEOUT", "RTTY_MESSAGE__COMMAND_ERR__TIMEOUT", 1 },
  { "NOTFOUND", "RTTY_MESSAGE__COMMAND_ERR__NOTFOUND", 2 },
  { "READ", "RTTY_MESSAGE__COMMAND_ERR__READ", 3 },
  { "PERMISSION", "RTTY_MESSAGE__COMMAND_ERR__PERMISSION", 4 },
  { "SYSCALL", "RTTY_MESSAGE__COMMAND_ERR__SYSCALL", 5 },
  { "DEV_OFFLINE", "RTTY_MESSAGE__COMMAND_ERR__DEV_OFFLINE", 6 },
  { "CMD_REQUIRED", "RTTY_MESSAGE__COMMAND_ERR__CMD_REQUIRED", 7 },
  { "DEVID_REQUIRED", "RTTY_MESSAGE__COMMAND_ERR__DEVID_REQUIRED", 8 },
};
static const ProtobufCIntRange rtty_message__command_err__value_ranges[] = {
{0, 0},{0, 9}
};
static const ProtobufCEnumValueIndex rtty_message__command_err__enum_values_by_name[9] =
{
  { "CMD_REQUIRED", 7 },
  { "DEVID_REQUIRED", 8 },
  { "DEV_OFFLINE", 6 },
  { "NONE", 0 },
  { "NOTFOUND", 2 },
  { "PERMISSION", 4 },
  { "READ", 3 },
  { "SYSCALL", 5 },
  { "TIMEOUT", 1 },
};
const ProtobufCEnumDescriptor rtty_message__command_err__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "rtty_message.CommandErr",
  "CommandErr",
  "RttyMessage__CommandErr",
  "",
  9,
  rtty_message__command_err__enum_values_by_number,
  9,
  rtty_message__command_err__enum_values_by_name,
  1,
  rtty_message__command_err__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor rtty_message__field_descriptors[17] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_version),
    offsetof(RttyMessage, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(RttyMessage, has_type),
    offsetof(RttyMessage, type),
    &rtty_message__type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sid",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, sid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "code",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RttyMessage, has_code),
    offsetof(RttyMessage, code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(RttyMessage, has_data),
    offsetof(RttyMessage, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_size),
    offsetof(RttyMessage, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_id),
    offsetof(RttyMessage, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "err",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RttyMessage, has_err),
    offsetof(RttyMessage, err),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "username",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, username),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "password",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, password),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "std_out",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, std_out),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "std_err",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, std_err),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "params",
    14,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(RttyMessage, n_params),
    offsetof(RttyMessage, params),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "env",
    15,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RttyMessage, n_env),
    offsetof(RttyMessage, env),
    &rtty_message__env_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cols",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_cols),
    offsetof(RttyMessage, cols),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rows",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_rows),
    offsetof(RttyMessage, rows),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rtty_message__field_indices_by_name[] = {
  3,   /* field[3] = code */
  15,   /* field[15] = cols */
  4,   /* field[4] = data */
  14,   /* field[14] = env */
  8,   /* field[8] = err */
  7,   /* field[7] = id */
  5,   /* field[5] = name */
  13,   /* field[13] = params */
  10,   /* field[10] = password */
  16,   /* field[16] = rows */
  2,   /* field[2] = sid */
  6,   /* field[6] = size */
  12,   /* field[12] = std_err */
  11,   /* field[11] = std_out */
  1,   /* field[1] = type */
  9,   /* field[9] = username */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange rtty_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 17 }
};
const ProtobufCMessageDescriptor rtty_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rtty_message",
  "RttyMessage",
  "RttyMessage",
  "",
  sizeof(RttyMessage),
  17,
  rtty_message__field_descriptors,
  rtty_message__field_indices_by_name,
  1,  rtty_message__number_ranges,
  (ProtobufCMessageInit) rtty_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
