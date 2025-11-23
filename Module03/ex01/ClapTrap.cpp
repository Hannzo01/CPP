#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int health;
	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself" << std::endl;
		return ;
	}
	health = amount + (unsigned int)_hit_points;
	_hit_points = health;
	_energy_points = _energy_points - 1;
	std::cout << "ClapTrap " << _name << " is healed and now he has " << _hit_points << " HP"<< std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{ 
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;	
	}
	if (amount >= (unsigned int)_hit_points)
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " amount of damage and he died"<< std::endl;
		_hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " amount of damage"<< std::endl;
		_hit_points = _hit_points - amount;
	}
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points = _energy_points - 1;
	}
	else
		std::cout << "ClapTrap Can’t do anything; no hit points or energy points are left" << std::endl;
}

ClapTrap::ClapTrap() : _name("Unknown"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor is called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Claptrap Constructor is called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap Copy constructor is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy assignment operator  is called" << std::endl;
	if (this == &other)
		return *this;
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor is called" << std::endl;
}