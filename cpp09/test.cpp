#include "ex02/PmergeMe.hpp"

std::vector<int> two(std::vector<int> vector)
{
	for(unsigned long i = 0; i < vector.size() - 3; i += 4)
	{
		if(vector[i + 1] > vector[i + 3])
			std::swap_ranges(vector.begin() + i, vector.begin() + i + 2, vector.begin() + i + 2);
	}
	return vector;
}

int main(int ac, char **av)
{
	try
	{
		// split arguments and fill it into a vector
		std::vector<int> vector = splitArguments(ac, av);

		// print the vector before gets sorted
		std::cout<< "Before:    ";
		for(unsigned long i = 0; i < vector.size(); ++i)
			std::cout<< vector[i] << " ";
		std::cout<<std::endl;
		
		vector = two(vector);

		std::cout<< "After:    ";
		for(unsigned long i = 0; i < vector.size(); ++i)
			std::cout<< vector[i] << " ";
		std::cout<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << '\n';
		return 1;
	}

	return 0;
}	