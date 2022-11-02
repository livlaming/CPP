//
// Created by Lisa Vlamings on 8/17/22.
//

#include <iostream>
#include "Convert.hpp"

int main (int ac, char **input){
    Convert a;

    if (ac == 2){
        input++;
        a.indicateType(*input);
        std::cout << *input << std::endl;
    }
    else
        std::cout << "Invalid input" << std::endl;
    return (0);
}
