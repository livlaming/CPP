//
// Created by Lisa Vlamings on 12/13/21.
//
#ifndef	PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP
//#ifndef CPP__PHONEBOOK_CLASS_HPP
//#define CPP__PHONEBOOK_CLASS_HPP
#include <iostream>
#include <string>
#include "ContactClass.hpp"

class	PhonebookClass
{
    private:
        int             _NumOfContacts; //
        int             _index;
        ContactClass    contacts[8];  // array 8 contactclass instances
    public:
        PhonebookClass(void); //constructor
        ~PhonebookClass(void); //destructor
        void    AddContact(void);
        void    SearchContact(void);  //method functie gekoppeld in class -> static kan buiten de class worden aangeroepen?
        int     getNumOfContacts() const;
        void    setNumOfContacts(int numOfContacts);
        int     getIndex() const; // const?
        void    setIndex(int index);
        int     stoi(std::string str);
        bool    isNumber(std::string input);
        void	DisplayContacts(void);
        std::string convert(std::string str);
        const   ContactClass *getContacts() const;
};

#endif //CPP__PHONEBOOK_CLASS_HPP
