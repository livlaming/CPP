#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

void vector(){
    std::vector<int>	i_vector;
    int	val;

    for (int i = 0; i < 13; i++)
        i_vector.push_back(i);
    val = -1;
    easyfind(i_vector, val);
    val = 3;
    easyfind(i_vector, val);
}

void list(){
    std::list<int>		i_list;
    int val;
    for (int i = 0; i < 20; i++)
        i_list.push_back(i);
    val = 25;
    easyfind(i_list, val);
    val = 4;
    easyfind(i_list, val);
    val = 7;
    easyfind(i_list, val);
}

int main (void){
    try
    {
        vector();
        list();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);

}