//
// Created by lisa vlamings on 15/02/2022.
//

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon weapon){
    this->_name = name;
    this->_weaponA = weapon;
//    this->_weaponA.setWeapon(Weapon);
}

HumanA::HumanA(void){}

void    HumanA::attack(void){
    std::cout << this->_name << " attacks with their "<< this->_weaponA.getType() << std::endl;;
}

HumanA::~HumanA(void){}
