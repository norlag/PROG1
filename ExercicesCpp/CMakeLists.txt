cmake_minimum_required(VERSION 3.20)
project(PROG)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")
add_executable(PROG main.cpp)
