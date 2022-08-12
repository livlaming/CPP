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

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat a("B", 0);
        std::cout << a << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat c("C", 1);
        std::cout << c << std::endl;
        c.increment();
        std::cout << c << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat d("D", 100);
        std::cout << d << std::endl;
        d.increment();
        std::cout << d << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat e("E", 50);
        std::cout << e << std::endl;
        e.increment();
        std::cout << e << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat f("F", 100);
        std::cout << f << std::endl;
        f.decrement();
        std::cout << f << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat g("G", 50);
        std::cout << g << std::endl;
        g.decrement();
        std::cout << g << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

