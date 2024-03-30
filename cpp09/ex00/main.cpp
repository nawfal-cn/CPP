#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: couldn't open file." << std::endl;
        return 1;
    }
    else
    {
        std::ifstream input(av[1]);
        if(!input)
        {
            std::cerr << "Error: couldn't open file." << std::endl;
            return 1;
        }
        std::string line;
        std::getline(input, line);
        while(std::getline(input, line))
        {
            std::istringstream iss(line);
            std::string date;
            std::getline(iss, date, '|');
            std::string value;
            std::getline(iss, value);
            if(valide_date(date) && valide_value(value))
                std::cout<< date << " => " << value << " = 0" << std::endl;   
        }
        input.close();
    }
    return 0;    
}