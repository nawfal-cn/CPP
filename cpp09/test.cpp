#include <iostream>
#include <string>
#include <algorithm>

bool valide_value(std::string value)
{
    // trim value part to remove white spaces
	size_t first = value.find_first_not_of(' ');
    size_t last = value.find_last_not_of(' ');
    value = value.substr(first, (last - first + 1));

    // check if the value is all valid numbers
    std::string copyValue = value;
    if(value[0] == '-')
        value.erase(value.begin());
    size_t dots = 0;
    for(size_t i = 0; i < value.length(); i++)
    {
        if(value[i] == '.')
            dots++;
        if(!isnumber(value[i]) && (value[i] != '.' || dots > 1))
        {
            std::cerr<< "Error: bad input => " << value <<std::endl;
            return false;
        }
    }

    // check if value is in a valide range
    float range = std::strtof(copyValue.c_str(), NULL);
    if(range < 0)
        {std::cerr<< "Error: not a positive number." <<std::endl; return false;}
    if(range > 1000)
        {std::cerr<< "Error: too large a number." <<std::endl; return false;}

    return true;
}

int main(int ac, char **av)
{
    (void)ac;

    if(valide_value(av[1]))
        std::cout<< av[1] <<std::endl;
    return 0;
}