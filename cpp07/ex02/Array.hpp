#pragma once

#include<iostream>

template<class T>
class Array
{
    private:
        T *array;
        unsigned int size;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(Array const &copy);
        Array &operator=(Array const &other);
        Array &operator[](unsigned int index);
        unsigned int size() const;
};