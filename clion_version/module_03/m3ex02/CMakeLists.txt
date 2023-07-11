cmake_minimum_required(VERSION 3.17)
project(m3ex02)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m3ex02 main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp)