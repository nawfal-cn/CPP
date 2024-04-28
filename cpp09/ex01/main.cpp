#include "RPN.hpp"

int main(int ac, char **av)
{
	std::stack<std::string> args = splitArguments(ac, av);
	std::stack<int> numbers;
	std::stack<char> operators;

	// fill stacks with numbers and operators
	for(;!args.empty();)
	{
		if(validNum(args.top()))
		{
			numbers.push(atoi((args.top()).c_str()));
			args.pop();
		}
		else if(validOperator(args.top()))
		{
			operators.push(args.top()[0]);
			args.pop();
		}
		else
		{
			std::cerr<< "Error: invalid argument" <<std::endl;	
			return 1;
		}
	}

	// check balance between numbers and operators
	if(operators.size() != numbers.size() - 1)
	{
		if(operators.size() < numbers.size() - 1)
			std::cerr<< "too few operators." <<std::endl;
		if(numbers.size() <= operators.size())
			std::cerr<< "too few numbers." <<std::endl;
		return 1;
	}

	// calculate the result
	for(;!operators.empty();)
	{
		int i1 = numbers.top();
		numbers.pop();
		int i2 = numbers.top();
		numbers.pop();
		char op = operators.top();
		operators.pop();

		int sum = calculate(i1, i2, op);
		numbers.push(sum);
	}

	// print the result
	std::cout<< numbers.top() <<std::endl;

	return 0;
}