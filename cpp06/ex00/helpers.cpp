  #include "ScalarConverter.hpp"

bool isFinites(std::string input)
{
	if(input == "inff" || input == "+inff" || input == "-inff" || input == "nanf")
		return true;
	if(input == "inf" || input == "+inf" || input == "-inf" || input == "nan")
		return true;
	return false;
}

void printFinite(std::string input, int flag)
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
	if(input == ".f")
		return false;
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
