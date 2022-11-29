
#include "MutantStack.hpp"
#include <iostream>

template <typename T>
void    printStack(MutantStack<T> mstack) {
    typename MutantStack<T>::iterator it = mstack.begin();
    typename MutantStack<T>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
}
//Container adapters
void testExample(){
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
//    find function is cool
    return;
}

void ownExample(){
    MutantStack<int> mstack;

    std::cout << "empty? : " << mstack.empty() << std::endl;   //    Test whether container is empty (public member function)
    mstack.push(2);
    mstack.push(10);
    std::cout << "empty? : " <<  mstack.empty() << std::endl;   //    Test whether container is empty (public member function)
    std::cout << "----------------------" << std::endl;
    std::cout << "top : " << mstack.size() << std::endl; //    Return size (public member function)
    std::cout << "----------------------" << std::endl;
    std::cout << "size : " << mstack.top() << std::endl; //    Access next element (public member function)

    MutantStack<int> mstack2;
    mstack2.push(4);
    mstack2.push(20);

    std::cout << "print mstack2" << std::endl;
    printStack<int>(mstack2);
    mstack.swap(mstack2); //    Swap contents (public member function)
    std::cout << "----------------------" << std::endl;
    std::cout << "print mstack2 after swapping:" << std::endl;
    printStack<int>(mstack2);
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    mstack.pop(); //    Remove top element (public member function)
}

//If you run it a first time with your MutantStack, and a second time replacing the
//MutantStack with, for example, a std::list, the two outputs should be the same. Of
//        course, when testing another container, update the code below with the corresponding
//        member functions (push() can become push_back())

void    l(){
    system("leaks ex02");
}

int main(){
//    atexit(l);
//    testExample();
    ownExample();
    return (0);
}
