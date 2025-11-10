#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class Diamondtrap : virtual public FragTrap, virtual public ScavTrap 
{
    std::string name;
    public :
    void whoAmI();

};


#endif