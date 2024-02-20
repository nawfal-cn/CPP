#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    // std::string input = av[1];

    if(ac == 2){ScalarConverter::convert(av[1]); return 0;}

    else if(ac < 2) {std::cerr<< "Too few arguments!" << std::endl; return -1;}
    
    else if(ac > 2) {std::cerr<< "Too much argements, only one accepted!" << std::endl; return -1;}
}