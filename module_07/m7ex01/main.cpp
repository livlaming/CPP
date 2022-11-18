#include "iter.hpp"
#include <iostream>

template <typename T>
void costumPrint(T const &x) {
    std::cout << x << std::endl;
}

int	main()
{
    int	tab[] = { 0, 1, 2, 3, 4 };
//    float       f[] = {1,1.0, 3.4,7.7};
//    std::string s[] = {"hi", "hello", "hai", "hoi", "hallo"};

    size_t five = 5;
    ::iter(tab, 5, costumPrint);
//    ::iter(f, five, costumePrint);
//    ::iter(s, 5, costumePrint);
//    ::iter(f, 5, costumePrint);

    return (0);
}


