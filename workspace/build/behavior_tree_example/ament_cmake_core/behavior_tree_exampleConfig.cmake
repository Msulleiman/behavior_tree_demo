# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_behavior_tree_example_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED behavior_tree_example_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(behavior_tree_example_FOUND FALSE)
  elseif(NOT behavior_tree_example_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(behavior_tree_example_FOUND FALSE)
  endif()
  return()
endif()
set(_behavior_tree_example_CONFIG_INCLUDED TRUE)

# output package information
if(NOT behavior_tree_example_FIND_QUIETLY)
  message(STATUS "Found behavior_tree_example: 0.0.0 (${behavior_tree_example_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'behavior_tree_example' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${behavior_tree_example_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(behavior_tree_example_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${behavior_tree_example_DIR}/${_extra}")
endforeach()
