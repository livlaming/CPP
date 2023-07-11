//
// Created by Lisa Vlamings on 5/23/22.
//

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <iostream>

class Weapon {
private:
    std::string _Type;

public:
    Weapon(void);
    Weapon(std::string weaponType);
    ~Weapon(void);
    const std::string   &getType(void);
    void                setType(std::string newType);
};

#endif //CPP_WEAPON_HPP
