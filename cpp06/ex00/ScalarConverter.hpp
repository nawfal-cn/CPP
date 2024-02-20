#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m" // Reset text color to default


#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	private :
		ScalarConverter();
	public :
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter &operator=(ScalarConverter const &other);
		static void convert(std::string input);
};

// converting
void toChar(std::string input);
void toInt(std::string input);
void toFloat(std::string input);
void toDouble(std::string input);
// helpers
bool isValideNum(std::string &input);
bool isFinites(std::string input);
void printFinite(std::string input, int flag);

#endif