#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
    if (this->getIsSigned() == false)
        throw AForm::FormNotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// Constructeur de Copie
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), _target(other._target)
{
}

// Opérateur d'affectation (=)
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        // Important : On appelle l'opérateur = du parent pour gérer _isSigned
        AForm::operator=(other); 
        // Ensuite on gère notre attribut
        _target = other._target;
    }
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",25, 5){}



PresidentialPardonForm::~PresidentialPardonForm(){}