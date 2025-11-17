#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor is called " << std::endl;
	_Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{//pas beosin dinitialiser name psk le pere a fait
	std::cout << "ScavTrap Constructor is called " << std::endl;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor is called" << std::endl;
	// C'est tout ! Le parent a tout fait. 
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assignmenet operator is called" << std::endl;
	ClapTrap::operator=(other); // le parent va tous initlialiser
	return *this;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap Destructor is called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_Hit_points > 0 && _Energy_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _Attack_damage << " points of damage!" << std::endl;
		_Energy_points = _Energy_points - 1;
	}
	else
		std::cout << "ScavTrap Can’t do anything; no hit points or energy points are left" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode"<< std::endl;
}