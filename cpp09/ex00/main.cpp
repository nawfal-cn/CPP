#include "BitcoinExchange.hpp"

std::string getDate(std::string dataline)
{
    size_t comma = dataline.find(',');
    return dataline.substr(0, comma);
}

std::string getExchange(std::string dataline)
{
    size_t comma = dataline.find(',');
    return dataline.substr(comma + 1, dataline.length());
}

int main(int ac, char **av)
{
    // if (ac != 2)
    // {
    //     std::cerr << "Error: couldn't open file." << std::endl;
    //     return 1;
    // }
    // else
    {
        std::ifstream database("data.csv");
        if(!database)
        {
            std::cerr<< "Data base not found!" <<std::endl;
            return 1;
        }

        std::string dataline;
        std::getline(database, dataline);
        std::getline(database, dataline);
        for(int i = 0; i < 1600; i++, std::getline(database, dataline))
        {
            std::cout<< getDate(dataline) <<std::endl;
            std::cout<< getExchange(dataline) <<std::endl;
        }    

        (void)av;
        (void)ac;
        // std::ifstream input(av[1]);
        // if(!input)
        // {
        //     std::cerr << "Error: couldn't open file." << std::endl;
        //     return 1;
        // }
        // std::string line;
        // std::getline(input, line);
        // while(std::getline(input, line))
        // {
        //     std::istringstream iss(line);
        //     std::string date;
        //     std::getline(iss, date, '|');
        //     std::string value;
        //     std::getline(iss, value);
        //     if(valide_date(date) && valide_value(value))
        //         std::cout<< date << " => " << value << " = 0" << std::endl;   
        // }
        // input.close();
    }
    return 0;    
}