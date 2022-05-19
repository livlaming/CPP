//
// Created by Lisa Vlamings on 2/24/22.
//

#ifndef CPP__KAREN_HPP
#define CPP__KAREN_HPP

#include <string>

class Karen {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen(void);
        ~Karen(void);
        void    complain( std::string level );
};

#endif //CPP__KAREN_HPP
