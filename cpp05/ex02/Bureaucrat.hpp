#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat
{
	private :
		std::string const name;
		int grade;
	public :
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string const nameIn, int gradeIn);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat &operator=(Bureaucrat const &other);
		std::string getName() const;
		int getGrade() const;
		void increaseGrade();
		void decreaseGrade();
		void signForm(AForm &form);
		class GradeTooHighException : public std::exception {
			public: virtual const char* what() const throw() { return "Grade is too high"; }
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Grade is too low"; }
		};
		void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& obj);

#endif