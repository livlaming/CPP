cmake_minimum_required(VERSION 3.17)
project(ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(ex00 megaphone.cpp ../../module_04/m4ex01/main.cpp ../../module_04/m4ex01/Animal.cpp ../../module_04/m4ex01/Animal.hpp ../../module_04/m4ex01/Dog.cpp ../../module_04/m4ex01/Dog.hpp ../../module_04/m4ex01/Cat.cpp ../../module_04/m4ex01/Cat.hpp ../../module_05/m5ex00/Bureaucrat.cpp ../../module_05/m5ex00/Bureaucrat.hpp ../../module_05/m5ex00/main.cpp ../../module_06/m6ex00/main.cpp ../../module_07/m7ex00/main.cpp ../../module_07/m7ex00/whatever.hpp)