#pragma once

#include<iostream>

template<class T>
class Array
{
    private:
        T *array;
        unsigned int arrSize;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(Array const &copy);
        Array &operator=(Array const &other);
        T &operator[](unsigned int index) const;
        unsigned int size() const;
};

#include "Array.tpp"