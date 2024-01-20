#include "Form.hpp"

Form::Form() : name("default"), sign_grade(0), exec_grade(0)
{
	std::cout<< "Form Created." << std::endl;
	this->is_signed = 0;
}

Form::~Form()
{
	std::cout<< "Form Destroyed." << std::endl;
}

Form::Form(std::string nameIn, int sign_gradeIn) : name(nameIn), sign_grade(sign_gradeIn), exec_grade(0)
{
	std::cout<< "Form Created." << std::endl;
	this->is_signed = 0;
	if(sign_gradeIn < 1)
		throw GradeTooHighException();
	else if(sign_gradeIn > 150)
		throw GradeTooLowException();
	// else
		// this->sign_grade = sign_gradeIn;
}


Form::Form(Form const &copy)
{
	std::cout<< "Creating a copy of Form." << std::endl;
	*this = copy;
}

Form &Form::operator=(Form const &other)
{
	std::cout<< "Assigning a copy of Form." << std::endl;
	if(this != &other)
	{
		// copy your attributes here
	}
	return(*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIfSigned() const
{
	return (this->is_signed);
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecGrade() const
{
	return (this->exec_grade);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() <= 150 && bureaucrat.getGrade() >= 1)
		this->is_signed = true;
	else if(bureaucrat.getGrade() > 150)
		throw GradeTooLowException();	
}

std::ostream &operator<<(std::ostream& os, const Form &obj)
{
	os << obj.getName() << ".";
	return os;
}