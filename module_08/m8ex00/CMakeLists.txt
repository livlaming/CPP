cmake_minimum_required(VERSION 3.17)
project(m8ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m8ex00 main.cpp easyfind.hpp ../m8ex01/Span.cpp ../m8ex01/Span.hpp ../m8ex01/main.cpp)