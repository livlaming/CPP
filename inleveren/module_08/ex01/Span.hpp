#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP
#include <iostream>
#include <exception>
#include <iterator>
#include <vector>

class Span {
private:
    unsigned int        _N; // max variables
    std::vector<int>	_vec;
    bool                _sorted;
    Span();

public:
    Span(unsigned int N);
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &copy);

    void            addNumber(int Num);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();
    void            addRange(int start, int range);
    void            addRange(int range);

};
//<<ostream

#endif //CPP_SPAN_HPP
