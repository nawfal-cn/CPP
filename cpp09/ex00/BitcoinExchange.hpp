#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>

class BitcoinExchange
{
	private :
		// put your private attributes here
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange &operator=(BitcoinExchange const &other);
};

#endif