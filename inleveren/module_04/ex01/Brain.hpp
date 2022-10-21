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

#endif
