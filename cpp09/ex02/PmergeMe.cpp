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

container splitArguments(int ac, char **av)
{
	container vector;

	for(int i = 1; i < ac; ++i)
	{
		std::istringstream iss(av[i]);
		std::string token;
		while(std::getline(iss, token, ' '))
		{
			if(validNum(token) && atoi(token.c_str()) >= 0)
				vector.push_back(atoi(token.c_str()));
			else
				throw std::invalid_argument(token);
		}
	}
	return vector;
}

Dbl_container initialize(container &vector)
{
	Dbl_container newVector;

	for(unsigned long i = 0; i < vector.size(); ++i)
	{
		container tmp;
		tmp.push_back(vector[i]);
		newVector.push_back(tmp);
	}
	return newVector;
}

void swap(Dbl_container &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; i += 2)
	{
		if(vector[i].back() > vector[i+1].back())
			std::swap(vector[i], vector[i+1]);
	}
}

void shrink(Dbl_container &vector)
{
	for(unsigned long i = 0; i < vector.size() - 1; ++i)
	{
		vector[i].insert(vector[i].end(), vector[i+1].begin(), vector[i+1].end());
		vector.erase(vector.begin() + i + 1);
	}
}

void remove_rest(Dbl_container &vector, Dbl_container &rest, unsigned long &grpSize)
{
	for(unsigned long i = 0; i < vector.size(); ++i)
	{
		if(vector[i].size() < grpSize)
		{
			rest.push_back(vector[i]);
			vector.erase(vector.begin() + i);
		}
	}
}

void transfer_vector(Dbl_container &vector, Dbl_container &vector2)
{
	vector.erase(vector.begin(), vector.end());
	vector.insert(vector.begin(), vector2.begin(), vector2.end());
}

void split_vector(Dbl_container &vector)
{
	Dbl_container newVector;
	for(unsigned long i = 0 ; i < vector.size(); ++i)
	{
		int midPoint = vector.front().size() / 2;

		container firstHalf(vector[i].begin(), vector[i].begin() + midPoint);
		container secondHalf(vector[i].begin() + midPoint, vector[i].end());

		newVector.push_back(firstHalf);
		newVector.push_back(secondHalf);
	}
	
	transfer_vector(vector, newVector);
}

void fill_mChain_and_pand(Dbl_container &vector, Dbl_container &mainChain, Dbl_container &pand, Dbl_container &rest)
{
	mainChain.push_back(vector[0]);
	for(unsigned long i = 1; i < vector.size(); i += 2)
		mainChain.push_back(vector[i]);

	for(unsigned long i = 2; i < vector.size(); i += 2)
		pand.push_back(vector[i]);

	if(!rest.empty() && rest.back().size() == mainChain.back().size())
	{
			pand.push_back(rest.back());
			rest.pop_back();
	}
}

void insert_sorted(Dbl_container &vector, container &element)
{
    int start = 0;
    int end = vector.size() - 1;
    
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (element.back() < vector[mid].back())
        {
            end = mid - 1;
        }
        else if (element.back() > vector[mid].back())
        {
            start = mid + 1;
        }
        else
        {
            vector.insert(vector.begin() + mid, element);
            return;
        }
    }
    vector.insert(vector.begin() + start, element);
}

void binary_search_insert(Dbl_container &mainChain, Dbl_container &pand)
{
	for(;!pand.empty();)
	{
		insert_sorted(mainChain, pand.back());
		pand.pop_back();
	}
}

void print_vector(std::string message, Dbl_container &vector)
{
	std::cout<< message;
	for(unsigned long i = 0; i < vector.size(); ++i)
	{
		for(unsigned long j = 0; j < vector[i].size(); ++j)
			std::cout<< vector[i][j] << "  ";
	}
	std::cout<<std::endl;
}

void forward_sort(Dbl_container &vector, Dbl_container &rest)
{
	unsigned long grpSize = 2;

	for(;vector.size() > 1; grpSize *= 2)
	{
		swap(vector);
		shrink(vector);
		remove_rest(vector, rest, grpSize);
	}
}

void reverse_sort(Dbl_container &vector, Dbl_container &rest)
{
	for(;vector.front().size() > 1;)
	{
		Dbl_container mainChain;
		Dbl_container pand;

		split_vector(vector);
		fill_mChain_and_pand(vector, mainChain, pand, rest);
		binary_search_insert(mainChain, pand);
		transfer_vector(vector, mainChain);
	}
}