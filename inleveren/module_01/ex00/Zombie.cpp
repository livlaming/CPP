//
// Created by Lisa Vlamings on 2/8/22.
//
#include "Zombie.hpp"

Zombie::Zombie(void){}

void    Zombie::announce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name){
    this->_name = name;
}

Zombie::~Zombie(void){
    std::cout << "this zombie named: " << this->_name << " is destructed." << std::endl;
}
