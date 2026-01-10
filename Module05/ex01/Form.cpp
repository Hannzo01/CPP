#include "Bureaucrat.hpp"
#include "Form.hpp"

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _signGrade) 
        throw GradeTooLowException();
    _isSigned = true;
}


Form& Form::operator=(const Form& other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}


Form::Form(const Form& other) : _name(other._name),
								 _isSigned(false),
								_signGrade(other._signGrade),
								_execGrade(other._execGrade)
{}

Form::Form(const std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150)
		throw GradeTooLowException();
	if (execGrade < 1)
		throw GradeTooHighException();
	if (execGrade > 150)
		throw GradeTooLowException();
}

Form::Form() : _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150)
{}

Form::~Form()
{}



bool Form::getIsSigned() const
{
	return _isSigned;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

int  Form::getExecuteGrade() const
{
	return _execGrade;
}


std::string Form::getName() const
{
	return _name;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	if (f.getIsSigned() == true)
	{
		os << "The form named " << f.getName() << " is signed." << "Grade " << f.getSignGrade()
		<< " is needed to be signed and grade " << f.getExecuteGrade() << " is need to be executed" << std::endl;
	}
	else
	{
		os << "The form named " << f.getName() << " isn't signed." << "Grade " << f.getSignGrade()
	<< " is needed to be signed and grade " << f.getExecuteGrade() << " is need to be executed" << std::endl;
	}
	return os;
}