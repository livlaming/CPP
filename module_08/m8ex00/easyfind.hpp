#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int n) {
    return std::find(container.begin(), container.end(), n);
}

#endif //CPP_EASYFIND_HPP
