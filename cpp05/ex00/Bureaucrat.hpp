#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat
{
	private :
		std::string const name;
		int grade;
	public :
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string const nameIn, int gradeIn);
		class GradeTooHighException;
		class GradeTooLowException;
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat &operator=(Bureaucrat const &other);
		std::string getName() const;
		int getGrade() const;
		void increaseGrade();
		void decreaseGrade();
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& obj);

// class GradeTooHighException : public std::exception
// {
// 	public :
// 		const char* what(){
// 			return ("Grade is too high");
// 		}
// };

// class GradeTooLowException : public std::exception
// {
// 	public :
// 		const char* what(){
// 			return ("Grade is too high");
// 		}
// };

#endif