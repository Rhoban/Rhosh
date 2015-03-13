cmake_minimum_required(VERSION 2.8)
project(rhosh)

set (SRCS
    IO.cpp
    Output.cpp
    Std.cpp
    terminal.cpp
)

add_executable (demo demo.cpp ${SRCS})
