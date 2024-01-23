#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
		: AForm("RobotomyRequestForm", 72, 45), target("Default")
{
	std::cout<< "RobotomyRequestForm Created." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<< "RobotomyRequestForm Destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string &targetIn)
		: AForm("RobotomyRequestForm", 72, 45), target(targetIn)
{
	std::cout<< "RobotomyRequestForm Created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
	std::cout<< "Creating a copy of RobotomyRequestForm." << std::endl;
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	std::cout<< "Assigning a copy of RobotomyRequestForm." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}
