#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), grade(150)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), grade(other.grade){}

Bureaucrat::~Bureaucrat(){}

int		Bureaucrat::getGrade() const 
{
	return grade;
}

std::string		Bureaucrat::getName() const 
{
	return _name;
}

void	Bureaucrat::incrementGrade()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}
	
void	Bureaucrat::decrementGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

Bureaucrat::Bureaucrat(const std::string name, int gradevalue) : _name(name)
{
	if (gradevalue > 150)
		throw GradeTooLowException();
	else if (gradevalue < 1)
		throw GradeTooHighException();
	grade = gradevalue;

}

void	Bureaucrat::signForm(AForm& f)
{
	try 
	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;		
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& c,const Bureaucrat &b)
{
	c << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return c;
}
