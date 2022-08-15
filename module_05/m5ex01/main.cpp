//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat She("Lola", 5);
        Form College("entrance programme X", 6, 6);
        She.signForm(College);
        std::cout << College << std::endl;

    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    try {
        Bureaucrat He("George", 7);
        Form College2("entrance programme Y", 5, 5);
        He.signForm(College2);
        std::cout << College2 << std::endl;
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }


    return 0;
}
