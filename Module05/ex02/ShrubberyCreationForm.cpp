#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.is_open() == false)
	{
		std::cerr << "Error : couldn't open input file" << std::endl; 
		return ;		
	}
    file << "              v .   ._, |_  .," << std::endl;
    file << "           `-._\\/  .  \\ /    |/_" << std::endl;
    file << "               \\  _\\, y | \\//" << std::endl;
    file << "         _\\_.___\\, \\/ -.||-" << std::endl;
    file << "           `7-,--.`._||  / / ," << std::endl;
    file << "           /'     `-. `./ / |/_." << std::endl;
    file << "                     |    |//" << std::endl;
    file << "                     |_    /" << std::endl;
    file << "                     |-   |" << std::endl;
    file << "                     |   =|" << std::endl;
    file << "                     |    |" << std::endl;
    file << "--------------------/ ,  . \\--------._" << std::endl;

    file.close();
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	AForm::operator=(other);
	if (this != &other)
		_target = other._target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target)
{}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137),
																		_target(target)
{}


ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}