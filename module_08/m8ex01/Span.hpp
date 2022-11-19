#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP


class Span {
private:
    unsigned int _N; // max variables
    Span();

public:
    Span(unsigned int N);
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &copy);

    void    addNumber();
    void    shortestSpan();
    void    longestSpan();
};
//<<ostream

#endif //CPP_SPAN_HPP
