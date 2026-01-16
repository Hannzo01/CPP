#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (getIsSigned() == false)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	
	std::cout << "AAAaaaaAAAaaaaAAA..." << std::endl;
	int chance =  std::rand() % 2;
	if (chance == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << " the robotomy failed." << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other )
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}