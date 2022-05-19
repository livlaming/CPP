//
// Created by Lisa Vlamings on 2/23/22.
//

#include "Karen.hpp"
#include <string>
#include <iostream>
#include <algorithm>

Karen::Karen(void){}

void    Karen::debug(void){
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Karen::info(void){
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void    Karen::warning(void){
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void    Karen::error(void){
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
    (this->*pmf[index])();

}

Karen::~Karen(void){}
