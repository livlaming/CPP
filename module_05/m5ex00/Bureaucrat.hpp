//
// Created by Lisa Vlamings on 8/10/22.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP
#include <iostream>


class Bureaucrat {
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void increment();
    void decrement();
};


#endif //CPP_BUREAUCRAT_HPP
