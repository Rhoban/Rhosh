cmake_minimum_required(VERSION 2.8)
project(main)

set (RHOSH_DIR "${CMAKE_SOURCE_DIR}/../../Rhosh"
    CACHE STRING "Rhosh directory")

add_subdirectory (${RHOSH_DIR} rhosh)
include_directories (${RHOSH_DIR})

add_executable(main main.cpp)
target_link_libraries(main rhosh)
