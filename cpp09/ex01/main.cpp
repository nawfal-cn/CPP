#include "RPN.hpp"

float RPN_calculator(int ac, char **av)
{
    std::stack<float> stack;

    for (int i = 1; i < ac; ++i)
	{
        std::istringstream iss(av[i]);
        std::string token;
        while (std::getline(iss, token, ' '))
		{
			if(!token.empty())
			{
				if(!validNum(token) && !validOperator(token))
					throw std::invalid_argument("Error: invalid argument");
				if(validOperator(token))
				{
					float i1, i2;
					if(stack.size() > 1) {
						i2 = stack.top(); stack.pop();
						i1 = stack.top(); stack.pop();
					}
					else
						throw std::out_of_range("Error: Wrong balance between numbers and operators");
					stack.push(calculate(i1, i2, token[0]));
				}	
				else
					stack.push(std::stof(token));
			}
		}
    }
	if(stack.size() > 1)
		throw std::out_of_range("Error: Wrong balance between numbers and operators");
    return stack.top();
}

int main(int ac, char **av)
{
	try
	{
		if(ac < 2) {
			std::cerr<< "Enter arguments!" <<std::endl; return 1;
		}
		std::cout<< RPN_calculator(ac, av) <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}