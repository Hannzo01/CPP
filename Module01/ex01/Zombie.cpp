#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " Get destroyed <skill issue>" << std::endl;
}

void Zombie::annouce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string zombie_name)
{
	name = zombie_name;
}
