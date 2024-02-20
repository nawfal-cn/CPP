#include "ScalarConverter.hpp"

void toChar(std::string input)
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
			int myChar = std::atoi(input.c_str());
			if((myChar >= 0 && myChar <= 31) || myChar == 127)
				std::cout<< "Char: " << "Non displayable" << std::endl;
			else if(myChar >= 32 && myChar <= 126)
				std::cout<< "Char: " << static_cast<char>(myChar) <<std::endl;
			else
				std::cout<< "Char: " << "impossible" << std::endl;
		}
		else
			std::cout<< "Char: " << "impossible" << std::endl;
    }
}

void toInt(std::string input)
{
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
		if(isValideNum(input))
		{
			myInt = std::atoi(input.c_str());
			if(myInt <= INT_MAX && myInt >= INT_MIN)
				std::cout<< "Int: " << myInt << std::endl;
			else
				std::cout<< "Int: impossible" <<std::endl;
		}
		else
			std::cout<< "Int: impossible" <<std::endl;
	}
}

void toFloat(std::string input)
{
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
		if(isFinites(input))
			printFinite(input, 1);
		else
		{
			if(isValideNum(input))
			{
				float fmax = std::numeric_limits<float>::max();
				myFloat = std::stof(input);
				if(myFloat <= fmax && myFloat >= -fmax)
				{
					if(myFloat == static_cast<int>(myFloat))
						std::cout<< "Float: " << myFloat << ".0f" <<std::endl;
					else	
						std::cout<< "Float: " << myFloat << "f" <<std::endl;
				}
			}
			else
				std::cout<< "Float: impossible" <<std::endl;
		}
	}
}

void toDouble(std::string input)
{
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
			if(isValideNum(input))
			{
				double dmax = std::numeric_limits<double>::max();
				myDouble = std::stod(input);
				if(myDouble <= dmax && myDouble >= -dmax)
				{
					if(myDouble == static_cast<int>(myDouble))
						std::cout<< "Double: " << myDouble << ".0" <<std::endl;
					else	
						std::cout<< "Double: " << myDouble <<std::endl;
				}
			}
			else
				std::cout<< "Double: impossible" <<std::endl;
		}
	}
}
