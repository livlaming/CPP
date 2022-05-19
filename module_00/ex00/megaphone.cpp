#include <iostream>

char *ft_uppercase(char *str){
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        str[i]= toupper(str[i]);
    return (str);
}

int main(int argc, char** argv)  {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else {
        for (int i = 1;i < argc; ++i) {
            std::cout << ft_uppercase(argv[i]);
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}



//int main(int argc, char** argv)  {
//    int len = 0;
//    if (argc == 1) {
//        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
//    }
//    else {
//        for (int str = 1; str < argc; ++str) {
//            len = strlen(argv[str]);
//            for (int c = 0; c < len; c++)
//                argv[str][c] = toupper(argv[str][c]);
//            std::cout << argv[str];
//            std::cout << " ";
//        }
//    }
//    std::cout << std::endl;
//    return 0;
//}
