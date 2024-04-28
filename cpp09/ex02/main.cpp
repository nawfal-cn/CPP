#include "PmergeMe.hpp"

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

		// save the time directly before start sorting
		std::clock_t start = std::clock();
		
		// sort the vector
		std::sort(vector.begin(), vector.end());
		
		// save the time directly after sorting
		std::clock_t end = std::clock();

		// print the vector after gets sorted
		std::cout<< "After:    ";
		for(unsigned long i = 0; i < vector.size(); ++i)
			std::cout<< vector[i] << " ";
		std::cout<<std::endl;

		// calculate time that took to sort the vector
		double duration = ( end - start ) / (double) CLOCKS_PER_SEC * 1000000;

		// print time that takes to sort the vector in us
		std::cout<< "Time to process a range of " << vector.size() << " elements with std::vector<int> : " << duration << " us" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << '\n';
		return 1;
	}

	return 0;
}	