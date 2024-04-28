#include "RPN.hpp"

int calculate(int i1, int i2, char operation)
{
	switch (operation)
	{
	case '+': return i1 + i2; break;
	case '-': return i1 - i2; break;
	case '*': return i1 * i2; break;
	case '/': return i1 / i2; break;
	default: return -1;
		break;
	}
}

bool validNum(std::string num)
{
	for(size_t i = 0; i < num.length(); i++)
		if(!isdigit(num[i]))
			return false;
	if(atoi(num.c_str()) > 9)
		return false;
	return true;	
}

bool validOperator(std::string num)
{
	if(num.length() > 1)
		return false;
	if(num[0] != '+' && num[0] != '-' && num[0] != '*' && num[0] != '/')
		return false;
	return true;	
}

std::stack<std::string> splitArguments(int ac, char **av)
{
    std::stack<std::string> arguments;

    for (int i = 1; i < ac; ++i)
	{
        std::istringstream iss(av[i]);
        std::string token;
        while (std::getline(iss, token, ' '))
            arguments.push(token);
    }
    return arguments;
}