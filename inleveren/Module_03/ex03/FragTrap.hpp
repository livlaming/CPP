//
// Created by Lisa Vlamings on 4/6/22.
//

#ifndef CPP__FRAGTRAP_HPP
#define CPP__FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
private:
    FragTrap(void);
public:
    FragTrap(std::string Name);
    FragTrap(const FragTrap &copy); // copy constructor
    FragTrap &operator=(const FragTrap &copy);
    ~FragTrap(void); // destructor
    void highFivesGuys(void);
};


#endif //CPP__FRAGTRAP_HPP
