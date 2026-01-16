#include "Bureaucrat.hpp"
#include "AForm.hpp"

void AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _signGrade) 
        throw GradeTooLowException();
    _isSigned = true;
}


AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}


AForm::AForm(const AForm& other) : _name(other._name),
								 _isSigned(false),
								_signGrade(other._signGrade),
								_execGrade(other._execGrade)
{}

AForm::AForm(const std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
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

AForm::AForm() : _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150)
{}

AForm::~AForm()
{}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

int AForm::getSignGrade() const
{
	return _signGrade;
}

int  AForm::getExecuteGrade() const
{
	return _execGrade;
}


std::string AForm::getName() const
{
	return _name;
}

const char* AForm::FormNotSigned::what() const throw()
{
	return "FormNotSigned";
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	if (f.getIsSigned() == true)
	{
		os << "The Form named " << f.getName() << " is signed." << "Grade " << f.getSignGrade()
		<< " is needed to be signed and grade " << f.getExecuteGrade() << " is need to be executed" << std::endl;
	}
	else
	{
		os << "The Form named " << f.getName() << " isn't signed." << "Grade " << f.getSignGrade()
	<< " is needed to be signed and grade " << f.getExecuteGrade() << " is need to be executed" << std::endl;
	}
	return os;
}
