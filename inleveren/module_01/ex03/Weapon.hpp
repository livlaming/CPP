//
// Created by lisa vlamings on 15/02/2022.
//

#ifndef CPP__WEAPON_HPP
#define CPP__WEAPON_HPP
#include <string>

class Weapon {
private:
    std::string _type;

public:
    Weapon(void);
    ~Weapon(void);
    Weapon(std::string type);
    void                setType( std::string name );
    const std::string   &getType() const;
};


#endif //CPP__WEAPON_HPP
