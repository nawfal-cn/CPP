#pragma once
#include <stdexcept>
#include <iostream>
#include <vector>

template<typename T>
void easyfind(T container, int value)
{
    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), value);
    if(it != container.end())
        std::cout<< "The value " << value << " is found at index: " << std::distance(container.begin(), it) <<std::endl;
    else
        throw std::runtime_error("Value is not found");
}