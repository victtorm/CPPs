#include "Array.hpp"

template <typename T>

Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>

Array<T>::~Array()
{
        delete[] _array;
}

template <typename T>

Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

template <typename T>

Array<T>::Array(const Array &original) : _array(new T[original._size], _size(original._size))
{
    unsigned int i = 0;

    while (i < original._size)
    {
        _array[i] = original._array[i];
        i++;
    }
}

template <typename T>

Array<T>& Array<T>::operator=(const Array &original)
{
    unsigned int i = 0;

    if (this != &original)
    {
        delete[] _array;
        _size = original._size;
        _array = new T [original._size];
        while (i < original._size)
        {
            _array[i] = original._array[i];
            i++;
        }
    }
    return (*this);
}

template <typename T>
 
unsigned int Array<T>::size() const 
{
    return (_size);
}

template <typename T>

T&  Array<T>::operator[](unsigned int i) const
{
    if (i > _size)
        throw Array::out();
    return (_array[i]);
}