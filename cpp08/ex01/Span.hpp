#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <set>

class Span
{
    private:
        std::vector<int>v;
        unsigned int max;
    public:
        Span(unsigned int n);
        ~Span();
        void addNumber(int add);
        int shortestSpan();
        int longestSpan();
        void fillSpan(size_t start, size_t finish);
        void printSpan();
};