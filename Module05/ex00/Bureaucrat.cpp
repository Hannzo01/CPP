#include "Bureaucrat.hpp"

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
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too High!";
}
std::ostream& operator<<(std::ostream& c,const Bureaucrat &b)
{
	c << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return c;
}