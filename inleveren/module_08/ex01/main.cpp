#include "Span.hpp"
#include <iostream>
#include <vector>

void testExample(){
    std::cout << "-------------" << std::endl;
    std::cout << "EXAMPLE TEST" << std::endl;
    std::cout << "-------------" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;
}

void limitationtest(){
    std::cout << "-------------" << std::endl;
    std::cout << "LIMITATION TEST" << std::endl;
    std::cout << "-------------" << std::endl;
    Span sp = Span(10002);
    Span sp1 = Span(0);

    int num = 10004;
    try{
        sp.addRange(num);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " " << num << " = out of range" << '\n';
    }

    num = 10;
    try{
        sp1.addRange(num);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " " <<  num << " = out of range" << '\n';
    }
    std::cout << std::endl;
}

void randomNumberTests(){
    Span sp = Span(10002);

    int i = 1;
    while (i < 10003){
        sp.addNumber(rand() % 1002 + 1);
        i++;
    }
    std::cout << "-------------" << std::endl;
    std::cout << "RANDOM NUM TEST" << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " <<sp.longestSpan() << std::endl;
    std::cout << std::endl;
    Span sp1 = Span(20002);
    try{
        sp1.addRange(5, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " " <<  "5, 10" << " = out of range" << '\n';
    }
    std::cout << "shortest span: " << sp1.shortestSpan() << std::endl;
    std::cout << "longest span: " <<sp1.longestSpan() << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << std::endl;
}

void l(){
    system("leaks ex01");
}

int main()
{
    atexit(l);
    srand(time(NULL));
    testExample();
    limitationtest();
    randomNumberTests();
    return 0;
}
