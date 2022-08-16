//
// Created by Lisa Vlamings on 8/15/22.
//

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (this->getSign() == 1)
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
        std::cout << this->getTarget() << " has NOT been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}