// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ur3e_ros_data:action/MoveXYZ.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur3e_ros_data/action/detail/move_xyz__struct.h"
#include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
#include "ur3e_ros_data/action/detail/move_xyz__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_Goal_type_support_ids_t;

static const _MoveXYZ_Goal_type_support_ids_t _MoveXYZ_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_Goal_type_support_symbol_names_t _MoveXYZ_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_Goal)),
  }
};

typedef struct _MoveXYZ_Goal_type_support_data_t
{
  void * data[2];
} _MoveXYZ_Goal_type_support_data_t;

static _MoveXYZ_Goal_type_support_data_t _MoveXYZ_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_Goal_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_Goal__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_Goal__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_Goal)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_Result_type_support_ids_t;

static const _MoveXYZ_Result_type_support_ids_t _MoveXYZ_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_Result_type_support_symbol_names_t _MoveXYZ_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_Result)),
  }
};

typedef struct _MoveXYZ_Result_type_support_data_t
{
  void * data[2];
} _MoveXYZ_Result_type_support_data_t;

static _MoveXYZ_Result_type_support_data_t _MoveXYZ_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_Result_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_Result__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_Result__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_Result)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_Feedback_type_support_ids_t;

static const _MoveXYZ_Feedback_type_support_ids_t _MoveXYZ_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_Feedback_type_support_symbol_names_t _MoveXYZ_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_Feedback)),
  }
};

typedef struct _MoveXYZ_Feedback_type_support_data_t
{
  void * data[2];
} _MoveXYZ_Feedback_type_support_data_t;

static _MoveXYZ_Feedback_type_support_data_t _MoveXYZ_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_Feedback_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_Feedback__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_Feedback__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_Feedback)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_Request_type_support_ids_t;

static const _MoveXYZ_SendGoal_Request_type_support_ids_t _MoveXYZ_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_Request_type_support_symbol_names_t _MoveXYZ_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Request)),
  }
};

typedef struct _MoveXYZ_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_Request_type_support_data_t;

static _MoveXYZ_SendGoal_Request_type_support_data_t _MoveXYZ_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_Request_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Request__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Request__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Request)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_Response_type_support_ids_t;

static const _MoveXYZ_SendGoal_Response_type_support_ids_t _MoveXYZ_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_Response_type_support_symbol_names_t _MoveXYZ_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Response)),
  }
};

typedef struct _MoveXYZ_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_Response_type_support_data_t;

static _MoveXYZ_SendGoal_Response_type_support_data_t _MoveXYZ_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_Response_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Response__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Response__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Response)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_Event_type_support_ids_t;

static const _MoveXYZ_SendGoal_Event_type_support_ids_t _MoveXYZ_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_Event_type_support_symbol_names_t _MoveXYZ_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Event)),
  }
};

typedef struct _MoveXYZ_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_Event_type_support_data_t;

static _MoveXYZ_SendGoal_Event_type_support_data_t _MoveXYZ_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_Event_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Event__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Event__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_SendGoal_Event)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveXYZ_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_type_support_ids_t;

static const _MoveXYZ_SendGoal_type_support_ids_t _MoveXYZ_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_type_support_symbol_names_t _MoveXYZ_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_SendGoal)),
  }
};

typedef struct _MoveXYZ_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_type_support_data_t;

static _MoveXYZ_SendGoal_type_support_data_t _MoveXYZ_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_service_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveXYZ_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveXYZ_SendGoal_Request_message_type_support_handle,
  &MoveXYZ_SendGoal_Response_message_type_support_handle,
  &MoveXYZ_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZ_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZ_SendGoal
  ),
  &ur3e_ros_data__action__MoveXYZ_SendGoal__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_SendGoal__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_SendGoal)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_Request_type_support_ids_t;

static const _MoveXYZ_GetResult_Request_type_support_ids_t _MoveXYZ_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_Request_type_support_symbol_names_t _MoveXYZ_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_GetResult_Request)),
  }
};

