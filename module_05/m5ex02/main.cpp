//
// Created by Lisa Vlamings on 8/10/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>

int main() {

//    std::cout << "\n----------------\n" << std::endl;
//    try {
//        Bureaucrat She("Lola", 5);
//        std::cout << She << std::endl;
//        Form College("Entrance programme X", 6, 6);
//        std::cout << College << std::endl;
//        She.signForm(College);
//        std::cout << std::endl;
//        std::cout << College << std::endl;
//    }
//    catch (std::exception &Exc) {
//        std::cout << Exc.what() << std::endl;
//    }
//    std::cout << "\n----------------\n" << std::endl;
//    try {
//        Bureaucrat He("George", 150);
//        std::cout << He << std::endl;
//        Form College2("Entrance programme Y", 5, 5);
//        std::cout << College2 << std::endl;
//        He.signForm(College2);
//        std::cout << College2 << std::endl;
//        std::cout << College2 << std::endl;
//    }
//    catch (std::exception &Exc) {
//        std::cout << Exc.what() << std::endl;
//    }
    std::string filename = "_shrubby.txt";
    std::ofstream outfile(filename);
//    if (outfile.is_open() == false)
//        std::cout << "error" << std::endl;
//    this->_target = target;
//
    // Write to the file
    outfile << "                  %%%,%%%%%%%\n"
               "                   ,'%% \\\\-*%%%%%%%\n"
               "             ;%%%%%*%   _%%%%\"\n"
               "              ,%%%       \\(_.*%%%%.\n"
               "              % *%%, ,%%%%*(    '\n"
               "            %^     ,*%%% )\\|,%%*%,_\n"
               "                 *%    \\/ #).-\"*%%*\n"
               "                     _.) ,/ *%,\n"
               "             _________/)#(_____________";
    // Close the file
    outfile.close();


//    system("leaks m5ex01");


    return 0;
}
