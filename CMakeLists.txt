cmake_minimum_required(VERSION 3.6.2)

project (testprogram CXX)

include_directories(include/testprogram)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB TESTPROGRAM_HEADERS include/testprogram/*.h)
file(GLOB TESTPROGRAM_SOURCES src/testprogram/*.cpp)

add_executable(testprogram ${TESTPROGRAM_SOURCES} ${TESTPROGRAM_HEADERS})