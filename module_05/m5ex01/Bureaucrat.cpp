//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){};

Bureaucrat::Bureaucrat(const std::string Name, int grade) : _name(Name) {
    this->_grade = grade;
    if (this->_grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name) {
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
    std::cout << "Copy assignment operator Cat called" << std::endl;
    this->_grade = copy.getGrade();
    return (*this);
}

int Bureaucrat::getGrade() const{
    return(this->_grade);
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

void Bureaucrat::increment() {
    this->_grade -= 1;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement() {
    this->_grade += 1;
    if (this->_grade > 150 )
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &copy)
{
    out << copy.getName() <<", bureaucrat grade " << copy.getGrade() << "." << std::endl;
    return (out);
}

//void Bureaucrat::signForm(const Form &copy){
//    if (copy.getSign() == 1)
//        std::cout << copy.getName() << " signed " << this->getName() << std::endl;
//    else
//        std::cout << copy.getName() << " couldn't sign " << this->getName() << "because " << std::endl;
//}


Bureaucrat::~Bureaucrat() {

}