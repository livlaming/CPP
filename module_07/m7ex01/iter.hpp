#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *Array, size_t len, void (*f)(T&))
{
    if (Array == NULL){
        return;
    }
    for (size_t i = 0; i < len; i++) {
        f(Array[i]);
    }
}

template <typename T>
void	iter(T const *Array, size_t len, void (*f)(const T&))
{
    if (Array == NULL){
        return;
    }
    for (size_t i = 0; i < len; i++) {
        f(Array[i]);
    }
}


#endif //CPP_ITER_HPP
