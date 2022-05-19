//
// Created by Lisa Vlamings on 1/24/22.
//
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook(void){
    this->_index = 0;
    this->_NumOfContacts = 0;
}

void	Phonebook::AddContact(void) {
    std::cout << "What is your first name?: "<<  std::endl;
    this->_contacts[this->_index].setFirstName();
    std::cout << "What is your last name?: "<<  std::endl;
    this->_contacts[this->_index].setLastName();
    std::cout << "What is your nickname?: "<<  std::endl;
    this->_contacts[this->_index].setNickName();
    std::cout << "What is your phone number?: "<<  std::endl;
    this->_contacts[this->_index].setPhoneNumber();
    std::cout << "What is your darkest secret?: "<<  std::endl;
    this->_contacts[this->_index].setDarkestSecret();
    if (this->_index != 7)
        this->_index++;
    else
        (this->_index = 0);
    if (this->_NumOfContacts < 8)
        _NumOfContacts++;
}

int Phonebook::getNumOfContacts() const {
    return _NumOfContacts;
}

void Phonebook::setNumOfContacts(int numOfContacts) {
    _NumOfContacts = numOfContacts;
}

int Phonebook::getIndex() const {
    return _index;
}

void Phonebook::setIndex(int index) {
    _index = index;
}

const Contact *Phonebook::getContacts() const {
    return _contacts;
}

bool    Phonebook::isNumber(std::string input)
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

int     Phonebook::stoi(std::string str){
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

std::string Phonebook::convert(std::string str)
{
    if (str.length() > 10)
        str[9] = '.';
    return(str.substr(0,10));
}

void    Phonebook::DisplayContacts(void){
    int i = 0;

    if (getNumOfContacts() == 0){
        std::cout << "\033[1;31mThere are no contacts in this Phonebook, first add a contact (ADD)\033[0m"<<  std::endl;
        return;
    }
    std::cout << std::endl;
    std::cout << std::left << std::setfill(' ')
              << std::setw(10) << "\033[33mINDEX     " << "|"
              << std::setw(10) << "FIRST NAME" << "|"
              << std::setw(10) << "LAST NAME " << "|"
              << std::setw(10) << "NICKNAME  " << '\n';
    while (i < getNumOfContacts())
    {
        std::cout << std::left << std::setfill(' ')
        << std::setw(10) << i + 1 << "|"
        << std::setw(10) << convert(this->_contacts[i].getFirstName()) << "|"
        << std::setw(10) << convert(this->_contacts[i].getLastName()) << "|"
        << std::setw(10) << convert(this->_contacts[i].getNickName()) <<  std::endl;
        i++;
    }
}

void	Phonebook::SearchContact(void) {
    int index_request = 0;
    std::string string_request;

    if (getNumOfContacts() == 0)
        return;

    std::cout << "\033[0m\nWhat contact would you like to see?: "<<  std::endl;
    while (1)
    {
        std::getline(std::cin, string_request);
        if (isNumber(string_request) == true) {
            index_request = stoi(string_request);
            if (index_request - 1 >= 0 && index_request - 1 < getNumOfContacts())
                break;
        }
        std::cout << "\033[1;31m\nIndex doesn't exist;\n\033[0mPlease try again: \033[0m"<<  std::endl;
    }
    if (getNumOfContacts() != 0){
        std::cout << "\033[33m\nFirst name     : " << this->_contacts[index_request - 1].getFirstName() <<  std::endl;
        std::cout << "Last  name     : " << this->_contacts[index_request - 1].getLastName() <<  std::endl;
        std::cout << "Nickname       : " << this->_contacts[index_request - 1].getNickName() <<  std::endl;
        std::cout << "Phone Number   : " << this->_contacts[index_request - 1].getPhoneNumber() <<  std::endl;
        std::cout << "Darkest Secret : " << this->_contacts[index_request - 1].getDarkestSecret() <<  std::endl;
    }
}

Phonebook::~Phonebook(void){}
