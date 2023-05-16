# Install script for directory: /Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

set(CMAKE_BINARY_DIR "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX")

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/lib/Debug/libio2d_core.a")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/lib/Release/libio2d_core.a")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/lib/MinSizeRel/libio2d_core.a")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/lib/RelWithDebInfo/libio2d_core.a")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_core.a")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/test_process.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/test_renderer.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xbrushes.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xbrushes_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xcolor.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xdiagnostics.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xgraphicsmath.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xgraphicsmath_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xgraphicsmathfloat.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xgraphicsmathfloat_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xinput.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xinterchangebuffer.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xio2d.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xio2d_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xpath.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xpath_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xpathbuilder_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xsurfaces.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xsurfaces_enums.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xsurfaces_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xsurfacesprops_impl.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xsystemheaders.h"
    "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/xtext.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d/io2dConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d/io2dConfig.cmake"
         "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/CMakeFiles/Export/31736c4fd947c5cd63018067dcd32abd/io2dConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d/io2dConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d/io2dConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d" TYPE FILE FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/CMakeFiles/Export/31736c4fd947c5cd63018067dcd32abd/io2dConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d" TYPE FILE FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/CMakeFiles/Export/31736c4fd947c5cd63018067dcd32abd/io2dConfig-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d" TYPE FILE FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/CMakeFiles/Export/31736c4fd947c5cd63018067dcd32abd/io2dConfig-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d" TYPE FILE FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/CMakeFiles/Export/31736c4fd947c5cd63018067dcd32abd/io2dConfig-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/io2d" TYPE FILE FILES "/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/CMakeFiles/Export/31736c4fd947c5cd63018067dcd32abd/io2dConfig-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/cmake_install.cmake")
  include("/Users/ilavaleev/Dev/CppND-Route-Planning-Project/buildX/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xlib/cmake_install.cmake")

endif()

