#ifndef CPP_SERIALIZE_HPP
#define CPP_SERIALIZE_HPP

#include <iostream>

struct Data{
    std::string str;
    int         num;
};

uintptr_t   serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif //CPP_SERIALIZE_HPP
