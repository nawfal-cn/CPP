#include "AForm.hpp"

AForm::AForm() : name("Default"), sign_status(false), sign_grade(0), exec_grade(0)
{
	std::cout<< "AForm Created." << std::endl;
}

AForm::~AForm()
{
	std::cout<< "AForm Destroyed." << std::endl;
}

AForm::AForm(std::string nameIn, int sign_gradeIn, int exec_gradeIn)
	: name(nameIn), sign_status(false), sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
{
	std::cout<< "AForm Created." << std::endl;
	if(sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if(sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}


AForm::AForm(AForm const &copy, int sign_gradeIn, int exec_gradeIn)
	: sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
{
	std::cout<< "Creating a copy of AForm." << std::endl;
	*this = copy;
}

AForm &AForm::operator=(AForm const &other)
{
	std::cout<< "Assigning a copy of AForm." << std::endl;
	if(this != &other)
	{
		this->sign_status = other.sign_status;
	}
	return(*this);
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getIfSigned() const
{
	return (this->sign_status);
}

int AForm::getSignGrade() const
{
	return (this->sign_grade);
}

int AForm::getExecGrade() const
{
	return (this->exec_grade);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() <= 150 && bureaucrat.getGrade() >= 1)
		this->sign_status = true;
	else if(bureaucrat.getGrade() > 150)
		throw GradeTooLowException();	
}

std::ostream &operator<<(std::ostream& os, const AForm &obj)
{
	os << "AForm: " << obj.getName() << "." << std::endl
	   << "Signed: " << (obj.getIfSigned() ? "yes" : "no") << "." << std::endl
	   << "Grade to sign: " << obj.getSignGrade() << "." << std::endl
	   << "Grade to execute " << obj.getExecGrade() << ".";
	return os;
}