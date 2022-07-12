//
// Created by Lisa Vlamings on 7/12/22.
//

#include "DaimondTrap.hpp"

DaimondTrap::DaimondTrap() {
    std::cout << "DaimondTrap constructor called" << std::endl;
}

DaimondTrap::DaimondTrap(std::string Name): ClapTrap(), ScavTrap(), FragTrap(){
    std::cout << "DaimondTrap Name Constructor called" << std::endl;
    this->_Name = Name;
    ClapTrap::_Name = Name + "_clap_name";
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
}

DaimondTrap::DaimondTrap(const DaimondTrap &copy) { // = refereert naar copy operator
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = copy;
}

DaimondTrap& DaimondTrap::operator=(const DaimondTrap &copy){ //copy assignement operator
    std::cout << "Copy assignment operator ScavtrapFragTrap called" << std::endl;
    this->_Name = copy._Name;
    this->_Hitpoints = copy._Hitpoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

void DaimondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void  DaimondTrap::whoAmI(){
    std::cout << "I am: " << this->_Name <<  " && My ClapTrap name = " << ClapTrap::_Name << std::endl;
}
DaimondTrap::~DaimondTrap() {
    std::cout << "DaimondTrap " << this->_Name << " GAME OVER" << std::endl;
}