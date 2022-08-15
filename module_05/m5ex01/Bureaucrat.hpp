//
// Created by Lisa Vlamings on 8/10/22.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
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
    void signForm(Form &copy);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &copy);



#endif //CPP_BUREAUCRAT_HPP
