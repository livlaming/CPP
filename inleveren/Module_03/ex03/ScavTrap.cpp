//
// Created by Lisa Vlamings on 3/23/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){}

ScavTrap::ScavTrap(std::string Name) {
    this->_Name = Name;
    this->_Hitpoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) { // = refereert naar copy operator
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy){ //copy assignement operator
    this->_Name = copy._Name;
    this->_Hitpoints = copy._Hitpoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    std::cout << this->_EnergyPoints << std::endl;
    if (this->_EnergyPoints > 0 && this->_Hitpoints > 0){
        this->_EnergyPoints -= 1;
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_Name << " not enough points " << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap " << this->_Name << " GAME OVER" << std::endl;
}
