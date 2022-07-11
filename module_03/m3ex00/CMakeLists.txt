cmake_minimum_required(VERSION 3.17)
project(m3ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m3ex00 ClapTrap.cpp main.cpp ../m3ex01/ScavTrap.cpp ../m3ex01/ScavTrap.hpp)