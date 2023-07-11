cmake_minimum_required(VERSION 3.17)
project(ex_01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(ex01 main.cpp contact.cpp phonebook.cpp)