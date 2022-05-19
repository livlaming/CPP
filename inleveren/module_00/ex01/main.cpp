//
// Created by Lisa Vlamings on 12/13/21.
//
#include "Phonebook.hpp"
#include "Contact.hpp"

int main( void ) {
    std::string input;
    Phonebook phonebook;

    while (true){
        std::cout << "\033[0m\nPlease enter your input (ADD, SEARCH or EXIT) : "<<  std::endl;
        std::getline(std::cin, input);
        if (input == "EXIT") {
            break;
        }
        else if (input == "ADD") {
            phonebook.AddContact();
        }
        else if (input == "SEARCH") {
            phonebook.DisplayContacts();
            phonebook.SearchContact();
        }
        else {
            std::cout << "\033[31m\nInvalid input please try again: "<<  std::endl;
        }
    }
    return (0);
}
