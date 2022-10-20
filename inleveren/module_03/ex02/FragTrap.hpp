//
// Created by Lisa Vlamings on 7/11/22.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
private:
    FragTrap(void);
public:
    FragTrap(std::string Name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &copy);
    ~FragTrap(void);

    void highFivesGuys(void);
};

#endif //CPP_FRAGTRAP_HPP
