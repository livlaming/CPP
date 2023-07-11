#include <iostream>
#include "Convert.hpp"


// Literals are unnamed values inserted directly into the code.

int main (int ac, char const **input){
    if (ac == 2){
        input++;

        Convert literal(*input);
        std::cout << literal << std::endl;
    }
    else
        std::cout << "Invalid input" << std::endl;
    return (0);
}
