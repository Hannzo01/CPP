#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	name = _name;
}
void Zombie::announce(void)
{
	std::cout << _name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}
