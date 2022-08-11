//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){};

Bureaucrat::Bureaucrat(int grade) {
    if (grade < 1 )
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

int Bureaucrat::getGrade() {
    return(this->_grade);
}

std::string Bureaucrat::getName() {
    return (this->_name);
}


void Bureaucrat::increment() {
    try {
        this->_grade += 1;
        if (this->_grade > 150)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << this->_name <<", bureaucrat grade " << this->_grade << "." << std::endl;
    }
}

void Bureaucrat::decrement() {
    try {
        this->_grade -= 1;
        if (this->_grade < 1 )
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << this->_name <<", bureaucrat grade " << this->_grade << "." << std::endl;
    }

}

Bureaucrat::~Bureaucrat() {

}