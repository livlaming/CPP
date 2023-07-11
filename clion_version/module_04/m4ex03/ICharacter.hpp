//
// Created by Lisa Vlamings on 8/10/22.
//

#ifndef CPP_ICHARACTER_HPP
#define CPP_ICHARACTER_HPP


class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP_ICHARACTER_HPP
