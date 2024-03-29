#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout<< "BitcoinExchange Created." << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout<< "BitcoinExchange Destroyed." << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	std::cout<< "Creating a copy of BitcoinExchange." << std::endl;
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	std::cout<< "Assigning a copy of BitcoinExchange." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}
