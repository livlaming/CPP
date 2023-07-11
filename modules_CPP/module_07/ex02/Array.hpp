#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP
#include <exception>

template<typename T>
class Array{
private:
    T               *_array;
    unsigned int    _n;
public:
    Array() : _array(NULL), _n(0){};

    Array(unsigned int n) : _array(new T[n]), _n(n){};

    Array(const Array &copy){
        if (this != &copy){
            this->_n = copy._n;
            this->_array = new T[copy._n];
            for (unsigned int i = 0; i < _n; i++) {
                this->_array[i] = copy._array[i];
            }
        }
    };

    Array &operator=(const Array &copy){
        if (this != &copy){
            if (this->_array) {
                delete[] this->_array;
                this->_array = NULL;
            }
            this->_n = copy._n;
            this->_array = new T[copy._n];
            for (unsigned int i = 0; i < this->_n; i++) {
                this->_array[i] = copy._array[i];
            }
        }
        return *this;
    };

    T &operator[](size_t index){
        if (index >= this->_n){
            throw std::exception();
        }
        return this->_array[index];
    }

    T const &operator[](size_t index) const{
        if (index >= this->_n){
            throw std::exception();
        }
        return this->_array[index];
    }

    unsigned int size() const { return _n;}

    ~Array(){
        if (this->_array){
            delete [] this->_array;
            this->_array = NULL;
        }
    };
};
#endif //CPP_ARRAY_HPP
