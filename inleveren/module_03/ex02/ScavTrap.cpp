//
// Created by Lisa Vlamings on 7/11/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->_Name = Name;
    this->_Hitpoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    std::cout << "Copy assignment operator Scavtrap called" << std::endl;
    this->_Name = copy._Name;
    this->_Hitpoints = copy._Hitpoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;

    return (*this);
}

void ScavTrap::attack(const std::string &target) {
    if (_Hitpoints > 0 && _EnergyPoints > 0) {
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage
                  << " points of damage!" << std::endl;
        this->_EnergyPoints -= 1;
    } else
        std::cout << "ScavTrap " << this->_Name << " has not enough points." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->_Name << " GAME OVER" << std::endl;
}
