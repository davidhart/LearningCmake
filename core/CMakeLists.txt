cmake_minimum_required(VERSION 3.4)
include("common.cmake")

project(core)

#include_directories(${PROJECT_SOURCE_DIR})

add_library(hello-lib SHARED src/hello-lib/hello.cpp src/hello-lib/hello.h)
target_compile_definitions(hello-lib PRIVATE "HELLO_LIB_EXPORT")

add_executable(hello src/hello/main.cpp)
target_include_directories(hello PRIVATE src/hello-lib)
target_link_libraries(hello hello-lib)
