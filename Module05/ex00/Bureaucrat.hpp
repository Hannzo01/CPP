#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	const	std::string _name;
	int		grade;

	public :

		int	getGrade() const;
		std::string getName() const;

		void	IncrementGrade();
		void	DecrementGrade();

		Bureaucrat();
		Bureaucrat(int gradevalue, const std::string name);
		Bureaucrat& operator=(const Bureaucrat& other);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw(){
					return "GradeTooLow";
				}

		};
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw(){
					return "GradeTooHigh";
				}

		};
};

std::ostream& operator<<(std::ostream& cout,const Bureaucrat &b);

#endif