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
        A &Aa = dynamic_cast<A&>(p);
        std::cout << 'A' << std::endl;
        (void)Aa;
    }
    catch (std::exception& e) {}

    try {
        B &Bb = dynamic_cast<B&>(p);
        std::cout << 'B' << std::endl;
        (void)Bb;
    }
    catch (std::exception& e) {}

    try {
        C &Cc= dynamic_cast<C&>(p);
        std::cout << 'C' << std::endl;
        (void)Cc;
    }
    catch (std::exception& e) {}
}

// dynamic casting: by far the most common use for dynamic casting
// is for converting base-class pointers into derived-class pointers.
// This process is called downcasting.
int main(void) {
    srand(time(NULL));

    A    *Aa = new A;
    B     Bb;
    C    *Cc = new C;

    A     AA;

    Base *Base_A = new A;
    Base *Base_B = new B;
    Base *Base_C = new C;


    std::cout << "generate random class & identify 3x: " << std::endl;
    Base *res = generate();
    identify(res);
    identify(*res);
    res = generate();
    identify(res);
    identify(*res);
    res = generate();
    identify(res);
    identify(*res);

    std::cout << "\nABC as pointer: " << std::endl;
    identify(Aa);
    identify(&Bb);
    identify(Cc);

    std::cout << "\nABC as reference: " << std::endl;
    identify(*Aa);
    identify(Bb);
    identify(*Cc);

    std::cout << "\nBASE TESTS (as pointer):" << std::endl;
    identify(Base_A);
    identify(Base_B);
    identify(Base_C);

    std::cout << "BASE TESTS (as reference):" << std::endl;
    identify(*Base_A);
    identify(*Base_B);
    identify(*Base_C);
    std::cout << std::endl;

    return (0);
}
