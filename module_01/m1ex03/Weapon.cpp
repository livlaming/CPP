//
// Created by Lisa Vlamings on 5/23/22.
//

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string weaponType) {
    setType(weaponType);
}

const std::string &Weapon::getType(void) {
    return (this->_Type);
}

void    Weapon::setType(std::string newType) {
    this->_Type = newType;
}

Weapon::~Weapon() {}