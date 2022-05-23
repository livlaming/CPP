//
// Created by Lisa Vlamings on 5/23/22.
//

#ifndef CPP_HARL_HPP
#define CPP_HARL_HPP
#include <iostream>

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl(void);
    ~Harl(void);
    void complain( std::string level );
};


#endif //CPP_HARL_HPP
