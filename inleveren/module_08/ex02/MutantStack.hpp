
#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP
#include <iostream>
#include <stack>

//template<
//        class T,
//        class Container = std::deque<T>
//> class stack;

template <typename T,typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
private:
    typedef std::stack<T> _stack_t;
public:
    MutantStack() : std::stack<T> (){}
    MutantStack(const MutantStack& from) : std::stack<T>(from) {}
    MutantStack &operator=(MutantStack const &copy){
        if (this != copy){
            this->_stack_t = copy._stack_t;
        }
        return *this;
    }

    ~MutantStack() {} //virtual?

    typedef typename Container::iterator iterator;
    typedef typename Container::reverse_iterator reverse_iterator;


    iterator begin(){
        return _stack_t::c.begin();
    }

    iterator end(){
        return _stack_t::c.end();
    }

    reverse_iterator rbegin(){
        return _stack_t::c.rbegin();
    }

    reverse_iterator rend(){
        return _stack_t::c.rend();
    }

};

#endif //CPP_MUTANTSTACK_HPP
