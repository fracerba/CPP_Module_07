#ifndef whatever_HPP
#define whatever_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <cfloat>

template <typename T> void swap(T& a, T& b) 
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> const T& max(const T& a, const T& b) 
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T> const T& min(const T& a, const T& b) 
{
    if (a < b)
        return a;
    else
        return b;
}

#endif