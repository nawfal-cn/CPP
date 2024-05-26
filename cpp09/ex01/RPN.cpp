#include "RPN.hpp"

float calculate(float i1, float i2, char operation)
{
	switch (operation)
	{
	case '+': return i1 + i2; break;
	case '-': return i1 - i2; break;
	case '*': return i1 * i2; break;
	case '/': if(i2 == 0) {throw std::runtime_error("Error: division by zero");}
			return i1 / i2; break;
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

bool validOperator(std::string op)
{
	if(op.length() > 1)
		return false;
	if(op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/')
		return false;
	return true;	
}
