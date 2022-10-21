//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"


int main() {
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat z("Zina", 155);
        std::cout << z << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat a("Anna", 140);
        std::cout << a << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat b("Bommel", 0);
        std::cout << b << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat c("Christiaan", 1);
        std::cout << c << std::endl;
        c.increment();
        std::cout << c << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat d("Dorus", 100);
        std::cout << d << std::endl;
        d.increment();
        std::cout << d << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try{
        Bureaucrat e("Egel", 50);
        std::cout << e << std::endl;
        e.increment();
        std::cout << e << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat f("Flip", 100);
        std::cout << f << std::endl;
        f.decrement();
        std::cout << f << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try{
        Bureaucrat g("Gigi", 50);
        std::cout << g << std::endl;
        g.decrement();
        std::cout << g << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    return 0;
}

