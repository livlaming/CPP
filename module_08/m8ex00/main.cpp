#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

void vector(){
    std::vector<int> 		   i_vector;
    std::vector<int>::iterator it;
    int              val;

    for (int i = 0; i < 13; i++)
        i_vector.push_back(i);

    std::cout << "-------------" << std::endl;
    std::cout << "VECTOR TESTS!" << std::endl;
    std::cout << "-------------" << std::endl;

    val = -1;
    it = easyfind(i_vector, val);
    if (it != i_vector.end()){
        std::cout << "Found " << val << " on index: " << std::distance(i_vector.begin(), it) << std::endl;
    }
    else {
        std::cout << val << " not found" << std::endl;
    }

    val = 3;
    it = easyfind(i_vector, val);
    if (it != i_vector.end()){
        std::cout << "Found " << val << " on index: " << std::distance(i_vector.begin(), it) << std::endl;
    } else {
        std::cout << val << " not found" << std::endl;
    }

    val = 27;
    it = easyfind(i_vector, val);
    if (it != i_vector.end()){
        std::cout << "Found " << val << " on index: " << std::distance(i_vector.begin(), it) << std::endl;
    } else {
        std::cout << val << " not found" << std::endl;
    }
}

void list(){
    std::list<int>			 i_list;
    std::list<int>::iterator it;
    int val;
    for (int i = 0; i < 20; i++)
        i_list.push_back(i);

    std::cout << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "LIST TESTS!" << std::endl;
    std::cout << "-------------" << std::endl;
    val = 25;
    it = easyfind(i_list, val);
    if (it != i_list.end()){
        std::cout << "Found " << val << " on index: " << std::distance(i_list.begin(), it) << std::endl;
    } else {
        std::cout << val << " not found" << std::endl;
    }

    val = 4;
    it = easyfind(i_list, val);
    if (it != i_list.end()){
        std::cout << "Found " << val << " on index: " << std::distance(i_list.begin(), it) << std::endl;
    } else {
        std::cout << val << " not found" << std::endl;
    }

    val = 7;
    it = easyfind(i_list, val);
    if (it != i_list.end()){
        std::cout << "Found " << val << " on index: " << std::distance(i_list.begin(), it) << std::endl;
    } else {
        std::cout << val << " not found" << std::endl;
    }
    std::cout << std::endl;
}

void l(){
    system("leaks ex00");
}

int main (void){
    atexit(l);
    vector();
    list();
    return (0);
}
