//
// Created by Lisa Vlamings on 8/15/22.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    if (&copy != this)
        this->_target = copy._target;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (this->getSign() == 1 && executor.getGrade() <= this->getGradeExc())
    {
        std::ofstream outfile(this->_target + "_shrubby.txt");
        if (outfile.is_open() == false)
            throw ShrubberyCreationForm::ShrubberyFailed();
        outfile << "                  %%%,%%%%%%%\n"
        "                   ,'%% \\\\-*%%%%%%%\n"
        "             ;%%%%%*%   _%%%%\"\n"
        "              ,%%%       \\(_.*%%%%.\n"
        "              % *%%, ,%%%%*(    '\n"
        "            %^     ,*%%% )\\|,%%*%,_\n"
        "                 *%    \\/ #).-\"*%%*\n"
        "                     _.) ,/ *%,\n"
        "             _________/)#(_____________";
        outfile.close();
    }
    else
        throw ShrubberyCreationForm::ShrubberyFailed();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
