//
// Created by Lisa Vlamings on 8/15/22.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {
    // Create and open a text file
    std::string filename = target + "_shrubby.txt";
    std::ofstream outfile(filename);
//    this->_target = target;
//
    // Write to the file
    outfile << "                  %%%,%%%%%%%\n"
               "                   ,'%% \\\\-*%%%%%%%\n"
               "             ;%%%%%*%   _%%%%\"\n"
               "              ,%%%       \\(_.*%%%%.\n"
               "              % *%%, ,%%%%*(    '\n"
               "            %^     ,*%%% )\\|,%%*%,_\n"
               "                 *%    \\/ #).-\"*%%*\n"
               "                     _.) ,/ *%,\n"
               "             _________/)#(_____________";
    // Close the file
    outfile.close();


}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
//    this->_target = copy.getTarget();
    return (*this);
}

//std::string getTarget() const{
//    return(this->_target);
//}


ShrubberyCreationForm::~ShrubberyCreationForm(){};