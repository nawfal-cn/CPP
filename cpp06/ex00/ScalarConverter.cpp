#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout<< "ScalarConverter Created." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout<< "ScalarConverter Destroyed." << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	std::cout<< "Creating a copy of ScalarConverter." << std::endl;
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	std::cout<< "Assigning a copy of ScalarConverter." << std::endl;
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