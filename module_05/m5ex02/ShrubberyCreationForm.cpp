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
    if (outfile.is_open() == false)
        std::cout << "error" << std::endl;
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