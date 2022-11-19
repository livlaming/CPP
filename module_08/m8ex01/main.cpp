#include "Span.hpp"
#include <iostream>
#include <vector>

void testExample(){
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void limitationtest(){
    Span sp = Span(10002);
    Span sp1 = Span(0);

    int i = 1;
    try{
        while (i < 10004) {
            sp.addNumber(rand() % 1000);
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try{
        while (i < 10) {
            sp1.addNumber(rand() % 1000);
            i++;
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


}


int main()
{
    srand(time(NULL));
    testExample();
    limitationtest();

    Span sp = Span(10002);

    int i = 1;
    while (i < 10003){
        sp.addNumber(rand() % 1002 + 1);
        i++;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}