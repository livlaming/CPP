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

    Bureaucrat a("C", 10);
    std::cout << a << std::endl;

    return 0;
}