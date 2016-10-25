cmake_minimum_required(VERSION 3.4)

project(hello)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

#include_directories(${PROJECT_SOURCE_DIR})

add_library(hello-lib src/hello-lib/hello.cpp)

add_executable(hello src/hello/main.cpp)
include_directories(src/hello-lib)
target_link_libraries(hello hello-lib)
