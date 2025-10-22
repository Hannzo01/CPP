#include <iostream>
#include "Zombie.hpp"
#include <memory>

Zombie* newZombie( std::string name )
{
	Zombie *small;
	small = new Zombie(name);
	return small;
}