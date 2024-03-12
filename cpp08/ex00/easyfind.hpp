#pragma once
#include <stdexcept>
#include <iostream>
#include <vector>

template<typename T>
void easyfind(T container, int value)
{
    typename T::iterator it;
    int index = 0;
    for(it = container.begin(); it != container.end(); it++, index++)
    {
        if(*it == value)
        {
            std::cout<< "The value " << value << " is found at index: " << index <<std::endl;
            return;
        }
    }
    throw std::runtime_error("Value is not found");
}