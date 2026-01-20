#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
	public:
	PresidentialPardonForm(); //on ne doit pas le pouvoir cree sans target
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor)const;
};



#endif