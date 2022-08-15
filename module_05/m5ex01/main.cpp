//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat She("Lola", 5);
        Form College("Codam", 6, 6);
        She.signForm(College);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    try {
        Bureaucrat He("George", 7);
        Form College("Codam", 6, 6);
        He.signForm(College);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    return 0;
}
