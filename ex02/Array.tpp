#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    array = new T[0];
    s = 0;
    return ;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    array = new T[n];
    s = n;
    return ;
}

template <typename T> Array<T>::Array(Array const &a)
{
    array = new T[a.size()];
    s = a.size();
    for (unsigned int i = 0; i < s; i++)
        array[i] = a.array[i];
    return ;
}

template <typename T> Array<T>::~Array()
{
    delete [] array;
    return ;
}

template <typename T> Array<T> & Array<T>::operator=(Array const &a)
{
    if (this != &a)
    {
        delete [] array;
        array = new T[a.size()];
        s = a.size();
        for (unsigned int i = 0; i < s; i++)
            array[i] = a[i];
    }
    return (*this);
}

template <typename T> T & Array<T>::operator[](unsigned int i)
{
    if (i >= s || i < 0)
        throw OutOfBoundsException();
    return (array[i]);
}

template <typename T> unsigned int Array<T>::size() const
{
    return (s);
}