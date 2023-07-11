//
// Created by Lisa Vlamings on 1/24/22.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

PhonebookClass::PhonebookClass(void){    // implementatie class
    this->_index = 0;
    this->_NumOfContacts = 0;
}

void	PhonebookClass::AddContact(void) {
    std::cout << "What is your first name?: "<<  std::endl;
    this->contacts[this->_index].setFirstName();
    std::cout << "What is your last name?: "<<  std::endl;
    this->contacts[this->_index].setLastName();
    std::cout << "What is your nickname?: "<<  std::endl;
    this->contacts[this->_index].setNickName();
    std::cout << "What is your phone number?: "<<  std::endl;
    this->contacts[this->_index].setPhoneNumber();
    std::cout << "What is your darkest secret?: "<<  std::endl;
    this->contacts[this->_index].setDarkestSecret();
    if (this->_index != 7)
        this->_index++;
    else
        (this->_index = 0);
    if (this->_NumOfContacts < 8)
        _NumOfContacts++;
}

int PhonebookClass::getNumOfContacts() const {
    return _NumOfContacts;
}

void PhonebookClass::setNumOfContacts(int numOfContacts) {
    _NumOfContacts = numOfContacts;
}

int PhonebookClass::getIndex() const {
    return _index;
}

void PhonebookClass::setIndex(int index) {
    PhonebookClass::_index = index;
}

const ContactClass *PhonebookClass::getContacts() const {
    return contacts;
}

bool    PhonebookClass::isNumber(std::string input)
{
    int i = 0;
    while (input[i]){
        if (isdigit(input[i]) == false)
            return (false);
        else
            i++;
    }
    return (true);
}

int     PhonebookClass::stoi(std::string str){
    int i = 0;
    int sign = 1;
    int num = 0;

    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9'){
        num = num * 10 + (str[i] - 48);
        i++;
    }
    num *= sign;
    return (num );
}

std::string PhonebookClass::convert(std::string str)
{
    if (str.length() > 10)
        str[9] = '.';
    return(str.substr(0,10));
}

void    PhonebookClass::DisplayContacts(void){
    int i = 0;

    if (getNumOfContacts() == 0){
        std::cout << "\033[1;31mThere are no contacts in this Phonebook, first add a contact (ADD)\033[0m"<<  std::endl;
        return;
    }
    std::cout << std::left << std::setfill(' ') << "\n"
              << std::setw(10) << "\033[33mINDEX" << "|"
              << std::setw(10) << "FIRST NAME" << "|"
              << std::setw(10) << "LAST NAME" << "|"
              << std::setw(10) << "NICK NAME" << '\n';
    while (i < getNumOfContacts())
    {
        std::cout << std::left << std::setfill(' ')
        << std::setw(10) << i << "|"
        << std::setw(10) << convert(this->contacts[i].getFirstName()) << "|"
        << std::setw(10) << convert(this->contacts[i].getLastName()) << "|"
        << std::setw(10) << convert(this->contacts[i].getNickName()) <<  std::endl;
        i++;
    }
}

void	PhonebookClass::SearchContact(void) {
    int index_request = 0;
    std::string string_request;

    if (getNumOfContacts() == 0)
        return;

    std::cout << "\033[0m\nWhat contact would you like to see?: "<<  std::endl;
    while (1)
    {
        std::cin >> string_request;
        if (isNumber(string_request) == true) {
            index_request = stoi(string_request);
            if (index_request >= 0 && index_request < getNumOfContacts())
                break;
        }
//        "\033[1;31mThere are no contacts in this Phonebook, first add a contact (ADD)\033[0m"
        std::cout << "\033[1;31m\nIndex doesn't exist;\n\033[0mPlease try again: \033[0m"<<  std::endl;
    }
    if (getNumOfContacts() != 0){
        std::cout << "\033[33m\nFirst name    : " << this->contacts[index_request].getFirstName() <<  std::endl;
        std::cout << "Last  name    : " << this->contacts[index_request].getLastName() <<  std::endl;
        std::cout << "Nick  name    : " << this->contacts[index_request].getNickName() <<  std::endl;
        std::cout << "Phone Number  : " << this->contacts[index_request].getPhoneNumber() <<  std::endl;
        std::cout << "Darkest Secret: " << this->contacts[index_request].getDarkestSecret() <<  std::endl;
    }
}

PhonebookClass::~PhonebookClass(void){}
