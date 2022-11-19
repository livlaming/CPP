
#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP
#include <iostream>
#include <stack>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
private:
typedef std::stack<T> stack_t;
public:
    MutantStack() : std::stack<T> () {}
    MutantStack(const MutantStack& from)
            : std::stack<T>(from) {}
    virtual ~MutantStack() {}

};

#endif //CPP_MUTANTSTACK_HPP
