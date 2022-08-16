//
// Created by Lisa Vlamings on 8/10/22.
//

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
        Bureaucrat Me("Lola", 14);
        ShrubberyCreationForm Tree("garden");
        Me.signForm(Tree);
//        Me.IncrementGrade(20);
        Me.executeForm(Tree);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

//    RobotomyRequestForm: Required grades: sign 72, exec 45
    try {
        Bureaucrat Me("Simon", 71);
        RobotomyRequestForm RoBoy("Simon");
        Me.signForm(RoBoy);
//        Me.increment(20);
        Me.executeForm(RoBoy);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

    try {
        Bureaucrat Me("Simon", 45);
        RobotomyRequestForm RoBoy("Simon");
        Me.signForm(RoBoy);
//        Me.increment(20);
        Me.executeForm(RoBoy);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

//    PresidentialPardonForm: Required grades: sign 25, exec 5
    try {
        Bureaucrat Me("Tim", 30);
        PresidentialPardonForm Pardon("Tim");
        Me.signForm(Pardon);
        Me.executeForm(Pardon);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    try {
        Bureaucrat Me("Tim", 5);
        PresidentialPardonForm Pardon("Tim");
        Me.signForm(Pardon);
        Me.executeForm(Pardon);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
}

//int main() {

//    std::cout << "\n----------------\n" << std::endl;
//    try {
//        Bureaucrat She("Lola", 5);
//        std::cout << She << std::endl;
//        Form College("Entrance programme X", 6, 6);
//        std::cout << College << std::endl;
//        She.signForm(College);
//        std::cout << std::endl;
//        std::cout << College << std::endl;
//    }
//    catch (std::exception &Exc) {
//        std::cout << Exc.what() << std::endl;
//    }
//    std::cout << "\n----------------\n" << std::endl;
//    try {
//        Bureaucrat He("George", 150);
//        std::cout << He << std::endl;
//        Form College2("Entrance programme Y", 5, 5);
//        std::cout << College2 << std::endl;
//        He.signForm(College2);
//        std::cout << College2 << std::endl;
//        std::cout << College2 << std::endl;
//    }
//    catch (std::exception &Exc) {
//        std::cout << Exc.what() << std::endl;
//    }
//    std::string filename = "_shrubby.txt";
//    std::ofstream outfile(filename);
//    if (outfile.is_open() == false)
//        std::cout << "error" << std::endl;
//    this->_target = target;
//
//    // Write to the file
//    outfile << "                  %%%,%%%%%%%\n"
//               "                   ,'%% \\\\-*%%%%%%%\n"
//               "             ;%%%%%*%   _%%%%\"\n"
//               "              ,%%%       \\(_.*%%%%.\n"
//               "              % *%%, ,%%%%*(    '\n"
//               "            %^     ,*%%% )\\|,%%*%,_\n"
//               "                 *%    \\/ #).-\"*%%*\n"
//               "                     _.) ,/ *%,\n"
//               "             _________/)#(_____________";
//    // Close the file
//    outfile.close();
//

//    system("leaks m5ex01");
//
//
//    return 0;
//}


