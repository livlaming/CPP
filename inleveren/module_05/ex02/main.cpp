#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>


int main(){

//    ShrubberyCreationForm Required grades: sign 145, exec 137
    try {
        Bureaucrat Me("Lola", 140);
        ShrubberyCreationForm Tree("garden");
        Me.signForm(Tree);
//        Me.increment();
        Me.executeForm(Tree);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    try {
        Bureaucrat Me("Lola", 137);
        ShrubberyCreationForm Tree("garden");
        Me.signForm(Tree);
//        Me.increment();
        Me.executeForm(Tree);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

//    RobotomyRequestForm: Required grades: sign 72, exec 45
    try {
        Bureaucrat Me("Simon", 73);
        RobotomyRequestForm RoBoy("ROBO");
        Me.signForm(RoBoy);
//        Me.increment();
        Me.executeForm(RoBoy);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    try {
        Bureaucrat Me("Simon", 71);
        RobotomyRequestForm RoBoy("ROBO");
        Me.signForm(RoBoy);
        Me.executeForm(RoBoy);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

    try {
        Bureaucrat Me("Simon", 45);
        RobotomyRequestForm RoBoy("ROBO");
        Me.signForm(RoBoy);
        Me.executeForm(RoBoy);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

//    PresidentialPardonForm: Required grades: sign 25, exec 5
    try {
        Bureaucrat Me("Tim", 30);
        PresidentialPardonForm Pardon("TARGET");
        Me.signForm(Pardon);
        Me.executeForm(Pardon);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    try {
        Bureaucrat Me("Tim", 5);
        PresidentialPardonForm Pardon("TARGET");
        Me.signForm(Pardon);
        Me.executeForm(Pardon);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    try {
        Bureaucrat Me("Tim", 6);
        PresidentialPardonForm Pardon("TARGET");
        Me.signForm(Pardon);
        Me.executeForm(Pardon);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
}



