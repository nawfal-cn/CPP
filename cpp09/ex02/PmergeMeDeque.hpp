#pragma once

#include <iostream>
#include <deque>
#include <sstream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <ctime>
#include <cstdlib>

typedef std::deque<int> dq_container;
typedef std::deque< std::deque<int> > dq_Dbl_container;

dq_container dq_splitArguments(int ac, char **av);

dq_Dbl_container dq_initialize(dq_container &deque);

void dq_swap(dq_Dbl_container &deque);

void dq_shrink(dq_Dbl_container &deque);

void dq_remove_rest(dq_Dbl_container &deque, dq_Dbl_container &rest, unsigned long &grpSize);

void dq_transfer_deque(dq_Dbl_container &deque, dq_Dbl_container &deque2);

void dq_split_deque(dq_Dbl_container &deque);

void dq_fill_mChain_and_pand(dq_Dbl_container &deque, dq_Dbl_container &mainChain, dq_Dbl_container &pand, dq_Dbl_container &rest);

void dq_binary_search_insert(dq_Dbl_container &mainChain, dq_Dbl_container &pand);

void dq_print_deque(std::string message, dq_Dbl_container &deque);

void dq_forward_sort(dq_Dbl_container &deque, dq_Dbl_container &rest);

void dq_reverse_sort(dq_Dbl_container &deque, dq_Dbl_container &rest);