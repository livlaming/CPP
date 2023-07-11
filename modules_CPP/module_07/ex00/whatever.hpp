#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
    T z(x);
    x = y;
    y = z;
}

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>
T min(T x, T y)
{
    return (x < y) ? x : y;
}

#endif //CPP_WHATEVER_HPP




// Function templates are special functions that can operate with generic types.
// This allows us to create a function template whose functionality can be adapted
// to more than one type or class without repeating the entire code for each type.
