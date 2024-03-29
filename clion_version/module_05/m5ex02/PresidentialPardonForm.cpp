//
// Created by Lisa Vlamings on 8/15/22.
//

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    if (&copy != this)
        this->_target = copy._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (this->getSign() == 1 && executor.getGrade() <= this->getGradeExc())
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
        throw PresidentialPardonForm::ImpossibleToSign();
}

PresidentialPardonForm::~PresidentialPardonForm(){}
