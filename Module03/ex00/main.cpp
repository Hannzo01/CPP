#include "ClapTrap.hpp"

int main()
{
    std::cout << "--- ClapTrap Construction ---" << std::endl;
    ClapTrap attacker("yoru");
    std::cout << std::endl;

    std::cout << "--- Actions ---" << std::endl;
    attacker.attack("yasuo");
    attacker.takeDamage(9);
    attacker.beRepaired(2);
    
    attacker.takeDamage(1);
    attacker.beRepaired(10);
    std::cout << std::endl;

    std::cout << "--- (Destructions) ---" << std::endl;
    return 0;
}