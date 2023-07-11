//
// Created by Lisa Vlamings on 1/21/22.
//

// define functions in class
//phonebook::functie( void) {
//    functie bla;
//    return ;
//}

//#include "ContactClass.hpp"
#include "PhonebookClass.hpp"
#include "ContactClass.hpp"
#include <iostream>

ContactClass::ContactClass(void){}

const std::string &ContactClass::getFirstName() const {
    return _FirstName;
}

void ContactClass::setFirstName(void) {
    std::cin >> this->_FirstName;
}

const std::string &ContactClass::getLastName() const {
    return _LastName;
}

void ContactClass::setLastName(void) {
    std::cin >> this->_LastName;
}

const std::string &ContactClass::getNickName() const {
    return _NickName;
}

void ContactClass::setNickName(void) {
    std::cin >> this->_NickName;
}

const std::string &ContactClass::getPhoneNumber() const {
    return _PhoneNumber;
}

void ContactClass::setPhoneNumber(void) {
    std::cin >> this->_PhoneNumber;
}

const std::string &ContactClass::getDarkestSecret() const {
    return _DarkestSecret;
}

void ContactClass::setDarkestSecret(void) {
    std::cin >> this->_DarkestSecret;
}

ContactClass::~ContactClass(void){}



//
// Created by Lisa Vlamings on 1/24/22.
//

