cmake_minimum_required(VERSION 3.17)
project(m5ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS -std=c++98)

add_executable(m5ex00 main.cpp Bureaucrat.cpp ../m5ex02/ShrubberyCreationForm.cpp ../m5ex02/ShrubberyCreationForm.hpp ../m5ex02/RobotomyRequestForm.cpp ../m5ex02/RobotomyRequestForm.hpp ../m5ex02/PresidentialPardonForm.cpp ../m5ex02/PresidentialPardonForm.hpp)