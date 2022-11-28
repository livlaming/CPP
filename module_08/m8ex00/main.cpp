#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

// clang-format off

void vector(){
    std::vector<int> 		   i_vector;
    std::vector<int>::iterator it;
    int              val;

    for (int i = 0; i < 13; i++)
        i_vector.push_back(i);

    val = -1;
    try {
        it = easyfind(i_vector, val);
        std::cout << "Found " << val << " on index: " << std::distance(i_vector.begin(), it) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    val = 3;
    try {
        it = easyfind(i_vector, val);
        std::cout << "Found " << val << " on index: " << std::distance(i_vector.begin(), it) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}

void list(){
    std::list<int>			 i_list;
    std::list<int>::iterator it;
    int val;
    for (int i = 0; i < 20; i++)
        i_list.push_back(i);

    val = 25;
    try {
        it = easyfind(i_list, val);
        std::cout << "Found " << val << " on index: " << std::distance(i_list.begin(), it) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    val = 4;
    try {
        it = easyfind(i_list, val);
        std::cout << "Found " << val << " on index: " << std::distance(i_list.begin(), it) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    val = 7;
    try {
        it = easyfind(i_list, val);
        std::cout << "Found " << val << " on index: " << std::distance(i_list.begin(), it) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}

int main (void){
    vector();
    list();
    return (0);
}



//#include <iostream>
//#include <vector>
//#include <list>
//#include "easyfind.hpp"
//
//void vector(){
//    std::vector<int>	i_vector;
//    int	val;
//
//    for (int i = 0; i < 13; i++)
//        i_vector.push_back(i);
//    val = -1;
//    easyfind(i_vector, val);
//        std::cout << "HALLOO\n";
//    val = 3;
//    easyfind(i_vector, val);
//}
//
//void list(){
//    std::list<int>		i_list;
//    int val;
//    for (int i = 0; i < 20; i++)
//        i_list.push_back(i);
//    val = 25;
//    easyfind(i_list, val);
//    val = 4;
//    easyfind(i_list, val);
//    val = 7;
//    easyfind(i_list, val);
//}
//
//int main (void){
//    try
//    {
//        vector();
//        list();
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    return (0);
//}
