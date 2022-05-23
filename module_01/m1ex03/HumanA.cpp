//
// Created by Lisa Vlamings on 5/23/22.
//

#include "HumanA.hpp"
#include <iostream>
#include "Weapon.hpp"

HumanA::HumanA(void) {}

HumanA::HumanA(std::string _newName, Weapon &_newWeapon) {
    this->_Weapon = &_newWeapon;
    this->_Name = _newName;
}

void HumanA::attack(void) {
    std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

HumanA::~HumanA() {}