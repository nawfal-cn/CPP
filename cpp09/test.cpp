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

void shrink(std::vector< std::vector<int> > &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; ++i)
	{
		vector[i].insert(vector[i].end(), vector[i+1].begin(), vector[i+1].end());
		vector.erase(vector.begin() + i + 1);
	}
}

void one(std::vector< std::vector<int> > &vector, std::vector<int> &rest)
{
	for(unsigned long j = 0; vector.size() > 1; ++j)
	{
		for(unsigned long i = 0; i < vector.size() - 1; i += 2)
		{
			if(vector[i][j] > vector[i+1][j])
			{
				std::swap(vector[i], vector[i+1]);
			}
		}
		shrink(vector);

		for(unsigned long i = 0; i < vector.size(); ++i)
		{
			if(vector[i].size() < 2) // nta 3andk j incrementing every time by +1, but that number 2 has to be multiplyed by *2 every time not to be increased by +1
			{
				rest.insert(rest.end(), vector[i].begin(), vector[i].end());
				vector.erase(vector.begin() + i);
			}
		}
	}

	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
	{
		if(vector[i][1] > vector[i+1][1])
		{
			std::swap(vector[i], vector[i+1]);
		}
	}
	shrink(vector);
}

void two(std::vector< std::vector<int> > &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
	{
		if(vector[i][1] > vector[i+1][1])
		{
			std::swap(vector[i], vector[i+1]);
		}
	}
	shrink(vector);
}

// std::vector<int> rest()
// {

// }

int main(int ac, char **av)
{
	try
	{
		// split arguments and fill it into a vector
		std::vector<int> argsVector = splitArguments(ac, av);

		// initialize every argument into its own vector
		std::vector< std::vector<int> > vector = initialize(argsVector);

		std::vector<int> rest;

		// print the vector before gets sorted
		std::cout<< "Before:    ";
		for(unsigned long i = 0; i < vector.size(); ++i)
		{
			for(unsigned long j = 0; j < vector[i].size(); ++j)
				std::cout<< vector[i][j] << " ";
			std::cout << "| ";
		}
		std::cout<<std::endl;
		
		one(vector, rest);

		std::cout<< "After:     ";
		for(unsigned long i = 0; i < vector.size(); ++i)
		{
			for(unsigned long j = 0; j < vector[i].size(); ++j)
				std::cout<< vector[i][j] << " ";
			std::cout << "| ";
		}
		std::cout<<std::endl;

		std::cout<< "Rest:      ";
		for(unsigned long i = 0; i < rest.size(); ++i)
		{
				std::cout<< rest[i] << " ";
			std::cout << "| ";
		}
		std::cout<<std::endl;

		// two(vector);

		// std::cout<< "After:     ";
		// for(unsigned long i = 0; i < vector.size(); ++i)
		// {
		// 	for(unsigned long j = 0; j < vector[i].size(); ++j)
		// 		std::cout<< vector[i][j] << " ";
		// 	std::cout << "| ";
		// }
		// std::cout<<std::endl;
	}

	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << '\n';
		return 1;
	}

	return 0;
}



// void one(std::vector< std::vector<int> > &vector, std::vector<int> &rest)
// {
// 	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
// 	{
// 		if(vector[i][0] > vector[i+1][0])
// 		{
// 			std::swap(vector[i], vector[i+1]);
// 		}
// 	}
// 	shrink(vector);

// 	for(unsigned long i = 0; i < vector.size(); ++i)
// 	{
// 		if(vector[i].size() < 2)
// 		{
// 			rest.insert(rest.end(), vector[i].begin(), vector[i].end());
// 			vector.erase(vector.begin() + i);
// 		}
// 	}

// 	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
// 	{
// 		if(vector[i][1] > vector[i+1][1])
// 		{
// 			std::swap(vector[i], vector[i+1]);
// 		}
// 	}
// 	shrink(vector);
// }
