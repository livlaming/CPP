//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat Her("Lola", 5);
        Form College("Codam", 6, 6);
//        Her.SignForm(college);
    }
    catch (std::exception &Exc) {
        std::cout << Exc.what() << std::endl;
    }

    return 0;
}
