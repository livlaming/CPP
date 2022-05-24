//
// Created by Lisa Vlamings on 5/23/22.
//

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    Weapon *_Weapon;
    std::string _Name;
public:
    HumanB(void);
    HumanB(std::string newName);
    ~HumanB(void);
    void setWeapon(Weapon &newWeapon);
    void attack(void);
};

#endif //CPP_HUMANB_HPP
