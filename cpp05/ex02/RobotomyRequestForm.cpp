#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
		: AForm("Robotomy Request", 72, 45), target("Default") {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string targetIn)
		: AForm("Robotomy Request", 72, 45), target(targetIn) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if(this != &other)
	{
		this->target = other.target;
	}
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(getIfSigned() && executor.getGrade() <= getExecGrade())
	{
		srand(time(0));
		std::cout << "Drilling noises..." << std::endl;
		if (rand() % 2 == 0) {
			std::cout << target << " has been robotomized successfully!" << std::endl;
		} else {
			std::cout << "Robotomy failed for " << target << "." << std::endl;
		}
    }
	else
		throw GradeTooLowException();
}