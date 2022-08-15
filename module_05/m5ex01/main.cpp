//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    std::cout << "\n----------------\n" << std::endl;
    try {
        Bureaucrat She("Lola", 5);
        std::cout << She << std::endl;
        Form College("Entrance programme X", 6, 6);
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
        Bureaucrat He("George", 7);
        Form College2("Entrance programme Y", 5, 5);
        He.signForm(College2);
        std::cout << College2 << std::endl;
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    system("leaks ex01");

    return 0;
}
