#include "MutantStack.hpp"

int main()
{
    std::cout<<"------------------first test-------------------"<<std::endl;

    MutantStack<int> ms;
    std::deque<int>::iterator iter;

    for(size_t i = 0; i < 10; i++)
        ms.push(i);

    std::cout<< "All elements: ";
    for(iter = ms.begin(); iter != ms.end(); iter++)
        std::cout<< *iter << " ";
    std::cout<< std::endl;

    iter = ms.begin();
    std::cout<<"first element in stack: "<< *iter <<std::endl;

    iter = ms.end() - 1;
    std::cout<<"last element in stack: "<< *iter <<std::endl;

    std::cout<<"------------------second test------------------"<<std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout<<"-----------------------------------------------"<<std::endl;
    return 0;
}