//
// Created by Lisa Vlamings on 8/17/22.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy) { *this = copy; }

Intern &Intern::operator=(const Intern &copy) {
    (void)copy;
    return(*this);
}

Form *Intern::makeForm(std::string form, std::string target) {
    int index;              //within for loop index exists solely within the brackets{}
    std::string forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};


    for (index = 0; index < 3; index++) {
        if (forms[index].compare(form) == 0)
            break;
    }
    switch (index) {
        default:
            std::cout << "Form does not exist: " << form << std::endl;
            break;
        case 0:
            std::cout << "Intern creates " << form << std::endl;
            return (new RobotomyRequestForm(target));
        case 1:
            std::cout << "Intern creates " << form << std::endl;
            return (new ShrubberyCreationForm(target));
        case 2:
            std::cout << "Intern creates " << form << std::endl;
            return (new PresidentialPardonForm(target));
    }
    std::cout << "Intern couldn't create " << form << std::endl;
    return(NULL);
}

Intern::~Intern(){}

