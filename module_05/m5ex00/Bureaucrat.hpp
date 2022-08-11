//
// Created by Lisa Vlamings on 8/10/22.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat {
private:
    const std::string _name = "constant";
    int _grade;
    Bureaucrat();
public:
    Bureaucrat(int);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void increment();
    void decrement();
    class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw()
            {
                return ("GradeTooHighException");
            }
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw()
            {
                return ("GradeTooLowException");
            }
    };

};


#endif //CPP_BUREAUCRAT_HPP
