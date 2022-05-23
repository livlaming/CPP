//
// Created by Lisa Vlamings on 5/23/22.
//
#include <iostream>
int main(){

    std::string STR = "HI THIS IS BRAIN";
    std::string *stringPTR = &STR;
    std::string &stringREF = STR;

    std::cout << "The memory address of the string variable : " << &STR << std::endl;
    std::cout << "The memory address of the stringPTR       : " << stringPTR << std::endl;
    std::cout << "The memory address of the stringREF       : " << &stringREF << std::endl;

    std::cout << "The value of the string variable          : " << STR << std::endl;
    std::cout << "The value of the stringPTR                : " << *stringPTR << std::endl;
    std::cout << "The value of the stringREF                : " << stringREF << std::endl;

    return (0);
}