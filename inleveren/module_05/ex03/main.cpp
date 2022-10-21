//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>
#include <fstream>


int main() {

    Intern someRandomIntern;
    Bureaucrat B("Lola", 30);
    Form *rrF;

    rrF = someRandomIntern.makeForm("robotomy request", "Bender");

    if (rrF != NULL)
    {
        std::cout << *rrF <<std::endl;
        B.signForm(*rrF);
        B.executeForm(*rrF);
    }
    std::cout << "-----------------" << std::endl;
    Form *x;
    Bureaucrat A("Simon", 10);
    x = someRandomIntern.makeForm("shrubbery creation", "Bender");

    if (x != NULL)
    {
        std::cout << *x <<std::endl;
        A.signForm(*x);
        A.executeForm(*x);
    }
    std::cout << "-----------------" << std::endl;
    Form *y;
    Bureaucrat X("Idio", 30);
    y = someRandomIntern.makeForm("sa", "Bender");

    if (y != NULL)
    {
        std::cout << *y <<std::endl;
        X.signForm(*y);
        X.executeForm(*y);
    }

}


