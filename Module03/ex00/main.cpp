#include "ClapTrap.hpp"

int main()
{
    std::cout << "--- ClapTrap Construction ---" << std::endl;
    ClapTrap attacker("atta");
    std::cout << std::endl;

    std::cout << "--- Second ClapTrap Construction ---" << std::endl;
    ClapTrap defender("defen"); 
    std::cout << std::endl;

    std::cout << "--- Battle / Actions ---" << std::endl;
    attacker.attack("defen");

    defender.takeDamage(0); 
    defender.attack("atta");
    
    attacker.takeDamage(9);
    attacker.beRepaired(2);
    
    attacker.takeDamage(100);
    
    attacker.attack("defen");
    attacker.beRepaired(10);
    std::cout << std::endl;

    std::cout << "--- (Destructions) ---" << std::endl;
    return 0;
}