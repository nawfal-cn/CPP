#include "Array.hpp"

template<class T>
Array<T>::Array() : array(nullptr), size(0) {}

template<class T>
Array<T>::~Array()
{
    delete[] array;
}

template<class T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    this->size = n;
}

template<class T>
Array<T>::Array(Array const &copy)
{
    this->array = nullptr;
    *this = copy;
}

template<class T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if(this != &other)
	{
		this->size = other.size;
        if(this->array != nullptr)
            delete[] this->array;
        this->array = new T[size];
        for(unsigned int i = 0; i < size; i++)
            this->array[i] = other.array[i];
	}
	return(*this);
}

template<class T>
Array<T> &Array<T>::operator[](unsigned int index)
{
    if(index >= size)
        throw std::out_of_range("Array index is out of bounds!")
    return(array[index]);
}

template<class T>
unsigned int Array<T>::size() const
{
    return(this->size);
}