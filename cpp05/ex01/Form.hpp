#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private :
		std::string const name;
		bool sign_status;
		int const sign_grade;
		int const exec_grade;
	public :
		Form();
		~Form();
		Form(std::string nameIn, int sign_gradeIn, int exec_gradeIn);
		Form(Form const &copy);
		Form &operator=(Form const &other);
		std::string getName() const;
		bool getIfSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception {
			public: virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, const Form &obj);

#endif