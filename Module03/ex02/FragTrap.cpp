#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default constructor is called " << std::endl;
	_Hit_points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{//pas beosin dinitialiser name psk le pere a fait
	std::cout << "Constructor is called " << std::endl;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor is called" << std::endl;
	// C'est tout ! Le parent a tout fait. 
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Copy assignmenet operator is called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other); // le parent va tous initlialiser
	return *this;
}

FragTrap::~FragTrap() 
{
	std::cout << "Destructor is called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
