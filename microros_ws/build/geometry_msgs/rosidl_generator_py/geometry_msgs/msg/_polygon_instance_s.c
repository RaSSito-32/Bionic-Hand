// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from geometry_msgs:msg/PolygonInstance.idl
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
#include "geometry_msgs/msg/detail/polygon_instance__struct.h"
#include "geometry_msgs/msg/detail/polygon_instance__functions.h"

bool geometry_msgs__msg__polygon__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * geometry_msgs__msg__polygon__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool geometry_msgs__msg__polygon_instance__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("geometry_msgs.msg._polygon_instance.PolygonInstance", full_classname_dest, 51) == 0);
  }
  geometry_msgs__msg__PolygonInstance * ros_message = _ros_message;
  {  // polygon
    PyObject * field = PyObject_GetAttrString(_pymsg, "polygon");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__polygon__convert_from_py(field, &ros_message->polygon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * geometry_msgs__msg__polygon_instance__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PolygonInstance */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._polygon_instance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PolygonInstance");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  geometry_msgs__msg__PolygonInstance * ros_message = (geometry_msgs__msg__PolygonInstance *)raw_ros_message;
  {  // polygon
    PyObject * field = NULL;
    field = geometry_msgs__msg__polygon__convert_to_py(&ros_message->polygon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "polygon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
