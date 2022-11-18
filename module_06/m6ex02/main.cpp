#include "Classes.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

Base::~Base(){}

Base * generate(void){
    int val = rand() % 3;
    switch (val){
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p){
    A *Aa = dynamic_cast<A*>(p);
    if (Aa != NULL){
        std::cout << 'A' << std::endl;
    }
    B *Bb = dynamic_cast<B*>(p);
    if (Bb != NULL){
        std::cout << 'B' << std::endl;
    }
    C *Cc= dynamic_cast<C*>(p);
    if (Cc != NULL){
        std::cout << 'C' << std::endl;
    }
}

void identify(Base& p){
    try {
        A &Aa = dynamic_cast<A &>(p);
        std::cout << 'A' << std::endl;

        B &Bb = dynamic_cast<B&>(p);
        std::cout << 'B' << std::endl;

        C &Cc= dynamic_cast<C&>(p);
        std::cout << 'C' << std::endl;
    }
    catch (std::exception& e) {}
}

//dynamic casting: by far the most common use for dynamic casting is for converting base-class pointers into derived-class pointers. This process is called downcasting.
int main(void){
    srand(time(NULL));
    A *Aa = new A;
    B Bb;
    C *Cc = new C;
    A AA;

    Base *res = generate();
    identify(res);
    identify(&(*res));
    identify(Cc);
    identify(Aa);
    identify(&Bb);
    identify(&AA);
    return (0);
}