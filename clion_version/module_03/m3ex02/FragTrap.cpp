//
// Created by Lisa Vlamings on 7/11/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
    std::cout << "FragTrap default constructor called"<< std::endl;
}

FragTrap::FragTrap(std::string Name) {
    std::cout << "FragTrap name constructor called"<< std::endl;
    this->_Name = Name;
    this->_Hitpoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) { // = refereert naar copy operator
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy){ //copy assignement operator
    std::cout << "Copy assignment operator ScavtrapFragTrap called" << std::endl;
    if (&copy != this) {
        this->_Name = copy._Name;
        this->_Hitpoints = copy._Hitpoints;
        this->_EnergyPoints = copy._EnergyPoints;
        this->_AttackDamage = copy._AttackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void){
    std::cout << "a positive high fives request" << std::endl;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap " << this->_Name << " GAME OVER" << std::endl;
}
