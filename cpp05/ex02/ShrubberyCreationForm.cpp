#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
		: AForm("ShrubberyCreationForm", 145, 137), target("Default")
{
	std::cout<< "ShrubberyCreationForm Created." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<< "ShrubberyCreationForm Destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &targetIn)
		: AForm("ShrubberyCreationForm", 145, 137), target(targetIn)
{
	std::cout<< "ShrubberyCreationForm Created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
	std::cout<< "Creating a copy of ShrubberyCreationForm." << std::endl;
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	std::cout<< "Assigning a copy of ShrubberyCreationForm." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}
