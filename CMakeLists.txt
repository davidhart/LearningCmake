cmake_minimum_required(VERSION 3.4)

project(hello)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

#include_directories(${PROJECT_SOURCE_DIR})

add_library(hello-lib SHARED src/hello-lib/hello.cpp src/hello-lib/hello.h)
target_compile_definitions(hello-lib PRIVATE "HELLO_LIB_EXPORT")

add_executable(hello src/hello/main.cpp)

include_directories(src/hello-lib)
target_link_libraries(hello hello-lib)
