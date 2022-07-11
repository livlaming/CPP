cmake_minimum_required(VERSION 3.17)
project(m3ex03)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m3ex03 main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DaimondTrap.cpp)