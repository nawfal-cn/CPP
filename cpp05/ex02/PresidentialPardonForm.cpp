#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
		: AForm("PresidentialPardonForm", 25, 5), target("Default")
{
	std::cout<< "PresidentialPardonForm Created." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<< "PresidentialPardonForm Destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string &targetIn)
		: AForm("PresidentialPardonForm", 25, 5), target(targetIn)
{
	std::cout<< "PresidentialPardonForm Created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
{
	std::cout<< "Creating a copy of PresidentialPardonForm." << std::endl;
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	std::cout<< "Assigning a copy of PresidentialPardonForm." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}
