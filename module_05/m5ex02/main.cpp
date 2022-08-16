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

    try {
        Bureaucrat Me("Lola", 14);
        ShrubberyCreationForm Tree("garden");
//        Me.SignForm(Tree);
//        Me.IncrementGrade(20);
//        Me.ExecuteForm(Tree);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    try {
        Bureaucrat Me("Lola", 139);
        RobotomyRequestForm RoBoy("wall-e");
//        Me.SignForm(RoRo);
//        Me.IncrementGrade(20);
//        Me.ExecuteForm(RoRo);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    try {
        Bureaucrat Me("Lola", 5);
        PresidentialPardonForm Pardon("Lola");
//        Me.SignForm(Obama);
//        Me.ExecuteForm(Obama);
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


