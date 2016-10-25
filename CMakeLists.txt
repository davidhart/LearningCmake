cmake_minimum_required(VERSION 3.4)
include("core/common.cmake")

project(hello2)

add_subdirectory(core)

add_executable(hello2 src/main2.cpp)
target_include_directories(hello2 PRIVATE core/src/hello-lib)
target_link_libraries(hello2 hello-lib)
add_dependencies(hello hello2)
