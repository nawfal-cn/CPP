#include "ex02/PmergeMe.hpp"
# include <vector>
#include <algorithm>

void binary_search_insert(std::vector< std::vector<int> >& vec2D, std::vector<int>& vec1D, int start, int end) {
    if (start > end) {
        vec2D.insert(vec2D.begin() + start, vec1D);
        return;
    }

    int mid = start + (end - start) / 2;
    if (vec1D.back() < vec2D[mid].back()) {
        binary_search_insert(vec2D, vec1D, start, mid - 1);
    } else {
        binary_search_insert(vec2D, vec1D, mid + 1, end);
    }
}

void insert_sorted(std::vector< std::vector<int> >& vec2D, std::vector<int>& vec1D) {
    binary_search_insert(vec2D, vec1D, 0, vec2D.size() - 1);
}

void binary_search(std::vector< std::vector<int> > &vector, std::vector<int> &element)
{
    std::vector<int>::iterator vctr;
    std::vector<int>::iterator elmnt;

    vctr = vector[vector.size()/2].end() - 1;
    elmnt = element.end() - 1;

    std::cout<< *vctr <<std::endl;
    std::cout<< *elmnt <<std::endl;

    int i = 1;
    if(elmnt < vctr)
    {
        i *= 2;
        vctr = vector[vector.size()/(2*1)].end() - 1;
    }
}

int main()
{
    std::vector<int> row1(4, 1);
    std::vector<int> row2(4, 2);
    std::vector<int> row3(4, 6);
    std::vector<int> row4(4, 12);
    std::vector<int> row5(4, 24);
    std::vector<int> row6(4, 36);

    std::vector<std::vector<int> > vector;
    vector.push_back(row1);
    vector.push_back(row2);
    vector.push_back(row3);
    vector.push_back(row4);
    vector.push_back(row5);
    vector.push_back(row6);

    std::vector<int> element(16, 26);

    insert_sorted(vector, element);

    for(unsigned long i = 0; i < vector.size(); ++i)
    {
        std::cout<< vector[i][1] <<std::endl;
    }

    return 0;
}