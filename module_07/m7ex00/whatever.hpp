#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP

#include <iostream>
template <typename T> // this is the template parameter declaration
void swap(T &x, T &y) // this is the function template definition for max<T>
{
    T z(x);
    x = y;
    y = z;
//    T z = x;
//    x = y;
//    y = z;
}

template <typename T> // this is the template parameter declaration
T max(T x, T y) // this is the function template definition for max<T>
{
    return (x > y) ? x : y;
}

template <typename T> // this is the template parameter declaration
T min(T x, T y) // this is the function template definition for max<T>
{
    return (x < y) ? x : y;
}



#endif //CPP_WHATEVER_HPP
