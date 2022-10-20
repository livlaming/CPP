//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &copy);

    void makeSound() const;
};



#endif //CPP_WRONGCAT_HPP
