cmake_minimum_required(VERSION 3.4)

project(hello)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY, ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

#include_directories(${PROJECT_SOURCE_DIR})

add_executable(hello ${PROJECT_SOURCE_DIR}/main.cpp)

