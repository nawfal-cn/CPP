#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(0) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const nameIn, int gradeIn) : name(nameIn)
{
	if(gradeIn < 1)
		throw GradeTooLowException();
	else if(gradeIn > 150)
		throw GradeTooLowException();
	else
		this->grade = gradeIn;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if(this != &other)
	{
		this->grade = other.grade;
	}
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increaseGrade()
{
	if(this->grade == 1)
		throw GradeTooHighException();
	else	
		this->grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
	if(this->grade == 150)
		throw GradeTooLowException();
	else	
		this->grade += 1;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return os;
}