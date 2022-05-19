//
// Created by lisa vlamings on 15/02/2022.
//

#include "Zombie.hpp"

Zombie::Zombie(void){}

void                Zombie::announce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void                Zombie::setName(std::string name){
    this->_name = name;
}

const std::string   &Zombie::getName() const{
    return _name;
}

Zombie::~Zombie(void){
    std::cout << "Zombie named: " << this->_name << " is destructed." << std::endl;
}
