#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if(ac == 2)
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
		while(std::getline(database, dataline))
			map[getDate(dataline)] = getExchange(dataline);

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
			if(line.empty())
				continue;
			size_t pipe = line.find('|');
			std::string date = _trim(line.substr(0, pipe));
			std::string value = _trim(line.substr(pipe + 1, line.length() - pipe - 1));

			if(date.empty() || value.empty())
				std::cerr<< "Error: bad input." <<std::endl;
			else if(valide_date(date) && valide_value(value))
			{
				float _value = std::strtof(value.c_str(), NULL);
				std::map<std::string, float>::iterator it = map.lower_bound(date);

				if(it != map.end() && it->first == date)
				{
					float ex_rate = it->second;
					std::cout<< date << " => " << value << " = " << _value * ex_rate <<std::endl;
				}
				else
				{
					if(it != map.begin())
					{
						--it;
						float ex_rate = it->second;
						std::cout<< date << " => " << value << " = " << _value * ex_rate <<std::endl;
					}
					else
						std::cout<< "Date " << date << " not found." <<std::endl;
				}
			}
		}
		input.close();
	}
	else
	{
		std::cerr << "Error: couldn't open file." << std::endl;
		return 1;
	}
	return 0;
}
