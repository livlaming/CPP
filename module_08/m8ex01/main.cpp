#include "Span.hpp"
#include <iostream>

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


int main()
{
    srand(time(NULL));
    testExample();
    Span sp = Span(10002);
    int i = 0;
    try{
        while (i < 10000){
            sp.addNumber(rand() % 10000);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

//    Span ps(10000);
//
//    std::vector<int> vec;
//
//    for (int i = 0; i < 10000; i++)
//    {
//        vec.push_back(i + 1);
//    }
//
//    ps.addNumber(vec.begin(), vec.end());
//    std::cout << sp.shortestSpan() <<std::endl;
//    std::cout << sp.longestSpan() << std::endl;


    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}