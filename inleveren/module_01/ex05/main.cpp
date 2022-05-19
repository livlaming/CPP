//
// Created by Lisa Vlamings on 2/23/22.
//
#include "Karen.hpp"

int     main(){
    Karen karen;
    int index = 0;

    while (index < 100)
    {
        karen.complain("DEBUG");
        karen.complain("INFO");
        karen.complain("WARNING");
        karen.complain("ERROR");
        index++;
    }
    return (0);
}
