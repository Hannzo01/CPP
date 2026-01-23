#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <exception>
<<<<<<< HEAD
#include "AForm.hpp"
=======
#include <AForm.hpp>
>>>>>>> 203c00f3d20d3f960ceffb79d4c2912a65d7ae32
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        AForm* makePresidential(std::string target);
        AForm* makeRobotomy(std::string target);
        AForm* makeShrubbery(std::string target);
    public :
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string form_name, std::string form_target);
        class FormDoesntExist : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
};

#endif