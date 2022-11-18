cmake_minimum_required(VERSION 3.17)
project(m6ex01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m6ex01 main.cpp Serialize.cpp Serialize.hpp)