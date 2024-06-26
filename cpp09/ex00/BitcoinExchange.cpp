#include "BitcoinExchange.hpp"
std::string _trim(std::string str)
{
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    if(first > str.length() || last > str.length())
        return ("");
    str = str.substr(first, (last - first + 1));
    return str;
}

std::string getDate(std::string dataline)
{
	size_t comma = dataline.find(',');
	return dataline.substr(0, comma);
}

float getExchange(std::string dataline)
{
	size_t comma = dataline.find(',');
	std::string exch = dataline.substr(comma + 1, dataline.length());
	float exchange = std::strtof(exch.c_str(), NULL);
	return exchange;
}

bool acceptable_date(std::string &date)
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
    size_t firstPos = 0;
    for(size_t i = 0; i < 3; i++)
    {
        size_t lastPos = date.find('-' ,firstPos);
        ymd[i] = date.substr(firstPos, lastPos - firstPos);
        firstPos = lastPos + 1;
    }

    if(std::stoi(ymd[0]) < 2009 || std::stoi(ymd[0]) > 2022)
        return false;
    if(std::stoi(ymd[1]) < 1 || std::stoi(ymd[1]) > 12)
        return false;
    if(std::stoi(ymd[2]) < 1 || std::stoi(ymd[2]) > 31)
        return false;

    return true;
}

bool valide_date(std::string &date)
{
    // check if the date is valide
    if(!acceptable_date(date))
    {
        std::cout << "Error: bad input => " << date <<std::endl;
        return false;
    }
    return true;
}

bool valide_value(std::string &value)
{
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
    if(range > INT_MAX)
        {std::cerr<< "Error: too large a number." <<std::endl; return false;}

    return true;
}