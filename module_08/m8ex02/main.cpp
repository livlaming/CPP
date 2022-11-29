
#include "MutantStack.hpp"
#include <iostream>
#include <list>

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

template <typename T>
void    printReverseStack(MutantStack<T> mstack) {
    typename MutantStack<T>::reverse_iterator it = mstack.rbegin();
    typename MutantStack<T>::reverse_iterator ite = mstack.rend();
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
    return;
}

void testReplacement(){
    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
//[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(mstack);
    return;
}

void testOne(){
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

void    reverseTest(){
    MutantStack<std::string> mstack2;
    mstack2.push("hi");
    mstack2.push("ha");
    mstack2.push("he");
    mstack2.push("ho");
    printReverseStack<std::string>(mstack2);
}

//If you run it a first time with your MutantStack, and a second time replacing the
//MutantStack with, for example, a std::list, the two outputs should be the same. Of
//        course, when testing another container, update the code below with the corresponding
//        member functions (push() can become push_back())

void    l(){
    system("leaks ex02");
}

int main(){
    atexit(l);
//    if (testExample() == testReplacement()){
//        std::cout << testExample() << std::endl;
//    };
    std::cout << "----------------------" << std::endl;
    std::cout << "EXAMPLE TEST" << std::endl;
    std::cout << "----------------------" << std::endl;
    testExample();
    std::cout << "----------------------" << std::endl;
    std::cout << "LIST TEST" << std::endl;
    std::cout << "----------------------" << std::endl;
    testReplacement();
    std::cout << "----------------------" << std::endl;
    std::cout << "LIST TEST ONE " << std::endl;
    std::cout << "----------------------" << std::endl;
    testOne();
    std::cout << "----------------------" << std::endl;
    std::cout << "LIST REVERSE TEST " << std::endl;
    std::cout << "----------------------" << std::endl;
    reverseTest();
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;
    return (0);
}
