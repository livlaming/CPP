//
// Created by Lisa Vlamings on 1/21/22.
//
#include "Contact.hpp"
#include <iostream>

Contact::Contact(void){}

const std::string &Contact::getFirstName() const {
    return _FirstName;
}

void Contact::setFirstName(void) {
    std::getline(std::cin, this->_FirstName);

}

const std::string &Contact::getLastName() const {
    return _LastName;
}

void Contact::setLastName(void) {
    std::getline(std::cin, this->_LastName);
}

const std::string &Contact::getNickName() const {
    return _NickName;
}

void Contact::setNickName(void) {
    std::getline(std::cin, this->_NickName);
}

const std::string &Contact::getPhoneNumber() const {
    return _PhoneNumber;
}

void Contact::setPhoneNumber(void) {
    std::getline(std::cin, this->_PhoneNumber);
}


const std::string &Contact::getDarkestSecret() const {
    return _DarkestSecret;
}

void Contact::setDarkestSecret(void) {
    std::getline(std::cin, this->_DarkestSecret);
}

Contact::~Contact(void){}
