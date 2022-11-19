cmake_minimum_required(VERSION 3.17)
project(m7ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m7ex00 main.cpp whatever.hpp ../m7ex01/main.cpp ../m7ex01/iter.hpp ../m7ex02/main.cpp ../m7ex01/main.cpp ../m7ex01/iter.hpp ../m7ex02/Array.hpp)