//
// Created by Lisa Vlamings on 2/24/22.
//

#include "Karen.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    Karen karen;

    if (argc > 1){
        std::string str = argv[1];
        if ((str.compare("DEBUG") != 0 && str.compare("INFO") != 0 && str.compare("WARNING") != 0 && str.compare("ERROR") != 0) || argc != 2)
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        else
            karen.complain(argv[1]);
    }
    else
        std::cout << "missing input, please try again" << std::endl;
    return (0);
}
