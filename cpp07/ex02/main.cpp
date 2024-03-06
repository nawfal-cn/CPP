#include "Array.hpp"

int main()
{
    std::cout<< "-------------------------------------------" << std::endl;

    Array<int> arr1;
    std::cout<< "size of array 1: " << arr1.size() <<std::endl;

    std::cout<< "-------------------------------------------" << std::endl;

    try
    {
        Array<int> arr2(5);
        std::cout<< "size of array 2: "<< arr2.size() <<std::endl;
        std::cout<< "arr2 index 0: " << arr2[0] << std::endl;
        std::cout<< "arr2 index 3: " << arr2[3] << std::endl;
        std::cout<< "arr2 index 6: " << arr2[6] << std::endl;
    }
    catch(const std::out_of_range &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout<< "-------------------------------------------" << std::endl;
    
    try
    {
        Array<std::string> arr3(5);
        arr3[0] = "Hi, ";
        arr3[1] = "my ";
        arr3[2] = "name ";
        arr3[3] = "is ";
        arr3[4] = "nawfal.";

        for(unsigned int i = 0; i <= arr3.size(); i++)
            std::cout<< "arr3 index " << i << ": " << arr3[i] << std::endl;
    }
    catch(const std::out_of_range &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout<< "-------------------------------------------" << std::endl;

    try
    {
        Array<int> arr4(6);
        for(unsigned int i = 0; i < arr4.size(); i++)
            arr4[i] = i;

        Array<int> arr4copy(arr4);
        std::cout<< "size of array 4copy: "<< arr4copy.size() <<std::endl;
        for(unsigned int i = 0; i <= arr4copy.size(); i++)
            std::cout<< "arr3 index " << i << ": " << arr4copy[i] << std::endl;
    }
    catch(const std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout<< "-------------------------------------------" << std::endl;
}