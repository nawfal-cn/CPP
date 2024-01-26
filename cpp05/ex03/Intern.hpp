#ifndef INTERN_HPP
#define INTERN_HPP

// #include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <stdexcept>


class Intern
{
	private :
		// put your private attributes here
	public :
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern &operator=(Intern const &other);
		AForm *makeForm(std::string name, std::string target);
		class UnknownFormName : public std::exception {
			public : virtual const char* what() const throw() { return"Unknown form name"; }
		};
};

#endif