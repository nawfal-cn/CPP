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
			map[getDate(dataline)] = getExchange(dataline);

		// std::map<std::string, float>::iterator it;
		// for (it = map.begin();it!=map.end(); it++)
		//	 std::cout<< it->first << ", " << it->second <<std::endl;

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
			std::string date = _trim(line.substr(0, pipe));
			std::string value = _trim(line.substr(pipe + 1, line.length() - pipe - 1));

			if(date.empty() || value.empty())
				std::cerr<< "Error: bad input." <<std::endl;
			else if(valide_date(date) && valide_value(value))
			{
				// std::cout<< map.count(date) <<std::endl;
				// if(map.count(date))
				// {
					// float _value = std::strtof(value.c_str(), NULL);
					// float ex_rate = map.at(date);
					// float ex_rate;
				// 	std::cout<< date << " => " << value << " = " << _value * ex_rate <<std::endl;
				// 	// std::cout<< "\033[33m" << _value << "\033[0m" << std::endl;
				// 	// std::cout<< "\033[33m" << ex_rate << "\033[0m" << std::endl;
				// }
				// else
				// 	std::cout<< date << " => " << value << " = " << "🙈" <<std::endl;

				float _value = std::strtof(value.c_str(), NULL);
				std::map<std::string, float>::iterator it = map.lower_bound(date);

				if(it != map.end() && it->first == date)
				{
					// The date is found in the map
					float ex_rate = it->second;
					std::cout<< date << " => " << value << " = " << _value * ex_rate <<std::endl;
				}
				else
				{
					// The date is not found in the map
					if(it != map.begin())
					{
						// There is a date before the given date
						--it;
						float ex_rate = it->second;
						std::cout<< date << " => " << value << " = " << _value * ex_rate <<std::endl;
					}
					else
					{
						// There is no date before the given date
						std::cout<< date << " => " << value << " = " << "🙈" <<std::endl;
					}
				}
			}
		}
		input.close();
	}
	return 0;
}

// jarb t5dem b upper_bound w na9as wa7da mobaxara.