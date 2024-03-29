#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    if (&copy != this)
        this->_target = copy._target;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (this->getSign() == 1 && executor.getGrade() <= this->getGradeExc()){
        std::cout << "----Some drillign noise----" << std::endl;
        std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
        throw RobotomyRequestForm::RobotomyFailed();

}

RobotomyRequestForm::~RobotomyRequestForm(){}
