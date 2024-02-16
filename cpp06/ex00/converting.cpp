#include "ScalarConverter.hpp"

void toChar(std::string &input)
{
	if(input.length() == 0)
		std::cout<< "Char: " << "Non displayable" << std::endl;
    else if(input.length() == 1)
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

void toInt(std::string &input)
{
	std::istringstream iss(input);
	int myInt;

	if(input.length() == 0)
		std::cout<< "Int: " << "0" << std::endl;
    else if(input.length() == 1)
	{
		if(isnumber(input[0]))
			std::cout<< "Int: " << input[0] <<std::endl;
		else
			std::cout<< "Int: " << static_cast<int>(input[0]) << std::endl;
	}
	else
	{
		myInt = std::atoi(input.c_str());
		if(isValideNum(input) && (myInt <= INT_MAX && myInt >= INT_MIN))
			std::cout<< "Int: " << myInt << std::endl;
		else
			std::cout<< "Int: impossible" <<std::endl;
	}
}

void toFloat(std::string &input)
{
	std::istringstream iss(input);
	float myFloat;

	if(input.length() == 0)
		std::cout<< "Float: " << "0.0f" << std::endl;
    else if(input.length() == 1)
	{
		if(isnumber(input[0]))
				std::cout<< "Float: " << input[0] << ".0f" <<std::endl;
		else
			std::cout<< "Float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
	}
	else
	{
		// std::cout<< (isFinites(input)) << std::endl;
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

void toDouble(std::string &input)
{
    std::istringstream iss(input);
	double myDouble;

	if(input.length() == 0)
		std::cout<< "Double: " << "0.0" << std::endl;
    else if(input.length() == 1)
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
