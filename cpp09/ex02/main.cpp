#include "PmergeMe.hpp"
#include "PmergeMeDeque.hpp"

void fj_sort(Dbl_container &vector)
{
	Dbl_container rest;
	
	forward_sort(vector, rest);
	reverse_sort(vector, rest);
}

void dq_fj_sort(dq_Dbl_container &deque)
{
	dq_Dbl_container rest;
	
	dq_forward_sort(deque, rest);
	dq_reverse_sort(deque, rest);
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
		dq_container dq_args = dq_splitArguments(ac, av);

		Dbl_container vector = initialize(args);
		dq_Dbl_container deque = dq_initialize(dq_args);

		print_vector("Before:      ", vector);
		
        std::clock_t start = std::clock();
        fj_sort(vector);
        std::clock_t end = std::clock();

        std::clock_t dq_start = std::clock();
        dq_fj_sort(deque);
        std::clock_t dq_end = std::clock();

		print_vector("After :      ", vector);
		
        double elapsed = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
        double dq_elapsed = 1000000.0 * (dq_end - dq_start) / CLOCKS_PER_SEC;
        std::cout << "Time to process a range of " << vector.size() << " elements with std::vector<> :    " << elapsed << " us" << std::endl;
        std::cout << "Time to process a range of " << deque.size() << " elements with std::deque<>  :    " << dq_elapsed << " us" << std::endl;
	}

	catch(const std::exception& e)
	{
		std::cerr << "Invalide argument: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}