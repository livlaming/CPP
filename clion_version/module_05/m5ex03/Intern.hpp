//
// Created by Lisa Vlamings on 8/17/22.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &copy);
    Form *makeForm(std::string _form, std::string target);

    class FormDoesNotExist : public std::exception {
    public:
        virtual const char * what() const throw()
        {
            return ("Form does not exist");
        }
    };
};


#endif //CPP_INTERN_HPP
