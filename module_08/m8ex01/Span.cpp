#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N) : _N(N){}

Span::Span(const Span &copy) : _N(copy._N), _vec(copy._vec) {}

Span &Span::operator=(const Span &copy){
    if (this != &copy){
        this->_vec = copy._vec;
        this->_N = copy._N;
    }
    return *this;
}

void    Span::addNumber(int Num){
    if (this->_vec.size() >= this->_N)
        throw std::exception();
    this->_vec.push_back(Num);
}

unsigned int    Span::shortestSpan(){
    if (_vec.empty() || _N == 1)
        throw std::exception();

    std::vector<int> tempVec = this->_vec;
    std::sort(tempVec.begin(), tempVec.end()); //

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
    std::cout <<  std::endl;
    return (shortest);

}

unsigned int    Span::longestSpan(){
    if (_vec.empty() || _N == 1)
        throw std::exception();
    std::vector<int> tempVec = this->_vec;

    std::sort(tempVec.begin(), tempVec.end());
    return (tempVec.back()- tempVec.front());
}


Span::~Span(){}
