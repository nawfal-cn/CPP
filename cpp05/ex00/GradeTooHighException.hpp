#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP
#include "Bureaucrat.hpp"

#include <iostream>

class Bureaucrat::GradeTooHighException : public std::exception
{
	public :
		const char* what(){
			return ("Grade is too high");
		}
};

#endif