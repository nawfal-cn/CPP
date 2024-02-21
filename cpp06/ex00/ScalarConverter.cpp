#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

void ScalarConverter::convert(std::string input)
{
	// convert to char
	toChar(input);
	// convert to int
	toInt(input);
	// convert to float
	toFloat(input);
	// convert to double
	toDouble(input);
}