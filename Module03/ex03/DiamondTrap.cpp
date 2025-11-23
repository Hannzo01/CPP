#include "DiamondTrap.hpp"

//purpose : to prove you can manage two different variables
// that happen to have the same name (_name) at different levels of inheritance.
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is: " << _name << std::endl;
    std::cout << "ClapTrap name is: " << ClapTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _name = "Default";
    _Hit_points = 100;    // FragTrap's default HP
    _Energy_points = 50;  // ScavTrap's default Energy
    _Attack_damage = 30;  // FragTrap's default Attack
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    _name = name;
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 30;
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Destructor is called" << std::endl;
}
    
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap Copy constructor is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap Copy assignmenet operator is called" << std::endl;
	if (this == &other)
		return *this;
    ClapTrap::operator=(other);
	_name = other._name;
	return *this;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}