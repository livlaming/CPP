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

    Form *x;
    x = someRandomIntern.makeForm("robotmy request", "Bender");

//    a = someRandomIntern.makeForm("robtomy request", "Bender");

}


