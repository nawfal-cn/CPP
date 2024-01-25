#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
		: AForm("ShrubberyCreationForm", 145, 137), target("Default") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targetIn)
		: AForm("ShrubberyCreationForm", 145, 137), target(targetIn) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(getIfSigned() && executor.getGrade() <= getExecGrade())
	{
		std::ofstream file((target + "_shrubbery").c_str());
		if (file.is_open()) {
			file << "ASCII Trees" << std::endl;
			file << "   *   " << std::endl;
			file << "  ***  " << std::endl;
			file << " ***** " << std::endl;
			file << "*******" << std::endl;
			file << "   |   " << std::endl;
			file.close();
		} else {
			throw std::runtime_error("Failed to open file for Shrubbery Creation");
		}
	}
	else
		throw GradeTooLowException();
}