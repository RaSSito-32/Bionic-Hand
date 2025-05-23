// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/load_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `map_url`
#include "rosidl_runtime_c/string_functions.h"

bool
nav_msgs__srv__LoadMap_Request__init(nav_msgs__srv__LoadMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_url
  if (!rosidl_runtime_c__String__init(&msg->map_url)) {
    nav_msgs__srv__LoadMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__srv__LoadMap_Request__fini(nav_msgs__srv__LoadMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_url
  rosidl_runtime_c__String__fini(&msg->map_url);
}

bool
nav_msgs__srv__LoadMap_Request__are_equal(const nav_msgs__srv__LoadMap_Request * lhs, const nav_msgs__srv__LoadMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_url), &(rhs->map_url)))
  {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__LoadMap_Request__copy(
  const nav_msgs__srv__LoadMap_Request * input,
  nav_msgs__srv__LoadMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // map_url
  if (!rosidl_runtime_c__String__copy(
      &(input->map_url), &(output->map_url)))
  {
    return false;
  }
  return true;
}

nav_msgs__srv__LoadMap_Request *
nav_msgs__srv__LoadMap_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Request * msg = (nav_msgs__srv__LoadMap_Request *)allocator.allocate(sizeof(nav_msgs__srv__LoadMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__LoadMap_Request));
  bool success = nav_msgs__srv__LoadMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__LoadMap_Request__destroy(nav_msgs__srv__LoadMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__LoadMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__LoadMap_Request__Sequence__init(nav_msgs__srv__LoadMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Request * data = NULL;

  if (size) {
    data = (nav_msgs__srv__LoadMap_Request *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__LoadMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__LoadMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__LoadMap_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav_msgs__srv__LoadMap_Request__Sequence__fini(nav_msgs__srv__LoadMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__LoadMap_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav_msgs__srv__LoadMap_Request__Sequence *
nav_msgs__srv__LoadMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Request__Sequence * array = (nav_msgs__srv__LoadMap_Request__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__LoadMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__LoadMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__LoadMap_Request__Sequence__destroy(nav_msgs__srv__LoadMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__LoadMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__LoadMap_Request__Sequence__are_equal(const nav_msgs__srv__LoadMap_Request__Sequence * lhs, const nav_msgs__srv__LoadMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__LoadMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__LoadMap_Request__Sequence__copy(
  const nav_msgs__srv__LoadMap_Request__Sequence * input,
  nav_msgs__srv__LoadMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__LoadMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav_msgs__srv__LoadMap_Request * data =
      (nav_msgs__srv__LoadMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__LoadMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__LoadMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav_msgs__srv__LoadMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `map`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"

bool
nav_msgs__srv__LoadMap_Response__init(nav_msgs__srv__LoadMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->map)) {
    nav_msgs__srv__LoadMap_Response__fini(msg);
    return false;
  }
  // result
  return true;
}

void
nav_msgs__srv__LoadMap_Response__fini(nav_msgs__srv__LoadMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
  // result
}

bool
nav_msgs__srv__LoadMap_Response__are_equal(const nav_msgs__srv__LoadMap_Response * lhs, const nav_msgs__srv__LoadMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__LoadMap_Response__copy(
  const nav_msgs__srv__LoadMap_Response * input,
  nav_msgs__srv__LoadMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

nav_msgs__srv__LoadMap_Response *
nav_msgs__srv__LoadMap_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Response * msg = (nav_msgs__srv__LoadMap_Response *)allocator.allocate(sizeof(nav_msgs__srv__LoadMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__LoadMap_Response));
  bool success = nav_msgs__srv__LoadMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__LoadMap_Response__destroy(nav_msgs__srv__LoadMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__LoadMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__LoadMap_Response__Sequence__init(nav_msgs__srv__LoadMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Response * data = NULL;

  if (size) {
    data = (nav_msgs__srv__LoadMap_Response *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__LoadMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__LoadMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__LoadMap_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav_msgs__srv__LoadMap_Response__Sequence__fini(nav_msgs__srv__LoadMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__LoadMap_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav_msgs__srv__LoadMap_Response__Sequence *
nav_msgs__srv__LoadMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Response__Sequence * array = (nav_msgs__srv__LoadMap_Response__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__LoadMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__LoadMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__LoadMap_Response__Sequence__destroy(nav_msgs__srv__LoadMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__LoadMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__LoadMap_Response__Sequence__are_equal(const nav_msgs__srv__LoadMap_Response__Sequence * lhs, const nav_msgs__srv__LoadMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__LoadMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__LoadMap_Response__Sequence__copy(
  const nav_msgs__srv__LoadMap_Response__Sequence * input,
  nav_msgs__srv__LoadMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__LoadMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav_msgs__srv__LoadMap_Response * data =
      (nav_msgs__srv__LoadMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__LoadMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__LoadMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav_msgs__srv__LoadMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "nav_msgs/srv/detail/load_map__functions.h"

bool
nav_msgs__srv__LoadMap_Event__init(nav_msgs__srv__LoadMap_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    nav_msgs__srv__LoadMap_Event__fini(msg);
    return false;
  }
  // request
  if (!nav_msgs__srv__LoadMap_Request__Sequence__init(&msg->request, 0)) {
    nav_msgs__srv__LoadMap_Event__fini(msg);
    return false;
  }
  // response
  if (!nav_msgs__srv__LoadMap_Response__Sequence__init(&msg->response, 0)) {
    nav_msgs__srv__LoadMap_Event__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__srv__LoadMap_Event__fini(nav_msgs__srv__LoadMap_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  nav_msgs__srv__LoadMap_Request__Sequence__fini(&msg->request);
  // response
  nav_msgs__srv__LoadMap_Response__Sequence__fini(&msg->response);
}

bool
nav_msgs__srv__LoadMap_Event__are_equal(const nav_msgs__srv__LoadMap_Event * lhs, const nav_msgs__srv__LoadMap_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!nav_msgs__srv__LoadMap_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!nav_msgs__srv__LoadMap_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__LoadMap_Event__copy(
  const nav_msgs__srv__LoadMap_Event * input,
  nav_msgs__srv__LoadMap_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!nav_msgs__srv__LoadMap_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!nav_msgs__srv__LoadMap_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

nav_msgs__srv__LoadMap_Event *
nav_msgs__srv__LoadMap_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Event * msg = (nav_msgs__srv__LoadMap_Event *)allocator.allocate(sizeof(nav_msgs__srv__LoadMap_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__LoadMap_Event));
  bool success = nav_msgs__srv__LoadMap_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__LoadMap_Event__destroy(nav_msgs__srv__LoadMap_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__LoadMap_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__LoadMap_Event__Sequence__init(nav_msgs__srv__LoadMap_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Event * data = NULL;

  if (size) {
    data = (nav_msgs__srv__LoadMap_Event *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__LoadMap_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__LoadMap_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__LoadMap_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav_msgs__srv__LoadMap_Event__Sequence__fini(nav_msgs__srv__LoadMap_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__LoadMap_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav_msgs__srv__LoadMap_Event__Sequence *
nav_msgs__srv__LoadMap_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__LoadMap_Event__Sequence * array = (nav_msgs__srv__LoadMap_Event__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__LoadMap_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__LoadMap_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__LoadMap_Event__Sequence__destroy(nav_msgs__srv__LoadMap_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__LoadMap_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__LoadMap_Event__Sequence__are_equal(const nav_msgs__srv__LoadMap_Event__Sequence * lhs, const nav_msgs__srv__LoadMap_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__LoadMap_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__LoadMap_Event__Sequence__copy(
  const nav_msgs__srv__LoadMap_Event__Sequence * input,
  nav_msgs__srv__LoadMap_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__LoadMap_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav_msgs__srv__LoadMap_Event * data =
      (nav_msgs__srv__LoadMap_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__LoadMap_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__LoadMap_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav_msgs__srv__LoadMap_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
