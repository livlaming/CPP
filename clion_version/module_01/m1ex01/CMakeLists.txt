cmake_minimum_required(VERSION 3.17)
project(m1ex01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m1ex01 main.cpp zombieHorde.cpp Zombie.cpp)