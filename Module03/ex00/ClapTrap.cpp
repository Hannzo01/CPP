#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int health;
	if (_Hit_points <= 0 || _Energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself" << std::endl;
		return ;
	}
	health = amount + (unsigned int)_Hit_points; // to avoid overflow if i cast amount to int and someone past a very large value
	if (health > 10)
		_Hit_points = 10;
	else
		_Hit_points = health;
	_Energy_points = _Energy_points - 1;
	std::cout << "ClapTrap " << _name << " is healed and now he has " << _Hit_points << " HP"<< std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{ 
	if (_Hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;	
	}
	if (amount >= (unsigned int)_Hit_points)
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " amount of damage and he died"<< std::endl;
		_Hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " amount of damage"<< std::endl;
		_Hit_points = _Hit_points - amount;
	}
}

void ClapTrap::attack(const std::string& target)
{
	if (_Hit_points > 0 && _Energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _Attack_damage << " points of damage!" << std::endl;
		_Energy_points = _Energy_points - 1;
	}
	else
		std::cout << "ClapTrap Can’t do anything; no hit points or energy points are left" << std::endl;
}

ClapTrap::ClapTrap() : _name("Unknown"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap Default constructor is called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Claptrap Parameterized Constructor is called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _Hit_points(other._Hit_points), _Energy_points(other._Energy_points), _Attack_damage(other._Attack_damage)
{
	std::cout << "ClapTrap Copy constructor is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy assignmenet operator is called" << std::endl;
	if (this == &other)
		return *this;
	_name = other._name;
	_Hit_points = other._Hit_points;
	_Energy_points = other._Energy_points;
	_Attack_damage = other._Attack_damage;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor is called" << std::endl;
}