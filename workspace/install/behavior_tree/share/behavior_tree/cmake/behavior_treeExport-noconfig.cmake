#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "behavior_tree::behavior_tree" for configuration ""
set_property(TARGET behavior_tree::behavior_tree APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(behavior_tree::behavior_tree PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libbehavior_tree.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS behavior_tree::behavior_tree )
list(APPEND _IMPORT_CHECK_FILES_FOR_behavior_tree::behavior_tree "${_IMPORT_PREFIX}/lib/libbehavior_tree.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
