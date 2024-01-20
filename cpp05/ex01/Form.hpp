#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
	private :
		std::string const name;
		bool is_signed;
		int const sign_grade;
		int const exec_grade;
	public :
		Form();
		~Form();
		Form(std::string nameIn, int sign_gradeIn);
		Form(Form const &copy);
		Form &operator=(Form const &other);
		std::string getName() const;
		bool getIfSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception {
			public: virtual const char* what() const throw() { return "Grade is too high"; }
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Grade is too low"; }
		};
};

std::ostream &operator<<(std::ostream& os, const Form &obj);

#endif