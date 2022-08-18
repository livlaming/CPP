//
// Created by Lisa Vlamings on 8/17/22.
//

#include <iostream>
#include "convert.hpp"

int main (int ac, char **input){
    convert a;

    if (ac == 2){
        input++;
        a.indicateType(*input);
        std::cout << *input << std::endl;
    }
    else
        std::cout << "Invalid input" << std::endl;
    return (0);
}
