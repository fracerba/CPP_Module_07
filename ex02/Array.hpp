#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <exception>

template <typename T> class Array
{
    private:
        T *array;
        unsigned int s;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &a);
        ~Array();
        Array &operator=(Array const &a);
        T &operator[](unsigned int n);

        unsigned int size() const;

        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Out of bounds");
                }
        };
};

#include "Array.tpp"

#endif