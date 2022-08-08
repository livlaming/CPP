//
// Created by Lisa Vlamings on 7/12/22.
//

#ifndef CPP_DAIMONDTRAP_HPP
#define CPP_DAIMONDTRAP_HPP
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DaimondTrap : public ScavTrap, public FragTrap {
private:
    std::string _Name;
    DaimondTrap();
public:
    DaimondTrap(std::string Name);
    DaimondTrap(const DaimondTrap &copy);
    DaimondTrap &operator=(const DaimondTrap &copy);
    ~DaimondTrap();

    void  whoAmI();
    void attack(const std::string& target);
};


#endif //CPP_DAIMONDTRAP_HPP
