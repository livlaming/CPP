//
// Created by Lisa Vlamings on 5/19/22.
//

#include "Zombie.hpp"

Zombie::Zombie(void){}

void    Zombie::setName(std::string newName){
    this->_Name = newName;
}

void    Zombie::announce(void){
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Zombie: "<< this->_Name << " is deconstructed" << std::endl;
};