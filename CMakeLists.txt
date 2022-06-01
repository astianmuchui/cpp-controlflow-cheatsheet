cmake_minimum_required(VERSION 3.22)
project(c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)

add_executable(c__
        main.cpp
        )
