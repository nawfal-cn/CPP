#include "ex02/PmergeMe.hpp"

std::vector< std::vector<int> > initialize(std::vector<int> &vector)
{
	std::vector< std::vector<int> > newVector;

	for(unsigned long i = 0; i < vector.size(); ++i)
	{
		std::vector<int> tmp;
		tmp.push_back(vector[i]);
		newVector.push_back(tmp);
	}
	return newVector;
}

void one(std::vector< std::vector<int> > &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
	{
		if(vector[i][0] > vector[i + 1][0])
		{
			// std::swap_ranges(vector.begin() + i, vector.begin() + i + 1, vector.begin() + i + 1);
			std::swap(vector[i], vector[i+1]);
		}
	}
}

void shrink(std::vector< std::vector<int> > &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; ++i)
	{
		vector[i].push_back(vector[i+1][0]);
		vector.erase(vector.begin() + i + 1);
	}
}

// void two(std::vector< std::vector<int> > &vector)
// {
// 	for(unsigned long i = 0; i < vector.size() - 3; i += 4)
// 	{
// 		if(vector[i + 1] > vector[i + 3])
// 			std::swap_ranges(vector.begin() + i, vector.begin() + i + 2, vector.begin() + i + 2);
// 	}
// }

int main(int ac, char **av)
{
	try
	{
		// split arguments and fill it into a vector
		std::vector<int> argsVector = splitArguments(ac, av);

		std::vector< std::vector<int> > vector = initialize(argsVector);

		// for(unsigned long i = 0; i < vector.size(); ++i)
		// {
		// 	for(unsigned long j = 0; j < vector[i].size(); ++j)
		// 		std::cout<< vector[i][j] << " ";
		// 	std::cout << "| ";	
		// }

		// print the vector before gets sorted
		std::cout<< "Before:    ";
		for(unsigned long i = 0; i < vector.size(); ++i)
		{
			for(unsigned long j = 0; j < vector[i].size(); ++j)
				std::cout<< vector[i][j] << " ";
			std::cout << "| ";
		}
		std::cout<<std::endl;
		
		one(vector);
		shrink(vector);

		std::cout<< "After:     ";
		for(unsigned long i = 0; i < vector.size(); ++i)
		{
			for(unsigned long j = 0; j < vector[i].size(); ++j)
				std::cout<< vector[i][j] << " ";
			std::cout << "| ";	
		}
		std::cout<<std::endl;
	}

	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << '\n';
		return 1;
	}

	return 0;
}	