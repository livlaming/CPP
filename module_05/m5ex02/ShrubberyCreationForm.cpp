//
// Created by Lisa Vlamings on 8/15/22.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {
    // Create and open a text file
    std::ofstream outfile("name + _shrubbery.txt");
//
//    // Write to the file
//    MyFile << "Files can be tricky, but it is fun enough!";
//
//    // Close the file
//    MyFile.close();

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    this->_target = copy.getTarget();
    return (*this);
}

std::string getTarget(){
    return(this->_target);
}


ShrubberyCreationForm::~ShrubberyCreationForm(){};