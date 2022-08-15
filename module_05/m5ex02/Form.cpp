//
// Created by Lisa Vlamings on 8/12/22.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

virtual Form::Form() : _name(NULL), _grade_sign(0), _grade_exc(0), _signed(false){}

Form::Form(const std::string Name, const int GradeTS, const int GradeTE) : _name(Name), _grade_sign(GradeTS), _grade_exc(GradeTE), _signed(false){}

Form::Form(const Form &copy) : _name(copy.getName()), _grade_sign(copy.getGradeSign()), _grade_exc(copy.getGradeExc()) {
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

Form &Form::operator=(const Form &copy) {
    std::cout << "Copy assignment operator Cat called" << std::endl;
    this->_signed = copy.getSign();
    return (*this);
}

std::string Form::getName() const {
    return(this->_name);
}

int Form::getGradeSign() const {
    return(this->_grade_sign);
}

int Form::getGradeExc() const {
    return(this->_grade_exc);
}

bool Form::getSign() const{
    return(this->_signed);
}

std::ostream &operator<<(std::ostream &out, Form &copy)
{
    out << "Name: " <<  copy.getName() << std::endl;
    out << "Signed?: " << copy.getSign() << std::endl;
    out << "Grade to sign: " << copy.getGradeSign() << std::endl;
    out << "Grade to Execute: " << copy.getGradeExc() << std::endl;
    return (out);
}

void Form::beSigned(const Bureaucrat &copy){
    if (copy.getGrade() > this->_grade_sign)
        throw Form::GradeTooLowException();
    else if (copy.getGrade() < 1)
        throw Form::GradeTooHighException();
    else
        this->_signed = true;
}

Form::~Form(){}