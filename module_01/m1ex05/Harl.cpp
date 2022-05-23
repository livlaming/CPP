//
// Created by Lisa Vlamings on 5/23/22.
//

#include "Harl.hpp"
#include <iostream>

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
//
//}

void    Harl::complain( std::string level ){
    std::string input[4][2] = {{"DEBUG", "&Harl::debug"}, {"INFO","&Harl::info"}, {"WARNING","&Harl::warning"}, {"ERROR","&Harl::error"}};
    int index = 0;
    void (Harl::*pmf)(); // declare pmf as pointer to Harl member function,
    while (index < 4)
    {
        if (input[index][0] == level)
            break;
    }
//    this->*pmf();
    this->(*pmf) = input[index][1];//&Karen::debug;//input[0]; // set pmf to point to Karen's member function
////    pmf = &input[index][1];//&Karen::debug;//input[0]; // set pmf to point to Karen's member function
//    (this->*pmf)();
//    level();

}

Harl::~Harl(void){}