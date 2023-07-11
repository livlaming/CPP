//
// Created by Lisa Vlamings on 5/23/22.
//

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
    Weapon *_Weapon;
    std::string _Name;
    HumanA(void);
public:
    HumanA(std::string _newName, Weapon &_newWeapon);
    ~HumanA(void);
    void attack();
};


#endif //CPP_HUMANA_HPP
