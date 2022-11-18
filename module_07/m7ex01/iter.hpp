#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

#include <iostream>
template <typename T, typename F>
void iter(T *A, size_t len, void(*f)(F&))
{
    for(int i;i<len;len++){
        f(A[i]);
    }
}

#endif //CPP_ITER_HPP
