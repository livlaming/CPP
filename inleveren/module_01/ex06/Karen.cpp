//
// Created by Lisa Vlamings on 2/24/22.
//

#include "Karen.hpp"
#include <string>
#include <iostream>
#include <algorithm>

Karen::Karen(void){}

void    Karen::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Karen::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void    Karen::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level ){
    void (Karen::*pmf[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error} ;
    std::string input[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = 0;

    while (index < 4)
    {
        if (input[index] == level)
            break;
        index++;
    }
    while (index < 4)
    {
        (this->*pmf[index])();
        std::cout << std::endl;
        index++;
    }
}

Karen::~Karen(void){}

