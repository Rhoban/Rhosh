cmake_minimum_required(VERSION 2.8)
project(rhosh)

option (DEMO "Build the demo" OFF)

set (SRCS
    IO.cpp
    Output.cpp
    std.cpp
    terminal.cpp
)

add_library(rhosh ${SRCS})
include_directories("rhosh")

if (DEMO)
    add_executable (demo demo.cpp)
    target_link_libraries (demo rhosh)
endif ()
