//
// Created by Lisa Vlamings on 2/17/22.
//

#ifndef CPP__HUMANB_HPP
#define CPP__HUMANB_HPP
#include "Weapon.hpp"
#include <string>

class HumanB {
    private:
        std::string _name;
        Weapon      _weaponB;
        HumanB(void);
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack();
        void    setWeapon(Weapon weapon);
};

#endif //CPP__HUMANB_HPP
