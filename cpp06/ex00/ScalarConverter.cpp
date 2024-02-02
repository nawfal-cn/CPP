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
	char myChar = 'c';
	int myInt = 0;
	// float myFloat = 1.1;
	// double myDouble = 2.2;

	// convert to char
	std::istringstream charStream(input);
	if(!(charStream >> myChar))
		std::cout << "Char: failed!" << std::endl;
	else
		std::cout << "Char: " << myChar << std::endl;


	// convert to int
	myInt = std::atoi(input.c_str());
	// if(0)
	// 	std::cout << "Int: failed!" << std::endl;
	// else
		std::cout << "Int: " << myInt << std::endl;
	

	// convert to float
	// if(0)
	// 	std::cout << "Float: failed!" << std::endl;
	// else	
	// 	std::cout << "Float: " << myFloat << std::endl;
	

	// // convert to double
	// if(0)
	// 	std::cout << "Double: failed!" << std::endl;
	// else
	// 	std::cout << "Double: " << myDouble << std::endl;
}