#include "Zombie.hpp"

int main()
{
	randomChump("kenza");
	Zombie *fo =  newZombie("hannzo");
	fo->announce();
	delete fo;
}
