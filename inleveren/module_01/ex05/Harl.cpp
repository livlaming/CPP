//
// Created by Lisa Vlamings on 5/23/22.
//

#include "Harl.hpp"
#include <iostream>
#include <algorithm>

Harl::Harl(void){}

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void    Harl::complain( std::string level ){

    int index;              //within for loop index exists solely within the brackets{}
    t_list complaints[4] = {
            {"DEBUG", &Harl::debug},
            {"INFO",&Harl::info},
            {"WARNING",&Harl::warning},
            {"ERROR",&Harl::error}};

    for (index = 0;index<4;index++)
    {
        if (complaints[index].str.compare(level) == 0)
            break;
    }
    (this->*complaints[index].f)();
}

Harl::~Harl(void){}


//notes to self:

//    (this->*complaints[index].f)() ==  Harl::debug() ==  this->debug //voer functie uit binnen class.
//    this-> = Harl::
//    this->debug(); = Harl::debug();

//    (this->*(complaints[index].f))(): =
//    (this->*(&Harl::debug))();
//    (Harl::*(&Harl::debug))(); //

//without struct:
//void    Harl::complain( std::string level ){
//    void (Harl::*pmf[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error} ;
//    std::string input[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
//
//    int index = 0;
//    while (index < 4)
//    {
//        if (input[index] == level)
//            break;
//        index++;
//    }
//    (this->*pmf[index])();
//}
