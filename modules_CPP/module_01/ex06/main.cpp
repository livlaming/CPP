//
// Created by Lisa Vlamings on 5/23/22.
//

#include "Harl.hpp"

int main(int argc, char *argv[]){

    Harl Harl;

    if (argc == 2){
        Harl.complain(argv[1]);
    }
    else
        std::cout << "Invalid input" << std::endl;
    return (0);
}
