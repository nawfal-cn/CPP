#include "Span.hpp"

Span::Span(unsigned int n)
{
    this->max = n;
}

Span::~Span(){}

void Span::addNumber(int add)
{
    if(this->v.size() < this->max)
        this->v.push_back(add);
    else
        throw std::length_error("Elements already full!");    
}

int Span::shortestSpan()
{
    int span, shortestSpan;
    std::vector<int>::iterator it;

    if(v.size() < 2)
        throw std::length_error("No enough numbers");
    std::sort(v.begin(), v.end());
    it = v.begin();
    shortestSpan = *(it + 1) - *it;
    for(it = v.begin()+2; it != v.end(); it++)
    {
        span = *it - *(it -1);
        if(span < shortestSpan)
            shortestSpan = span;
    }
    return (shortestSpan);
}

int Span::longestSpan()
{
    int min, max;

    if(v.size() < 2)
        throw std::length_error("No enough numbers");
    min = *std::min_element(v.begin(), v.end());
    max = *std::max_element(v.begin(), v.end());

    return (max - min);
}

// void Span::fillSpan(size_t start, size_t finish)
// {
//     srand(time(0));
//     for(size_t i = 0; i < max; i++)
//     {
//         int randNum = start + rand() % (( finish + 1 ) - start);
//         addNumber(randNum);
//     }
// }

void Span::fillSpan(size_t start, size_t finish)
{
    srand(time(0));
    if((finish - start) >= max)
    {
        std::set<int> uniqueNumbers;
        while(uniqueNumbers.size() < max)
        {
            int randNum = start + rand() % (( finish + 1 ) - start);
            uniqueNumbers.insert(randNum);
        }
        std::copy(uniqueNumbers.begin(), uniqueNumbers.end(), std::back_inserter(v));
    }
    else
    {
        for(size_t i = 0; i < max; i++)
        {
            int randNum = start + rand() % (( finish + 1 ) - start);
            addNumber(randNum);
        }
    }
}

void Span::printSpan()
{
    std::cout<< "Elements: ";
    std::vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
        std::cout<< *it << " ";
    std::cout << std::endl;
}