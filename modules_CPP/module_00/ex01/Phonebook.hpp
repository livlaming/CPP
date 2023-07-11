//
// Created by Lisa Vlamings on 12/13/21.
//
#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"

class	Phonebook
{
    private:
        int             _NumOfContacts;
        int             _index;
        Contact         _contacts[8];
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    AddContact(void);
        void    SearchContact(void);
        int     getNumOfContacts() const;
        void    setNumOfContacts(int numOfContacts);
        int     getIndex() const;
        void    setIndex(int index);
        int     stoi(std::string str);
        bool    isNumber(std::string input);
        void	DisplayContacts(void);
        std::string convert(std::string str);
        const   Contact *getContacts() const;
};

#endif //CPP__PHONEBOOK_CLASS_HPP
