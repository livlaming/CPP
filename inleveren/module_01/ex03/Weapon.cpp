//
// Created by lisa vlamings on 15/02/2022.
//

#include "Weapon.hpp"

#include <iostream>
#include <string>

Weapon::Weapon(void){}

Weapon::Weapon(std::string type){
    this->_type = type;
}

void                Weapon::setType( std::string type ){
    this->_type = type;
}

const std::string   &Weapon::getType() const{
    return(this->_type);
}

Weapon::~Weapon(void){}
