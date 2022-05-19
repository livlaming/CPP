//
// Created by Lisa Vlamings on 3/23/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(std::string Name) {
    this->_Name = Name;
    this->_Hitpoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
    std::cout << "Welcome " << this->_Name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _Name(copy._Name), _Hitpoints(copy._Hitpoints), _EnergyPoints(copy._EnergyPoints), _AttackDamage(copy._AttackDamage) { //initialisationlist
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_Name = copy._Name;
    this->_Hitpoints = copy._Hitpoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target){

    if (this->_EnergyPoints > 0 && this->_Hitpoints > 0){
        this->_EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_Name << " not enough points " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->_Name << " got damaged for " << amount << " points " << std::endl;
    this->_Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_EnergyPoints > 0 && this->_Hitpoints > 0){
        this->_Hitpoints += amount;
        this->_EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->_Name << " repaired itself for " << amount << " points " << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_Name << " not enough points " << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap " << this->_Name << " GAME OVER" << std::endl;
}
