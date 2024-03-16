#include "Span.hpp"

int main()
{
    std::cout << "---------------first test--------------" << std::endl;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::length_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "---------------second test--------------" << std::endl;

    try
    {
        Span sp = Span(20);

        sp.fillSpan(5, 1000);
        sp.printSpan();

        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::length_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------------------------------" << std::endl;
    
    return 0;
}