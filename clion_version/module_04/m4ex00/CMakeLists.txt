cmake_minimum_required(VERSION 3.17)
project(m4ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m4ex00 main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp ../m4ex03/main.cpp ../m4ex03/Amateria.cpp ../m4ex03/Amateria.hpp ../m4ex03/Ice.cpp ../m4ex03/Ice.hpp ../m4ex03/Cure.cpp ../m4ex03/Cure.hpp ../m4ex03/ICharacter.cpp ../m4ex03/ICharacter.hpp)