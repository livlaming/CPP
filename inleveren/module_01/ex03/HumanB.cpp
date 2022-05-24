//
// Created by Lisa Vlamings on 5/23/22.
//

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB() {}

HumanB::HumanB(std::string newName) {
    this->_Name = newName;
}

void    HumanB::attack(void) {
    std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &newWeapon) {
    this->_Weapon = &newWeapon;
}
HumanB::~HumanB() {}
