#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "complex_msgs::complex_msgs__rosidl_generator_py" for configuration ""
set_property(TARGET complex_msgs::complex_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(complex_msgs::complex_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "complex_msgs::complex_msgs__rosidl_generator_c;Python3::Python;complex_msgs::complex_msgs__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_generator_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_fastrtps_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_fastrtps_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_cpp;builtin_interfaces::builtin_interfaces__rosidl_generator_py"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcomplex_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libcomplex_msgs__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets complex_msgs::complex_msgs__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_complex_msgs::complex_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libcomplex_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
