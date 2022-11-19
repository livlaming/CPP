//
// Created by lisa vlamings on 19/11/2022.
//

//void test2(){
//    Span				sp = Span(10001);
//    std::vector<int>	i_vec(10000);
//
//    std::cout << "\naddNumber with iterators:" << std::endl;
//    srand(time(NULL));
//    std::generate(i_vec.begin(), i_vec.end(), rand() % 1000);
//    std::cout << "Last generated number: " << i_vec.at(9999) << std::endl;
//    try {
//        sp.addNumber(i_vec.begin(), i_vec.end());
//        sp.addNumber(42);
//        std::cout << "Last 5 elements of sp: " << std::endl;
////        sp.printElements(9996, 5);
//    }
//    catch (std::exception const &e) {
//        std::cerr << "Limit reached. Cannot add more elements" << std::endl;
//    }
//}

//{
//Span sp(10000);
//
//std::vector<int> vec;
//
//for (int i = 0; i < 10000; i++)
//{
//vec.push_back(i + 1);
//}
//
//sp.addNumber(vec.begin(), vec.end());
//std::cout << sp.shortestSpan() <<std::endl;
//std::cout << sp.longestSpan() << std::endl;
//}