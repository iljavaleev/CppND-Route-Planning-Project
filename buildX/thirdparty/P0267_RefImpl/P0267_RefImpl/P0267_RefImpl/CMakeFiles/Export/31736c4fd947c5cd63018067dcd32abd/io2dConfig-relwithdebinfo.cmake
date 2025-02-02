#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "io2d::io2d_core" for configuration "RelWithDebInfo"
set_property(TARGET io2d::io2d_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(io2d::io2d_core PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libio2d_core.a"
  )

list(APPEND _cmake_import_check_targets io2d::io2d_core )
list(APPEND _cmake_import_check_files_for_io2d::io2d_core "${_IMPORT_PREFIX}/lib/libio2d_core.a" )

# Import target "io2d::io2d_cairo" for configuration "RelWithDebInfo"
set_property(TARGET io2d::io2d_cairo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(io2d::io2d_cairo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libio2d_cairo.a"
  )

list(APPEND _cmake_import_check_targets io2d::io2d_cairo )
list(APPEND _cmake_import_check_files_for_io2d::io2d_cairo "${_IMPORT_PREFIX}/lib/libio2d_cairo.a" )

# Import target "io2d::io2d_cairo_xlib" for configuration "RelWithDebInfo"
set_property(TARGET io2d::io2d_cairo_xlib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(io2d::io2d_cairo_xlib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libio2d_cairo_xlib.a"
  )

list(APPEND _cmake_import_check_targets io2d::io2d_cairo_xlib )
list(APPEND _cmake_import_check_files_for_io2d::io2d_cairo_xlib "${_IMPORT_PREFIX}/lib/libio2d_cairo_xlib.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
