#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int n) {
    typename T::iterator    it;

    it = find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::exception();
    return it;
}

#endif //CPP_EASYFIND_HPP
