//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade) {
    if (grade < 1 )
        throw std::exception(radeTooLowException);
    else if (grade > 150)
        throw std::exception(GradeTooHighException);
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
        if (this->_grade < 1 )
            throw std::exception();
        else if (this->_grade > 150)
            throw std::exception();
    }
    catch (std::exception & e)
    {
        std::cout << this->_name <<", bureaucrat grade " << this->_grade << "." << std::endl;
    }
}

void Bureaucrat::decrement() {
    try {
        this->_grade -= 1;
        if (this->_grade < 1 )
            throw std::exception();
        else if (this->_grade > 150)
            throw std::exception();
    }
    catch (std::exception & e)
    {
        std::cout << this->_name <<", bureaucrat grade " << this->_grade << "." << std::endl;
    }

}

Bureaucrat::~Bureaucrat() {

}