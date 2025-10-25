#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " Get destroyed <skill issue>" << std::endl;
}

void Zombie::annouce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
