//
// Created by lisa vlamings on 15/02/2022.
//
//REFERENCE:
//A reference variable is an alias, that is, another name for an already existing variable.

//REFERENCES vs POINTERS:
//+ You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.

//+ Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.

//+ A reference must be initialized when it is created. Pointers can be initialized at any time.

#include <iostream>

int     main( void){
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "The memory address of the string variable: " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable:  " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    return (0);
}

