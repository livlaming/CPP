cmake_minimum_required(VERSION 3.17)
project(m6ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m6ex00 main.cpp Convert.cpp Convert.hpp ../m6ex02/Classes.hpp ../m6ex02/main.cpp)