//
// Created by Lisa Vlamings on 8/15/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (this->getSign() == 1){
        std::cout << "some drillign noise" << std::endl;
        std::cout << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
        std::cout << "informs that the robotomy failed" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm() {}