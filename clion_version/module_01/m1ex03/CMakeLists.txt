cmake_minimum_required(VERSION 3.17)
project(m1ex03)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m1ex03 main.cpp HumanA.cpp HumanB.cpp Weapon.cpp)