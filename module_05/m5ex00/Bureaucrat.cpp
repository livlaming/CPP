//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(){};

Bureaucrat::Bureaucrat(const std::string Name, int grade) : _name(Name) {
    this->_grade = grade;
    if (this->_grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getGrade() {
    return(this->_grade);
}

std::string Bureaucrat::getName() {
    return (this->_name);
}

void Bureaucrat::increment() {
    this->_grade -= 1;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrement() {
    this->_grade += 1;
    if (this->_grade < 1 )
        throw Bureaucrat::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &copy)
{
    out << copy.getName() <<", bureaucrat grade " << copy.getGrade() << "." << std::endl;
    return (out);
}

Bureaucrat::~Bureaucrat() {

}