typedef struct _MoveXYZ_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_Request_type_support_data_t;

static _MoveXYZ_GetResult_Request_type_support_data_t _MoveXYZ_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_Request_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Request__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Request__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_GetResult_Request)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_Response_type_support_ids_t;

static const _MoveXYZ_GetResult_Response_type_support_ids_t _MoveXYZ_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_Response_type_support_symbol_names_t _MoveXYZ_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_GetResult_Response)),
  }
};

typedef struct _MoveXYZ_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_Response_type_support_data_t;

static _MoveXYZ_GetResult_Response_type_support_data_t _MoveXYZ_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_Response_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Response__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Response__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_GetResult_Response)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_Event_type_support_ids_t;

static const _MoveXYZ_GetResult_Event_type_support_ids_t _MoveXYZ_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_Event_type_support_symbol_names_t _MoveXYZ_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_GetResult_Event)),
  }
};

typedef struct _MoveXYZ_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_Event_type_support_data_t;

static _MoveXYZ_GetResult_Event_type_support_data_t _MoveXYZ_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_Event_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Event__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Event__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_GetResult_Event)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveXYZ_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_type_support_ids_t;

static const _MoveXYZ_GetResult_type_support_ids_t _MoveXYZ_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_type_support_symbol_names_t _MoveXYZ_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_GetResult)),
  }
};

typedef struct _MoveXYZ_GetResult_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_type_support_data_t;

static _MoveXYZ_GetResult_type_support_data_t _MoveXYZ_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_service_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveXYZ_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveXYZ_GetResult_Request_message_type_support_handle,
  &MoveXYZ_GetResult_Response_message_type_support_handle,
  &MoveXYZ_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZ_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur3e_ros_data,
    action,
    MoveXYZ_GetResult
  ),
  &ur3e_ros_data__action__MoveXYZ_GetResult__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_GetResult__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_GetResult)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__struct.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur3e_ros_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveXYZ_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_FeedbackMessage_type_support_ids_t;

static const _MoveXYZ_FeedbackMessage_type_support_ids_t _MoveXYZ_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_FeedbackMessage_type_support_symbol_names_t _MoveXYZ_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur3e_ros_data, action, MoveXYZ_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur3e_ros_data, action, MoveXYZ_FeedbackMessage)),
  }
};

typedef struct _MoveXYZ_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveXYZ_FeedbackMessage_type_support_data_t;

static _MoveXYZ_FeedbackMessage_type_support_data_t _MoveXYZ_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_FeedbackMessage_message_typesupport_map = {
  2,
  "ur3e_ros_data",
  &_MoveXYZ_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur3e_ros_data__action__MoveXYZ_FeedbackMessage__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ_FeedbackMessage__get_type_description,
  &ur3e_ros_data__action__MoveXYZ_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ur3e_ros_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_FeedbackMessage)() {
  return &::ur3e_ros_data::action::rosidl_typesupport_c::MoveXYZ_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ur3e_ros_data/action/move_xyz.h"
// already included above
// #include "ur3e_ros_data/action/detail/move_xyz__type_support.h"

static rosidl_action_type_support_t _ur3e_ros_data__action__MoveXYZ__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &ur3e_ros_data__action__MoveXYZ__get_type_hash,
  &ur3e_ros_data__action__MoveXYZ__get_type_description,
  &ur3e_ros_data__action__MoveXYZ__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ)()
{
  // Thread-safe by always writing the same values to the static struct
  _ur3e_ros_data__action__MoveXYZ__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_SendGoal)();
  _ur3e_ros_data__action__MoveXYZ__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_GetResult)();
  _ur3e_ros_data__action__MoveXYZ__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ur3e_ros_data__action__MoveXYZ__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ur3e_ros_data, action, MoveXYZ_FeedbackMessage)();
  _ur3e_ros_data__action__MoveXYZ__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ur3e_ros_data__action__MoveXYZ__typesupport_c;
}

#ifdef __cplusplus
}
#endif
