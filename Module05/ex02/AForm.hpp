#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
class Bureaucrat; // Je te promets que cette classe existe
#include <string>

class AForm
{
	private :
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;
	public :
		AForm();
        AForm(const std::string name, int signGrade, int execGrade);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

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
		class FormNotSigned : public std::exception
		{
			public :
				virtual const char* what() const throw(){
					return "FormNotSigned";
			}
		};
		void        beSigned(const Bureaucrat& b);
		virtual void execute(Bureaucrat const & executor)const  = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);


#endif