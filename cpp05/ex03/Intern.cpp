#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern &Intern::operator=(Intern const &other)
{
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *form = NULL;
	std::string names[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int i = 0;
	for(i = 0; i < 3 ; i++)
		if(names[i] == formName)
			break;

	switch (i)
	{
		case 0: form = new ShrubberyCreationForm(formTarget) ; break;
		case 1: form = new RobotomyRequestForm(formTarget) ; break;
		case 2: form = new PresidentialPardonForm(formTarget) ; break;
		
		default: throw UnknownFormName();
	}
	std::cout<< "Intern creates " << formName << std::endl;
}