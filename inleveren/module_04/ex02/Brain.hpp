//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP
#include <iostream>

class Brain {
public:
    std::string ideas[100];
    Brain();
    ~Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
};


#endif //CPP_BRAIN_HPP
