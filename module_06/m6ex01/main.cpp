#include "Serialize.hpp"


void printData(Data *ptr){
    std::cout << "Data num: " << ptr->num << std::endl;
    std::cout << "Data str: "<< ptr->str << std::endl;
    std::cout << std::endl;
}


int main(void) {
    Data		*ptr = new Data;
    Data		*res;

    ptr->str = "string";
    ptr->num = 1;

    std::cout << "ORIGINAL POINTER: [" << ptr << "]\n" << std::endl;

    uintptr_t	raw = serialize(ptr);
    std::cout << "RAW BYTES: [" << raw << "]" << std::endl;
    printData(ptr);

    res = deserialize(raw);
    std::cout << "DESERIALIZED: [" << res << "]" << std::endl;
    printData(res);

    delete ptr;
    return 0;
}

