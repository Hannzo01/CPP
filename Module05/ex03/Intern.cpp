#include "Intern.hpp"

AForm* Intern::makePresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::makeShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

Intern::Intern(){}

Intern::Intern(const Intern& other)
{   (void) other;}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return (*this);
}

Intern::~Intern()
{}

const char* Intern::FormDoesntExist::what() const throw()
{
    return "Form doesn't exist" ;
}


// Type: AForm* (Intern::*)(std::string)
// Pointeur vers une fonction de Intern prenant une string et renvoyant un AForm*"
AForm* Intern::makeForm(std::string form_name, std::string form_target)
{
    std::string form_names[] = {"robotomy request", "shrubbery creation", "presidential pardon"};

    AForm* (Intern::*ptrft[])(std::string) = {&Intern::makeRobotomy, 
                                            &Intern::makeShrubbery,
                                            &Intern::makePresidential};

    for (int i = 0; i < 3; i++)
    {
        if (form_name == form_names[i])
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return (this->*ptrft[i])(form_target);
        } //ila kant ft statque kndiro ra ptrft[i](form_target)
    }
    std::cout << "Intern cannot create " << form_name << std::endl;
    throw FormDoesntExist();
}



// brute force approach

// AForm* Intern::makeForm(std::string form_name, std::string form_target)
// {
//     if (form_name == "robotomy request")
//     {
//         std::cout << "Intern creates" << form_name;
//         return new RobotomyRequestForm(form_target);
//     }
//     else if (form_name == "shrubberycreation")
//     {
//         std::cout << "Intern creates" << form_name;
//         return new ShrubberyCreationForm(form_target);
//     }
//     else if (form_name == "presidentialpardon")
//     {
//         std::cout << "Intern creates" << form_name;
//         return new PresidentialPardonForm(form_target);
//     }
//     else
//     {
//         std::cout << "Intern couldnt create the form";
//         throw FormDoesntExist();
//     }
// }