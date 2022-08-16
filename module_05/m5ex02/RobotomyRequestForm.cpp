//
// Created by Lisa Vlamings on 8/15/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
    std::cout << "some drillign noise" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
//    this->_target = copy.getTarget();
    return (*this);
}

//std::string getTarget()
//    return (this->_target);

RobotomyRequestForm::~RobotomyRequestForm() {}