#include "BitcoinExchange.hpp"

bool acceptable_date(std::string date)
{
    // check the length of the date
    if(date.length() > 10 || date.length() < 8)
        return false;
    
    // check number of separators
    size_t sep = 0;
    for(size_t i = 0; i < date.length(); i++)
        if(date[i] == '-')
            sep++;
    if(sep < 2 || sep > 2)
        return false;

    // check if the date is all valid numbers
    std::string copyDate = date;
    copyDate.erase(std::remove(copyDate.begin(), copyDate.end(), '-'), copyDate.end());
    for(size_t i = 0; i < copyDate.length(); i++)
        if(!isnumber(copyDate[i]))
            return false;

    // check if date is in a valide range
    std::string ymd[3];
    for(size_t i = 0; i < 3; i++)
    {
        size_t firstPos = 0;
        size_t lastPos = date.find('-');
        ymd[i] = date.substr(firstPos, lastPos);
        date.erase(firstPos, lastPos + 1);
    }
    if(std::stoi(ymd[0]) < 2009 || std::stoi(ymd[0]) > 2022)
        return false;
    if(std::stoi(ymd[1]) < 1 || std::stoi(ymd[1]) > 12)
        return false;
    if(std::stoi(ymd[2]) < 1 || std::stoi(ymd[2]) > 31)
        return false;

    return true;
}

bool valide_date(std::string date)
{
    // trim date part to remove white spaces
    size_t first = date.find_first_not_of(' ');
    size_t last = date.find_last_not_of(' ');
    date = date.substr(first, (last - first + 1));

    // check if the date is valide
    if(!acceptable_date(date))
    {
        std::cout<< "Error: bad input => " << date <<std::endl;
        return false;
    }

    return true;
}

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