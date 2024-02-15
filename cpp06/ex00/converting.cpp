#include "ScalarConverter.hpp"

bool isFinites(std::string &input)
{
	if(input == "inff" || input == "+inff" || input == "-inff" || input == "nanf")
		return true;
	if(input == "inf" || input == "+inf" || input == "-inf" || input == "nan")
		return true;
	return false;
}

void printFinite(std::string &input, int flag)
{
	if(flag)
		std::cout<<"Float: ";
	else if(!flag)
		std::cout<<"Double: ";

	if(input == "inff" || input == "inf" || input == "+inff" || input == "+inf")
		std::cout<< "inf";
	else if(input == "-inff" || input == "-inf")
		std::cout<< "-inf";
	else if(input == "nanf" || input == "nan")
		std::cout<< "nan";

	if(flag)
		std::cout<<'f';
	std::cout<<std::endl;	
}

bool isValideNum(std::string &input)
{
	if(input[input.length() - 1] == 'f')
		input.erase(input.length() - 1);
	int points = 0;
	for(unsigned long i = 0; i < input.length(); i++)
	{
		if(!isnumber(input[i]) && input[i] != '.' && input[i] != '+' && input[i] != '-')
			return false;
		if(i > 0 && (input[i] == '+' || input[i] == '-'))
			return false;
		if(input[i] == '.')
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
    if(input.length() == 1)
    {
        if(isdigit(input[0]))
            std::cout<< "Char: " << "Non displayable" << std::endl;
        else if(isprint(input[0]))
            std::cout<< "Char: " << input[0] << std::endl;
    }
    else
    {
		if(isValideNum(input))
		{
			if((std::atoi(input.c_str()) >= 0 && std::atoi(input.c_str()) <= 31) || std::atoi(input.c_str()) == 127)
				std::cout<< "Char: " << "Non displayable" << std::endl;
			else if(std::atoi(input.c_str()) >= 32 && std::atoi(input.c_str()) <= 126)
				std::cout<< "Char: " << static_cast<char>(std::atoi(input.c_str())) <<std::endl;
			else
				std::cout<< "Char: " << "impossible" << std::endl;
		}
		else
			std::cout<< "Char: " << "impossible" << std::endl;
    }
}

void ScalarConverter::toInt(std::string &input)
{
	// std::istringstream iss(input);
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
		myInt = std::atoi(input.c_str());
		// std::cout << myInt << std::endl;
		if(isValideNum(input) && (myInt <= INT_MAX && myInt >= INT_MIN))
			// std::cout<< "Int: " << std::atoi(input.c_str()) << std::endl;
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
		if(isnumber(input[0]))
				std::cout<< "Float: " << input[0] << ".0f" <<std::endl;
		else
			std::cout<< "Float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
	}
	else
	{
		if(isFinites(input))
			printFinite(input, 1);
		else
		{
			float fmax = std::numeric_limits<float>::max();
			if(isValideNum(input) && (iss >> myFloat && myFloat <= fmax && myFloat >= -fmax))
			{
				if(myFloat == static_cast<int>(myFloat))
					std::cout<< "Float: " << myFloat << ".0f" <<std::endl;
				else	
					std::cout<< "Float: " << myFloat << "f" <<std::endl;
			}
			else
				std::cout<< "Float: impossible" <<std::endl;
		}
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
		if(isFinites(input))
			printFinite(input, 0);
		else
		{
			double dmax = std::numeric_limits<double>::max();
			if(isValideNum(input) && (iss >> myDouble && myDouble <= dmax && myDouble >= -dmax))
			{
				if(myDouble == static_cast<int>(myDouble))
					std::cout<< "Double: " << myDouble << ".0" <<std::endl;
				else	
					std::cout<< "Double: " << myDouble <<std::endl;
			}
			else
				std::cout<< "Double: impossible" <<std::endl;
		}
	}
}
