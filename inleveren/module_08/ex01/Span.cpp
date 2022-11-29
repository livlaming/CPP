#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N) : _N(N), _sorted(0){}

Span::Span(const Span &copy) : _N(copy._N), _vec(copy._vec), _sorted(copy._sorted) {}

Span &Span::operator=(const Span &copy){
    if (this != &copy){
        this->_vec = copy._vec;
        this->_N = copy._N;
        this->_sorted = copy._sorted;
    }
    return *this;
}

void    Span::addNumber(int Num){
    if (this->_vec.size() >= this->_N)
        throw std::exception();
    this->_vec.push_back(Num);
}

void    Span::addRange(int start, int range){
    while (start <= range){
        addNumber(start);
        start++;
    }
}

void    Span::addRange(int range){
    int i = 0;
    while (i <= range){
        addNumber(i);
        i++;
    }
}

unsigned int    Span::shortestSpan(){
    if (_vec.empty() || _N == 1){
        throw std::exception();
    }


    std::vector<int> tempVec = this->_vec;
    if (this->_sorted == 0){
        std::sort(tempVec.begin(), tempVec.end());
        this->_sorted = 1;
    }
    std::vector<int>::iterator it = tempVec.begin();
    std::vector<int>::iterator itNext = ++tempVec.begin();

    int shortest = *itNext - *it;
    while (itNext != tempVec.end())
    {
        if (*itNext - *it < shortest)
            shortest = *itNext - *it;
        it++;
        itNext++;
    }
    return (shortest);

}

unsigned int    Span::longestSpan(){
    if (_vec.empty() || _N == 1){
        throw std::exception();
    }

    std::vector<int> tempVec = this->_vec;

    if (this->_sorted == 0){
        std::sort(tempVec.begin(), tempVec.end());
        this->_sorted = 1;
    }
    return (tempVec.back()- tempVec.front());
}

Span::~Span(){}
