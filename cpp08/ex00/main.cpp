#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        int value;
        std::vector<int>::iterator it;
        std::string str;

        while(1)
        {
            std::cout<<"Add a number to the list or type -1 to finish: ";
            std::getline(std::cin, str);
            if(atoi(str.c_str()) == -1)
                break;
            else
                v.push_back(atoi(str.c_str()));
        }
        std::cout<<"Enter a value to find: ";
        std::getline(std::cin, str);
        value = atoi(str.c_str());
        
        easyfind(v, value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}