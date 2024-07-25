// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from behavior_tree_msgs:msg/BehaviorTreeCommands.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_tree_msgs/msg/detail/behavior_tree_commands__struct.h"
#include "behavior_tree_msgs/msg/detail/behavior_tree_commands__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "behavior_tree_msgs/msg/detail/behavior_tree_command__functions.h"
// end nested array functions include
bool behavior_tree_msgs__msg__behavior_tree_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * behavior_tree_msgs__msg__behavior_tree_command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool behavior_tree_msgs__msg__behavior_tree_commands__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("behavior_tree_msgs.msg._behavior_tree_commands.BehaviorTreeCommands", full_classname_dest, 67) == 0);
  }
  behavior_tree_msgs__msg__BehaviorTreeCommands * ros_message = _ros_message;
  {  // commands
    PyObject * field = PyObject_GetAttrString(_pymsg, "commands");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'commands'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence__init(&(ros_message->commands), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create behavior_tree_msgs__msg__BehaviorTreeCommand__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    behavior_tree_msgs__msg__BehaviorTreeCommand * dest = ros_message->commands.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!behavior_tree_msgs__msg__behavior_tree_command__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * behavior_tree_msgs__msg__behavior_tree_commands__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BehaviorTreeCommands */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("behavior_tree_msgs.msg._behavior_tree_commands");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BehaviorTreeCommands");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  behavior_tree_msgs__msg__BehaviorTreeCommands * ros_message = (behavior_tree_msgs__msg__BehaviorTreeCommands *)raw_ros_message;
  {  // commands
    PyObject * field = NULL;
    size_t size = ros_message->commands.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    behavior_tree_msgs__msg__BehaviorTreeCommand * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->commands.data[i]);
      PyObject * pyitem = behavior_tree_msgs__msg__behavior_tree_command__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "commands", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
