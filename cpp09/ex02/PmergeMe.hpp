#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <ctime>
#include <cstdlib>

typedef std::vector<int> container;
typedef std::vector< std::vector<int> > Dbl_container;

container splitArguments(int ac, char **av);

Dbl_container initialize(container &vector);

void swap(Dbl_container &vector);

void shrink(Dbl_container &vector);

void remove_rest(Dbl_container &vector, Dbl_container &rest, unsigned long &grpSize);

void transfer_vector(Dbl_container &vector, Dbl_container &vector2);

void split_vector(Dbl_container &vector);

void fill_mChain_and_pand(Dbl_container &vector, Dbl_container &mainChain, Dbl_container &pand, Dbl_container &rest);

void binary_search_insert(Dbl_container &mainChain, Dbl_container &pand);

void print_vector(std::string message, Dbl_container &vector);

void forward_sort(Dbl_container &vector, Dbl_container &rest);

void reverse_sort(Dbl_container &vector, Dbl_container &rest);