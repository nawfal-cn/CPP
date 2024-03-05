#include "iter.hpp"

template<typename T>
void printElement(T element)
{
    std::cout<< element << " ";
}

template<typename T>
void increaseElement(T element)
{
    element += 1;
    printElement(element);
}

int main()
{
    std::string strArray[] = {"hello", "world", "my", "name", "is", "nawfal"};
    ::iter(strArray, 4, printElement<std::string>);
    std::cout<<"\n";

    int intArray[] = {0, 5, 7, 2, 4 , 1 , 8};
    ::iter(intArray, 7, increaseElement<int>);
}