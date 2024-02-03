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
	{
		char myChar;
		if(input.length() == 1)
		{
			if(isalpha(input[0]))
				std::cout<< "Char: \'" << input[0] << "\'" << std::endl;
			else if(isdigit(input[0]))
				std::cout<< "Char: \'" << "unprintable" << "\'" << std::endl;
		}
		else
		{
			int i = std::atoi(input.c_str());
			myChar = static_cast<char>(i);
			if(!isprint(myChar))
				std::cout<< "Char: \'" << "unprintable" << "\'" << std::endl;
			else
				std::cout<< "Char: \'" << myChar << "\'" << std::endl;

		}
	}

	// convert to int
}
