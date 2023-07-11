#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750U
void tests(){
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    try{
        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
//    SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try {
        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
    }    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;//
}

void simple_array_test(){
    // Assign new array with bigger size
    Array<std::string> string = Array<std::string>(1);
    try{
        string[0] = "HAAI";
        std::cout << "well done! " << string[0] << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << "bad indexing" << std::endl;
    }
    std::string B = "BAAI";
    try{
        string[1] = B;
        std::cout << string[1] << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << " " << B <<  " bad indexing" << std::endl;
    }

    Array<std::string> empty;
    try {
        empty[0] = "abcd";
    } catch (const std::exception& e) {
        std::cout << e.what() << " empty" << std::endl;
    }
}

void l(){
    system("leaks ex02");
}

int main(void)
{
    l();
    atexit(l);
    tests();
    simple_array_test();
    return 0;
}
