//
// Created by Lisa Vlamings on 2/17/22.
//

#include "HumanB.hpp"
#include <iostream>
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
}

HumanB::HumanB(void){}

void    HumanB::attack(void){
    std::cout << this->_name << " attacks with their "<< this->_weaponB.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon){
    this->_weaponB = weapon;
}

HumanB::~HumanB(void){}
