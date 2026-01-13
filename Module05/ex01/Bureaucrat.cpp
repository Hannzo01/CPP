#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), grade(150)
{}

// mknbdloch smiya kenza rtb0a kenza wlk rtwli grade 1 dyal said
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

void	Bureaucrat::IncrementGrade()
{
	if (grade - 1 < 1) // ncheck b3da ila kan rykon 0 nthrowi error mmchi tnkhlih wla 0 had ntrhowi error o ryb9a 3aych lia b 0 grade
		throw GradeTooHighException();
	grade--;
}
	
void	Bureaucrat::DecrementGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

Bureaucrat::Bureaucrat(int gradevalue, const std::string name) : _name(name)
{
	if (gradevalue > 150)
		throw GradeTooLowException();
	else if (gradevalue < 1)
		throw GradeTooHighException();
	grade = gradevalue;

}

void	Bureaucrat::signForm(Form& f)
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

std::ostream& operator<<(std::ostream& c,const Bureaucrat &b)
{
	c << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return c;
}
