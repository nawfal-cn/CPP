#include "Form.hpp"

Form::Form() : name("Default"), sign_status(false), sign_grade(0), exec_grade(0)
{
	std::cout<< "Form Created." << std::endl;
}

Form::~Form()
{
	std::cout<< "Form Destroyed." << std::endl;
}

Form::Form(std::string nameIn, int sign_gradeIn, int exec_gradeIn)
	: name(nameIn), sign_status(false), sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
{
	std::cout<< "Form Created." << std::endl;
	if(sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if(sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}


Form::Form(Form const &copy, int sign_gradeIn, int exec_gradeIn)
	: sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
{
	std::cout<< "Creating a copy of Form." << std::endl;
	*this = copy;
}

Form &Form::operator=(Form const &other)
{
	std::cout<< "Assigning a copy of Form." << std::endl;
	if(this != &other)
	{
		this->sign_status = other.sign_status;
	}
	return(*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIfSigned() const
{
	return (this->sign_status);
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
		this->sign_status = true;
	else if(bureaucrat.getGrade() > 150)
		throw GradeTooLowException();	
}

std::ostream &operator<<(std::ostream& os, const Form &obj)
{
	os << "Form: " << obj.getName() << "." << std::endl
	   << "Signed: " << (obj.getIfSigned() ? "yes" : "no") << "." << std::endl
	   << "Grade to sign: " << obj.getSignGrade() << "." << std::endl
	   << "Grade to execute " << obj.getExecGrade() << ".";
	return os;
}