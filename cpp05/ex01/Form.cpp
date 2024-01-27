#include "Form.hpp"

Form::Form() : name("Default"), sign_status(false), sign_grade(150), exec_grade(150) {}
Form::~Form() {}

Form::Form(std::string nameIn, int sign_gradeIn, int exec_gradeIn)
	: name(nameIn), sign_status(false), sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
{
	if(sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if(sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}


Form::Form(Form const &copy) : sign_grade(getSignGrade()), exec_grade(getExecGrade())
{
	*this = copy;
}

Form &Form::operator=(Form const &other)
{
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

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() <= this->getSignGrade())
		this->sign_status = true;
	else
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