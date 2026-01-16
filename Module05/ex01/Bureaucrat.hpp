#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Form;

class Bureaucrat
{
	const	std::string _name;
	int		grade;

	public :

		int	getGrade() const;
		std::string getName() const;

		void	incrementGrade();
		void	decrementGrade();

		Bureaucrat();
		Bureaucrat(const std::string name, int gradevalue);
		Bureaucrat& operator=(const Bureaucrat& other);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		void	signForm(Form& f);
};


std::ostream& operator<<(std::ostream& cout,const Bureaucrat &b);

#endif