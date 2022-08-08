cmake_minimum_required(VERSION 3.17)
project(ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(ex00 megaphone.cpp ../../module_04/m4ex00/main.cpp ../../module_04/m4ex00/Animal.cpp ../../module_04/m4ex00/Animal.hpp ../../module_04/m4ex00/Dog.cpp ../../module_04/m4ex00/Dog.hpp ../../module_04/m4ex00/Cat.cpp ../../module_04/m4ex00/Cat.hpp)