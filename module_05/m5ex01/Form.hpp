//
// Created by Lisa Vlamings on 8/12/22.
//

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP
#include <iostream>

class Bureaucrat;

class Form {
private:
    const std::string _name;
    bool _signed;
    const int _grade_sign;
    const int _grade_exc;
    Form();
public:

    Form(const std::string Name, const int GradeTS, const int GradeTE);
    ~Form();
    Form(const Form &copy);
    Form &operator=(const Form &copy);
    std::string getName() const;
    int getGradeSign() const;
    bool getSign() const;
    int getGradeExc() const;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char * what() const throw()
        {
            return ("grade is too high :(");
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char * what() const throw()
        {
            return ("grade is too low :(");
        }
    };

    void beSigned(const Bureaucrat &copy);

};


#endif //CPP_FORM_HPP
