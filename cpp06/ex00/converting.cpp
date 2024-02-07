#include "ScalarConverter.hpp"

bool isfloat(std::string &input)
{
	int points = 0;
	for(unsigned long i = 0; i < input.length(); i++)
	{
		if(!isnumber(input[i]) && input[i] != '.')
			return false;
		else if(input[i] == '.')
		{
			points++;
			if(points > 1)
				return false;
		}
	}
	return true;
}

void ScalarConverter::toChar(std::string &input)
{
	std::istringstream iss(input);
    char myChar;

    if(input.length() == 1)
    {
        if(isdigit(input[0]))
            std::cout<< "Char: \'" << "unprintable" << "\'" << std::endl;
        else if(iss >> myChar)
            std::cout<< "Char: \'" << input[0] << "\'" << std::endl;
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

void ScalarConverter::toInt(std::string &input)
{
	std::istringstream iss(input);
	int myInt;
	
	if(input.length() == 1)
	{
		if(iss >> myInt)
			std::cout<< "Int: " << myInt <<std::endl;
		else
			std::cout<< "Int: " << static_cast<int>(input[0]) << std::endl;
	}
	else
	{
		if(isfloat(input)&& (iss >> myInt))
			std::cout<< "Int: " << myInt << std::endl;
		else
			std::cout<< "Int: impossible" <<std::endl;
	}
}

void ScalarConverter::toFloat(std::string &input)
{
	std::istringstream iss(input);
	float myFloat;

	if(input.length() == 1)
	{
		if(iss >> myFloat)
			std::cout<< "Float: " << myFloat <<std::endl;
		else
			std::cout<< "Float: " << static_cast<float>(input[0]) << std::endl;
	}
	else
	{
		if(isfloat(input) && (iss >> myFloat))
			std::cout<< "Float: " << myFloat <<std::endl;
		else
			std::cout<< "Float: impossible" <<std::endl;
	}
}

void ScalarConverter::toDouble(std::string &input)
{
    std::istringstream iss(input);
	double myDouble;

	if(input.length() == 1)
	{
		if(iss >> myDouble)
			std::cout<< "Double: " << myDouble <<std::endl;
		else
			std::cout<< "Double: " << static_cast<double>(input[0]) << std::endl;
	}
	else
	{
		if(isfloat(input) && (iss >> myDouble))
			std::cout<< "Double: " << myDouble <<std::endl;
		else
			std::cout<< "Double: impossible" <<std::endl;
	}
}
