#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "--- ClapTrap Construction ---" << std::endl;
    ClapTrap attacker("yoru");
    std::cout << std::endl;

    std::cout << "--- ScavTrap Construction ---" << std::endl;
    ScavTrap defender("yasuo");
    std::cout << std::endl;

    std::cout << "--- Battle / Actions ---" << std::endl;
    attacker.attack("yasuo");
    defender.attack("yoru");
    
    attacker.takeDamage(9);
    attacker.beRepaired(2);
    
    defender.takeDamage(1);
    attacker.takeDamage(100);
    defender.beRepaired(10);
    
    attacker.attack("yasuo");
    defender.attack("yoru");
    std::cout << std::endl;

    std::cout << "--- Special Function (GateKeeper) ---" << std::endl;
    defender.guardGate();
    std::cout << std::endl;

    std::cout << "--- (Destructions) ---" << std::endl;
    return 0;
}