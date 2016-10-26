cmake_minimum_required(VERSION 3.4)
include("common.cmake")

project(core)

#include_directories(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE HELLO_LIB_SOURCES
    RELATIVE ${PROJECT_SOURCE_DIR}
    GROUP 
    src/hello-lib/*.cpp
    src/hello-lib/*.h)

add_library(hello-lib SHARED ${HELLO_LIB_SOURCES})
target_compile_definitions(hello-lib PRIVATE "HELLO_LIB_EXPORT")
define_source_root_groups("src" "src/hello-lib" "")

file(GLOB_RECURSE HELLO_SOURCES
    RELATIVE ${PROJECT_SOURCE_DIR}
    src/hello/*.cpp
    src/hello/*.h)

add_executable(hello ${HELLO_SOURCES})
target_include_directories(hello PRIVATE src/hello-lib)
target_link_libraries(hello hello-lib)
define_source_root_groups("src" "src/hello" "")
