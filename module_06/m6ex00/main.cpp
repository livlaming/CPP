#include <iostream>
#include "Convert.hpp"


// Literals are unnamed values inserted directly into the code.

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
