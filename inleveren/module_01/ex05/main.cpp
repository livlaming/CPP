//
// Created by Lisa Vlamings on 5/23/22.
//

#include "Harl.hpp"

int main(void){

    Harl Harl;
    int index = 0;

    while (index < 50)
    {
        Harl.complain("DEBUG");
        Harl.complain("INFO");
        Harl.complain("WARNING");
        Harl.complain("ERROR");
        index++;
    }
    return (0);
}
