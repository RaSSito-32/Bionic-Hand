# generated from
# rosidl_typesupport_microxrcedds_cpp/
#   rosidl_typesupport_microxrcedds_cpp-extras.cmake.in

# use the same type of library
set(rosidl_typesupport_microxrcedds_c_LIBRARY_TYPE "SHARED")

# specific order: dependents before dependencies
list(APPEND rosidl_typesupport_microxrcedds_cpp_LIBRARIES microcdr)

find_package(ament_cmake_core QUIET REQUIRED)
ament_register_extension(
  "rosidl_generate_idl_interfaces"
  "rosidl_typesupport_microxrcedds_cpp"
  "rosidl_typesupport_microxrcedds_cpp_generate_interfaces.cmake")

set(rosidl_typesupport_microxrcedds_cpp_BIN
  "${rosidl_typesupport_microxrcedds_cpp_DIR}/../../../lib/rosidl_typesupport_microxrcedds_cpp/rosidl_typesupport_microxrcedds_cpp")
normalize_path(rosidl_typesupport_microxrcedds_cpp_BIN
  "${rosidl_typesupport_microxrcedds_cpp_BIN}")

set(rosidl_typesupport_microxrcedds_cpp_GENERATOR_FILES
  "${rosidl_typesupport_microxrcedds_cpp_DIR}/../../../lib/python3.12/site-packages/rosidl_typesupport_microxrcedds_cpp/__init__.py")
normalize_path(rosidl_typesupport_microxrcedds_cpp_GENERATOR_FILES
  "${rosidl_typesupport_microxrcedds_cpp_GENERATOR_FILES}")

set(rosidl_typesupport_microxrcedds_cpp_TEMPLATE_DIR
  "${rosidl_typesupport_microxrcedds_cpp_DIR}/../resource")
normalize_path(rosidl_typesupport_microxrcedds_cpp_TEMPLATE_DIR
  "${rosidl_typesupport_microxrcedds_cpp_TEMPLATE_DIR}")
