//
// Created by Lisa Vlamings on 8/9/22.
//

#ifndef CPP_AMATERIA_HPP
#define CPP_AMATERIA_HPP
#include <iostream>

class AMateria
{
protected:
    std::string _type;
    AMateria();
public:
    AMateria(std::string const & type);
    AMateria &operator=(const AMateria &copy);
    ~AMateria();

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //CPP_AMATERIA_HPP
