//
// Created by Lisa Vlamings on 7/11/22.
//

#ifndef CPP_DAIMONDTRAP_HPP
#define CPP_DAIMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DaimondTrap : public FragTrap, public ScavTrap {
private:
    std::string Name;
public:
    DaimondTrap(std::string Name);
    DaimondTrap(const DaimondTrap &copy); // copy constructor
    DaimondTrap &operator=(const DaimondTrap &copy);
    ~DaimondTrap(void); // destructor

};


#endif //CPP_DAIMONDTRAP_HPP
