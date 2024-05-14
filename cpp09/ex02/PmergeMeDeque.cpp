#include "PmergeMeDeque.hpp"

bool dq_validNum(const std::string& str)
{
    try {
        size_t pos;
        std::stod(str, &pos);
        return pos == str.size();
    } catch (const std::exception&) {
        return false;
    }
}

dq_container dq_splitArguments(int ac, char **av)
{
	dq_container deque;

	for(int i = 1; i < ac; ++i)
	{
		std::istringstream iss(av[i]);
		std::string token;
		while(std::getline(iss, token, ' '))
		{
			if(dq_validNum(token) && atoi(token.c_str()) >= 0)
				deque.push_back(atoi(token.c_str()));
			else
				throw std::invalid_argument(token);
		}
	}
	return deque;
}

dq_Dbl_container dq_initialize(dq_container &deque)
{
	dq_Dbl_container newDeque;

	for(unsigned long i = 0; i < deque.size(); ++i)
	{
		dq_container tmp;
		tmp.push_back(deque[i]);
		newDeque.push_back(tmp);
	}
	return newDeque;
}

void dq_swap(dq_Dbl_container &deque)
{
	for(unsigned long i = 0; i < deque.size() - 1; i += 2)
	{
		if(deque[i].back() > deque[i+1].back())
			std::swap(deque[i], deque[i+1]);
	}
}

void dq_shrink(dq_Dbl_container &deque)
{
	for(unsigned long i = 0; i < deque.size() - 1; ++i)
	{
		deque[i].insert(deque[i].end(), deque[i+1].begin(), deque[i+1].end());
		deque.erase(deque.begin() + i + 1);
	}
}

void dq_remove_rest(dq_Dbl_container &deque, dq_Dbl_container &rest, unsigned long &grpSize)
{
	for(unsigned long i = 0; i < deque.size(); ++i)
	{
		if(deque[i].size() < grpSize)
		{
			rest.push_back(deque[i]);
			deque.erase(deque.begin() + i);
		}
	}
}

void dq_transfer_deque(dq_Dbl_container &deque, dq_Dbl_container &deque2)
{
	deque.erase(deque.begin(), deque.end());
	deque.insert(deque.begin(), deque2.begin(), deque2.end());
}

void dq_split_deque(dq_Dbl_container &deque)
{
	dq_Dbl_container newDeque;
	for(unsigned long i = 0 ; i < deque.size(); ++i)
	{
		int midPoint = deque.front().size() / 2;

		dq_container firstHalf(deque[i].begin(), deque[i].begin() + midPoint);
		dq_container secondHalf(deque[i].begin() + midPoint, deque[i].end());

		newDeque.push_back(firstHalf);
		newDeque.push_back(secondHalf);
	}
	
	dq_transfer_deque(deque, newDeque);
}

void dq_fill_mChain_and_pand(dq_Dbl_container &deque, dq_Dbl_container &mainChain, dq_Dbl_container &pand, dq_Dbl_container &rest)
{
	mainChain.push_back(deque[0]);
	for(unsigned long i = 1; i < deque.size(); i += 2)
		mainChain.push_back(deque[i]);

	for(unsigned long i = 2; i < deque.size(); i += 2)
		pand.push_back(deque[i]);

	if(!rest.empty() && rest.back().size() == mainChain.back().size())
	{
			pand.push_back(rest.back());
			rest.pop_back();
	}
}

void dq_insert_sorted(dq_Dbl_container &deque, dq_container &element)
{
    int start = 0;
    int end = deque.size() - 1;
    
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (element.back() < deque[mid].back())
        {
            end = mid - 1;
        }
        else if (element.back() > deque[mid].back())
        {
            start = mid + 1;
        }
        else
        {
            deque.insert(deque.begin() + mid, element);
            return;
        }
    }
    deque.insert(deque.begin() + start, element);
}

void dq_binary_search_insert(dq_Dbl_container &mainChain, dq_Dbl_container &pand)
{
	for(;!pand.empty();)
	{
		dq_insert_sorted(mainChain, pand.back());
		pand.pop_back();
	}
}

void dq_print_deque(std::string message, dq_Dbl_container &deque)
{
	std::cout<< message;
	for(unsigned long i = 0; i < deque.size(); ++i)
	{
		for(unsigned long j = 0; j < deque[i].size(); ++j)
			std::cout<< deque[i][j] << "  ";
	}
	std::cout<<std::endl;
}

void dq_forward_sort(dq_Dbl_container &deque, dq_Dbl_container &rest)
{
	unsigned long grpSize = 2;

	for(;deque.size() > 1; grpSize *= 2)
	{
		dq_swap(deque);
		dq_shrink(deque);
		dq_remove_rest(deque, rest, grpSize);
	}
}

void dq_reverse_sort(dq_Dbl_container &deque, dq_Dbl_container &rest)
{
	for(;deque.front().size() > 1;)
	{
		dq_Dbl_container mainChain;
		dq_Dbl_container pand;

		dq_split_deque(deque);
		dq_fill_mChain_and_pand(deque, mainChain, pand, rest);
		dq_binary_search_insert(mainChain, pand);
		dq_transfer_deque(deque, mainChain);
	}
}