#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat; // Je te promets que cette classe existe
#include <string>

class Form
{
	private :
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;
	public :
		Form();
        Form(const std::string name, int signGrade, int execGrade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        bool        getIsSigned() const;
        int         getSignGrade() const;
        int         getExecuteGrade() const;
        std::string getName() const;

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
		void        beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& f);


#endif