#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP
#include "Bureaucrat.hpp"

#include <iostream>

class Bureaucrat::GradeTooLowException : public std::exception
{
	public :
		const char* what(){
			return ("Grade is too high");
		}
};

#endif