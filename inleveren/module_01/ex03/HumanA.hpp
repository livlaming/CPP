//
// Created by lisa vlamings on 15/02/2022.
//

#ifndef CPP__HUMANA_HPP
#define CPP__HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon      _weaponA;
        HumanA(void);
    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA(void);
        void    attack();
};


#endif //CPP__HUMANA_HPP
