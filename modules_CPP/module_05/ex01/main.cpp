#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    std::cout << "\n----------------\n" << std::endl;
    try {
        Bureaucrat She("Lola", 5);
        std::cout << She << std::endl;
        Form College("Entrance programme X", 5, 6);
        std::cout << College << std::endl;
        She.signForm(College);
        std::cout << std::endl;
        std::cout << College << std::endl;
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }
    std::cout << "\n----------------\n" << std::endl;
    try {
        Bureaucrat He("George", 150);
        std::cout << He << std::endl;
        Form College2("Entrance programme Y", 5, 20);
        std::cout << College2 << std::endl;
        He.signForm(College2);
        std::cout << College2 << std::endl;
        std::cout << College2 << std::endl;
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    std::cout << "\n----------------\n" << std::endl;
    try {
        Bureaucrat They("Mo", 1);
        std::cout << They << std::endl;
        Form College3("Entrance programme Z", 30, 5);
        std::cout << College3 << std::endl;
        They.signForm(College3);
        std::cout << std::endl;
        std::cout << College3 << std::endl;
        std::cout << College3 << std::endl;
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

//    system("leaks m5ex01");

    return 0;
}
