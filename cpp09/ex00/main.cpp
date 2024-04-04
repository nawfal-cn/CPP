#include "BitcoinExchange.hpp"

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

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: couldn't open file." << std::endl;
        return 1;
    }
    else
    {
        std::ifstream database("data.csv");
        if(!database)
        {
            std::cerr<< "Data base not found!" <<std::endl;
            return 1;
        }

        std::map<std::string, float> map;
        std::string dataline;
        std::getline(database, dataline);
        std::getline(database, dataline);

        while(std::getline(database, dataline))
            map.insert(std::make_pair(getDate(dataline), getExchange(dataline)));

		// std::map<std::string, float>::iterator it;
        // for (it = map.begin();it!=map.end(); it++)
        //     std::cout<< it->first << ", " << it->second <<std::endl;

        // (void)av;
        // (void)ac;
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
            size_t pipe = line.find('|');
            std::string date = line.substr(0, pipe);
            std::string value = line.substr(pipe + 1, line.length());

            if(valide_date(date) && valide_value(value))
			{
				if(map.count(date))
					std::cout<< "------------------->" << map.at(date) << std::endl;
				// else
				// 	std::cout << "Date '" << date << "' not found in the map." << std::endl;
                std::cout<< date << " => " << value << " = 0" << std::endl;
			}
        }
        input.close();
    }
    return 0;
}