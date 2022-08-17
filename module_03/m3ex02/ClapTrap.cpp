//
// Created by Lisa Vlamings on 5/18/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap default constructor called"<< std::endl;
}

ClapTrap::ClapTrap(std::string Name){
    std::cout << "ClapTrap name constructor called"<< std::endl;
    this->_Name = Name;
    this->_Hitpoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
}

//copy constructor kan een keer en maakt een Class aan waar hij een andere class in kopieerd.
ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    *this = copy;
}

//asignment operator: kopieerd Class in bestaande class
ClapTrap& ClapTrap::operator=(const ClapTrap &copy){
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
    if (&copy != this) {
        this->_Name = copy._Name;
        this->_Hitpoints = copy._Hitpoints;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_AttackDamage = copy._AttackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (_Hitpoints > 0 || _EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
        this->_EnergyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << this->_Name << " has not enough points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    this->_Hitpoints -= amount;
    std::cout << "ClapTrap " << this->_Name << " got damaged for " << amount << " points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_Hitpoints > 0 || _EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " repaired itself for " << amount << " points." << std::endl;
        this->_EnergyPoints -= 1;
        this->_Hitpoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->_Name << "has not enough points." << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap " << this->_Name << " GAME OVER" << std::endl;
}