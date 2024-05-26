#include "PmergeMe.hpp"

// unsigned long comps = 0;

void forward_sort(Dbl_container &vector, Dbl_container &rest)
{
	unsigned long grpSize = 2;

	for(;vector.size() > 1; grpSize *= 2)
	{
		swap(vector);
		print_vector("Swap:    ", vector);
		shrink(vector);
		print_vector("Shrink:    " , vector);
		remove_rest(vector, rest, grpSize);
		print_vector("Rest:    " , rest);
	}
}

void reverse_sort(Dbl_container &vector, Dbl_container &rest)
{
	for(;vector.front().size() > 1;)
	{
		Dbl_container mainChain;
		Dbl_container pand;

		split_vector(vector);
		print_vector("Split:    " , vector);
		fill_mChain_and_pand(vector, mainChain, pand, rest);

		binary_search_insert(mainChain, pand);
		transfer_vector(vector, mainChain);
		print_vector("Binary:    " , vector);
	}
}

void fj_sort(Dbl_container &vector)
{
	Dbl_container rest;
	
	forward_sort(vector, rest);
	reverse_sort(vector, rest);
}

int main(int ac, char **av)
{
	try
	{
		if(ac < 2)
		{
			std::cerr << "No arguments!" << std::endl;
			return 1;
		}
		container args = splitArguments(ac, av);

		Dbl_container vector = initialize(args);

		print_vector("Before:    ", vector);
		
        std::clock_t start = std::clock();

        fj_sort(vector);

        std::clock_t end = std::clock();

        double elapsed = 1000000.0 * (end - start) / CLOCKS_PER_SEC;

		print_vector("After :    ", vector);

		std::cout<<std::endl;
        std::cout << "Time : " << elapsed << " us" << std::endl;

		std::cout<<std::endl;
	}

	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}