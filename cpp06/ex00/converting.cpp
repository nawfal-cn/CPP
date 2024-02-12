#include "ScalarConverter.hpp"

bool isfloat(std::string &input)
{
	if(input[input.length() - 1] == 'f')
		input.erase(input.length() - 1);
	int points = 0;
	for(unsigned long i = 0; i < input.length(); i++)
	{
		if(!isnumber(input[i]) && input[i] != '.' && input[i] != '+' && input[i] != '-')
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
    char myChar = '\0';

    if(input.length() == 1)
    {
        if(isdigit(input[0]))
            std::cout<< "Char: \'" << "error" << "\'" << std::endl;
        else if(isalpha(input[0]))
            std::cout<< "Char: \'" << input[0] << "\'" << std::endl;
    }
    else
    {
		if(isfloat(input))
			myChar = static_cast<char>(std::atoi(input.c_str()));
        if(!isprint(myChar))
            std::cout<< "Char: \'" << "error" << "\'" << std::endl;
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
		if(isnumber(input[0]))
			std::cout<< "Int: " << input[0] <<std::endl;
		else
			std::cout<< "Int: " << static_cast<int>(input[0]) << std::endl;
	}
	else
	{
		if(isfloat(input) && (iss >> myInt && myInt <= INT_MAX && myInt >= INT_MIN))
		{
			std::cout<< "Int: " << std::atoi(input.c_str()) << std::endl;
		}
		else
			std::cout<< "Int: error" <<std::endl;
	}
}

void ScalarConverter::toFloat(std::string &input)
{
	std::istringstream iss(input);
	float myFloat;

	if(input.length() == 1)
	{
		if(isnumber(input[0]))
				std::cout<< "Float: " << input[0] << ".0f" <<std::endl;
		else
			std::cout<< "Float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
	}
	else
	{
		float fmax = std::numeric_limits<float>::max();
		float fmin = std::numeric_limits<float>::min();
		if(isfloat(input) && (iss >> myFloat && myFloat <= fmax && myFloat >= fmin))
		{
			if(std::atof(input.c_str()) == static_cast<int>(std::atof(input.c_str())))
				std::cout<< "Float: " << std::atof(input.c_str()) << ".0f" <<std::endl;
			else	
				std::cout<< "Float: " << std::atof(input.c_str()) << "f" <<std::endl;
		}
		else
			std::cout<< "Float: error" <<std::endl;
	}
}

void ScalarConverter::toDouble(std::string &input)
{
    std::istringstream iss(input);
	double myDouble;

	if(input.length() == 1)
	{
		if(isnumber(input[0]))
			std::cout<< "Double: " << input[0] << ".0" <<std::endl;
		else
			std::cout<< "Double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	else
	{
		double dmax = std::numeric_limits<double>::max();
		double dmin = std::numeric_limits<double>::min();
		if(isfloat(input) && (iss >> myDouble && myDouble <= dmax && myDouble >= dmin))
		{
			if(myDouble == static_cast<int>(myDouble))
				std::cout<< "Double: " << myDouble << ".0" <<std::endl;
			else	
				std::cout<< "Double: " << myDouble <<std::endl;
		}
		else
			std::cout<< "Double: error" <<std::endl;
	}
}
