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

void swap(std::vector< std::vector<int> > &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
	{
		std::vector<int>::iterator it = vector[i].end() - 1;
		std::vector<int>::iterator it1 = vector[i+1].end() - 1;
		if(*it > *it1)
			std::swap(vector[i], vector[i+1]);
	}
}

void shrink(std::vector< std::vector<int> > &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; ++i)
	{
		vector[i].insert(vector[i].end(), vector[i+1].begin(), vector[i+1].end());
		vector.erase(vector.begin() + i + 1);
	}
}

void remove_rest(std::vector< std::vector<int> > &vector, std::vector<int> &rest, unsigned long &grpSize)
{
	for(unsigned long i = 0; i < vector.size(); ++i)
	{
		if(vector[i].size() < grpSize)
		{
			rest.insert(rest.end(), vector[i].begin(), vector[i].end());
			vector.erase(vector.begin() + i);
		}
	}
}

void print_vector(std::string message, std::vector< std::vector<int> > &vector)
{
	std::string input;
	std::getline(std::cin, input);
	std::cout<< message;
	for(unsigned long i = 0; i < vector.size(); ++i)
	{
		for(unsigned long j = 0; j < vector[i].size(); ++j)
			std::cout<< vector[i][j] << " ";
		std::cout << "| ";
	}
	std::cout<<std::endl;
}

void print_rest(std::string message, std::vector<int> &rest)
{
	std::string input;
	std::getline(std::cin, input);
	std::cout<< message;
	for(unsigned long i = 0; i < rest.size(); ++i)
	{
		std::cout<< rest[i] << " ";
		std::cout << "| ";
	}
	std::cout<<std::endl;
}

void transfer_vector(std::vector< std::vector<int> > &vector, std::vector< std::vector<int> > &vector2)
{
	vector.erase(vector.begin(), vector.end());
	vector.insert(vector.begin(), vector2.begin(), vector2.end());
}

void reverse_sort(std::vector< std::vector<int> > &vector)
{

	for(; vector[0].size() > 1 ;)
	{
		std::vector< std::vector<int> > newVector;
		for(unsigned long i = 0 ; i < vector.size(); ++i)
		{
			int midPoint = vector[0].size() / 2;

			std::vector<int> firstHalf(vector[i].begin(), vector[i].begin() + midPoint);
			std::vector<int> secondHalf(vector[i].begin() + midPoint, vector[i].end());

			newVector.push_back(firstHalf);
			newVector.push_back(secondHalf);
		}
		
		print_vector("lol:    ", newVector);
		transfer_vector(vector, newVector);

		std::vector< std::vector<int> > mainChain;
		std::vector< std::vector<int> > pand;

		mainChain.push_back(vector[0]);
		for(unsigned long i = 1; i < vector.size(); i += 2)
			mainChain.push_back(vector[i]);

		for(unsigned long i = 2; i < vector.size(); i += 2)
			pand.push_back(vector[i]);

		print_vector("main:  ", mainChain);	
		print_vector("pand:  ", pand);	
	}
}

void fj_sort(std::vector< std::vector<int> > &vector)
{
	std::string input;
	std::vector<int> rest;
	unsigned long grpSize = 2;

	for(;vector.size() > 1; grpSize *= 2)
	{
		swap(vector);
		// print_vector("After swap:      ", vector);

		//---------------------------------------------------------------------

		shrink(vector);
		print_vector("After shrink:    ", vector);

		//---------------------------------------------------------------------

		remove_rest(vector, rest, grpSize);
		// print_rest("Rest:            ", rest);

		//---------------------------------------------------------------------


	}

	reverse_sort(vector);
}


int main(int ac, char **av)
{
	try
	{
		// split arguments and fill it into a vector
		std::vector<int> argsVector = splitArguments(ac, av);

		// initialize every argument into its own vector
		std::vector< std::vector<int> > vector = initialize(argsVector);

		// print the vector before gets sorted
		std::cout<< "Before:          ";
		for(unsigned long i = 0; i < vector.size(); ++i)
		{
			for(unsigned long j = 0; j < vector[i].size(); ++j)
				std::cout<< vector[i][j] << " ";
			std::cout << "| ";
		}
		std::cout<<std::endl;
		
		fj_sort(vector);

	}

	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << '\n';
		return 1;
	}

	return 0;
}