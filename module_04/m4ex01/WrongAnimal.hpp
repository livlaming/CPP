//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
    std::string _type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &copy);
    std::string getType() const;

    void makeSound() const ;
};

#endif //CPP_WRONGANIMAL_HPP
