#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <ctime>

class Bureaucrat;

class AForm
{
	private :
		std::string const name;
		bool sign_status;
		int const sign_grade;
		int const exec_grade;
	public :
		AForm();
		virtual ~AForm();
		AForm(std::string nameIn, int sign_gradeIn, int exec_gradeIn);
		AForm(AForm const &copy, int sign_gradeIn, int exec_gradeIn);
		AForm &operator=(AForm const &other);
		std::string getName() const;
		bool getIfSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception {
			public: virtual const char* what() const throw() { return "Grade is too high"; }
		};
		class GradeTooLowException : public std::exception {
			public: virtual const char* what() const throw() { return "Grade is too low"; }
		};
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream& os, const AForm &obj);

#endif