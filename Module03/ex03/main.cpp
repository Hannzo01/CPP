#include "DiamondTrap.hpp"

int main()
{
    std::cout << "--- Construction ---" << std::endl;
    DiamondTrap d("Monster");
    std::cout << std::endl;

    std::cout << "--- Identity (Diamond) ---" << std::endl;
    d.whoAmI();
    std::cout << std::endl;

    std::cout << "--- Inherited Actions ---" << std::endl;
    d.attack("Target");      // Vient de ScavTrap
    d.guardGate();           // Vient de ScavTrap
    d.highFivesGuys();       // Vient de FragTrap
    std::cout << std::endl;

    std::cout << "--- Destruction ---" << std::endl;
    return 0;
}