cmake_minimum_required(VERSION 2.8)
project(rhosh)

set (SRCS
    IO.cpp
    Output.cpp
    std.cpp
    terminal.cpp
)

add_library(rhosh ${SRCS})
include_directories("rhosh")
