//
// Created by Lisa Vlamings on 8/15/22.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (this->getSign() == 1) {
        std::string filename = this->getTarget() + "_shrubby.txt";
        std::ofstream outfile;
        outfile.open(filename);
        if (outfile.is_open() == false)
            std::cout << "error" << std::endl;

        outfile << "                  %%%,%%%%%%%\n"
                   "                   ,'%% \\\\-*%%%%%%%\n"
                   "             ;%%%%%*%   _%%%%\"\n"
                   "              ,%%%       \\(_.*%%%%.\n"
                   "              % *%%, ,%%%%*(    '\n"
                   "            %^     ,*%%% )\\|,%%*%,_\n"
                   "                 *%    \\/ #).-\"*%%*\n"
                   "                     _.) ,/ *%,\n"
                   "             _________/)#(_____________" << std::endl;

        outfile.close();
    }
    else
        std::cout << "ShrubberyCreationForm not signed" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};





//
// Create and open a text file
//std::string filename = target + "_shrubby.txt";
//std::ofstream outfile(filename);
//if (outfile.is_open() == false)
//std::cout << "error" << std::endl;
//    this->_target = target;
//
// Write to the file
//outfile << "                  %%%,%%%%%%%\n"
//"                   ,'%% \\\\-*%%%%%%%\n"
//"             ;%%%%%*%   _%%%%\"\n"
//"              ,%%%       \\(_.*%%%%.\n"
//"              % *%%, ,%%%%*(    '\n"
//"            %^     ,*%%% )\\|,%%*%,_\n"
//"                 *%    \\/ #).-\"*%%*\n"
//"                     _.) ,/ *%,\n"
//"             _________/)#(_____________";
// Close the file
//outfile.close();


//    of //
//    std::string filename = "hallo.txt";
//    std::ofstream outfile;
//    outfile.open(filename);
//    if (outfile.is_open() == false)
//        std::cout << "error" << std::endl;
//
//    outfile << "                  %%%,%%%%%%%\n"
//               "                   ,'%% \\\\-*%%%%%%%\n"
//               "             ;%%%%%*%   _%%%%\"\n"
//               "              ,%%%       \\(_.*%%%%.\n"
//               "              % *%%, ,%%%%*(    '\n"
//               "            %^     ,*%%% )\\|,%%*%,_\n"
//               "                 *%    \\/ #).-\"*%%*\n"
//               "                     _.) ,/ *%,\n"
//               "             _________/)#(_____________" << std::endl;
//    // Close the file
//    outfile.close();
//
//    std::ofstream myfile;
//    myfile.open ("example.txt");
//    myfile << "Writing this to a file.\n";
//    myfile.close();


//}