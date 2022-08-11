//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"


int main() {
    try{
        Bureaucrat a("A", 155);
    }
    catch (Bureaucrat::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat a("B", 0);
        std::cout << a << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat a("C", 1);
    std::cout << a << std::endl;
    try{
        a.increment();
        std::cout << a << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}