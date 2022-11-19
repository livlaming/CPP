#include "iter.hpp"

class customClass {
public:
    customClass() : s("customClass") {}
    std::string get() const { return s; }

private:
    std::string s;
};

std::ostream& operator<<(std::ostream& out, const customClass& example) {
    out << example.get();
    return out;
}


template <typename T>
void	customPrint(T const &x) { std::cout << x << std::endl; return ;}

int main(void){
    std::cout << std::endl << "TEST WITH STD::STRING" << std::endl;
    std::string s[] = {"hi", "hello", "hai", "hoi", "hallo"};

    ::iter<std::string>(s, 5, customPrint);


    std::cout << std::endl << "TEST WITH INT" << std::endl;
    int i[]  = {5, 56, 567, 5678};
    ::iter<int>(i, 4, customPrint<int>);


    std::cout << std::endl << "TEST WITH CLASS" << std::endl;
    customClass CC[10];
    ::iter<customClass>(CC, 10, customPrint);


    return (0);
}
