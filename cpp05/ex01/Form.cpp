#include "Form.hpp"

Form::Form() : name("Default"), sign_status(false), sign_grade(0), exec_grade(0) {}

Form::~Form() {}

Form::Form(std::string nameIn, int sign_gradeIn, int exec_gradeIn)
	: name(nameIn), sign_status(false), sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
{
	if(sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if(sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}


Form::Form(Form const &copy, int sign_gradeIn, int exec_gradeIn)
	: sign_grade(sign_gradeIn), exec_grade(exec_gradeIn)
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