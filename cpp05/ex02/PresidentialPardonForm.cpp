#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
		: AForm("Presidential Pardon", 25, 5), target("Default") {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string targetIn)
		: AForm("Presidential Pardon", 25, 5), target(targetIn) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if(this != &other)
	{
		this->target = other.target;
	}
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(getIfSigned() && executor.getGrade() <= getExecGrade())
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw GradeTooLowException();
}
