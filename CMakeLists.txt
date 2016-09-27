cmake_minimum_required(VERSION 3.6.2)

project (testprogram CXX)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

file(GLOB TESTPROGRAM_SOURCES src/testprogram/*.cpp)

add_executable(testprogram ${TESTPROGRAM_SOURCES})