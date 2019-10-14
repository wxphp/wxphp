cmake_minimum_required(VERSION 3.8)
project(wxphp CXX)

# Get PHP source directory
execute_process(
        COMMAND php-config --include-dir
        OUTPUT_VARIABLE PHP_SOURCE
)
string(REGEX REPLACE "\n$" "" PHP_SOURCE "${PHP_SOURCE}")
message("Using PHP source directory: ${PHP_SOURCE}")


# Add wxwidgets library
file(GLOB WXWIDGETS_MAKEFILE_IN ${PROJECT_SOURCE_DIR}/wxWidgets-*/Makefile.in)
get_filename_component(WXWIDGETS_DIR ${WXWIDGETS_MAKEFILE_IN} DIRECTORY)
unset(WXWIDGETS_MAKEFILE_IN)
message("Using wxWidgets source directory: ${WXWIDGETS_DIR}")

file(GLOB_RECURSE WXWIDGETS_SOURCE_FILES ${WXWIDGETS_DIR}/*.c ${WXWIDGETS_DIR}/*.cpp)

add_library(_wxwidgets EXCLUDE_FROM_ALL ${WXWIDGETS_SOURCE_FILES})
target_include_directories(_wxwidgets PUBLIC ${WXWIDGETS_DIR}/include)
include(CMakeCompilerFlags.txt)

# Add wxphp library
set(SOURCE_FILES php_wxwidgets.h wxwidgets.cpp)
aux_source_directory(src SOURCE_FILES)

add_library(_wxphp EXCLUDE_FROM_ALL ${SOURCE_FILES})
target_include_directories(_wxphp PUBLIC ${PHP_SOURCE})
target_include_directories(_wxphp PUBLIC ${PHP_SOURCE}/main)
target_include_directories(_wxphp PUBLIC ${PHP_SOURCE}/Zend)
target_include_directories(_wxphp PUBLIC ${PHP_SOURCE}/TSRM)
target_include_directories(_wxphp PUBLIC ${WXWIDGETS_DIR}/include)
target_include_directories(_wxphp PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(_wxphp PUBLIC ${PROJECT_SOURCE_DIR}/includes)
add_compile_definitions(USE_WXPHP_DEBUG=1)


# Add custom targets
add_custom_target(regen
        COMMAND ./regen.sh
        COMMAND sed -i 's/-O2/-O0 -g/g' config.m4
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})

add_custom_target(configure
        COMMAND phpize && ./configure --enable-wxwidgets-debug --enable-wxwidgets-static CFLAGS='-g -O0' CXXFLAGS='-g -O0'
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
