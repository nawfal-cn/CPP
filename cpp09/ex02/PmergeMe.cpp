#include "PmergeMe.hpp"

bool validNum(const std::string& str)
{
    try {
        size_t pos;
        std::stod(str, &pos);
        return pos == str.size();
    } catch (const std::exception&) {
        return false;
    }
}

std::vector<int> splitArguments(int ac, char **av)
{
	std::vector<int> vector;

	for(int i = 1; i < ac; ++i)
	{
		std::istringstream iss(av[i]);
		std::string token;
		while(std::getline(iss, token, ' '))
		{
			if(validNum(token))
				vector.push_back(atoi(token.c_str()));
			else
				throw std::invalid_argument(token);
		}
	}
	return vector;
}
