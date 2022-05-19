//
// Created by Lisa Vlamings on 4/6/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(void){}

FragTrap::FragTrap(std::string Name) {
    this->_Name = Name;
    this->_Hitpoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) { // = refereert naar copy operator
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy){ //copy assignement operator
    this->_Name = copy._Name;
    this->_Hitpoints = copy._Hitpoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(void) {
    std::cout << "HIGH FIVE??" << std::endl;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap " << this->_Name << " GAME OVER" << std::endl;
}
