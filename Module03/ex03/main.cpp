#include "DiamondTrap.hpp"

int main(void)
{
    // Test Parameterized Constructor and stats
    DiamondTrap diamond("Deetee");

    std::cout << "\n--- Testing Stats (should be 100/50/30) ---" << std::endl;
    diamond.beRepaired(0); // A way to show stats without changing them

    // Test whoAmI()
    std::cout << "\n--- Testing whoAmI() ---" << std::endl;
    diamond.whoAmI();

    // Test attack() (should be ScavTrap's)
    std::cout << "\n--- Testing attack() ---" << std::endl;
    diamond.attack("a poor fool");

    // Test parent-specific functions
    std::cout << "\n--- Testing Parent Functions ---" << std::endl;
    diamond.guardGate();
    diamond.highFivesGuys();

    // Test ClapTrap functions
    std::cout << "\n--- Testing ClapTrap Functions ---" << std::endl;
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.takeDamage(100); // Test "death"
    diamond.attack("another fool"); // Test attacking when dead

    // Test Copy Constructor and Assignment
    std::cout << "\n--- Testing Copying ---" << std::endl;
    DiamondTrap copy = diamond;
    DiamondTrap assign("ToAssign");
    
    std::cout << "--- Assigning ---" << std::endl;
    assign = diamond;
    std::cout << "--- Assignment done ---" << std::endl;

    std::cout << "\n--- Testing Copied whoAmI() ---" << std::endl;
    copy.whoAmI();

    std::cout << "\n--- Testing Assigned whoAmI() ---" << std::endl;
    assign.whoAmI();

    std::cout << "\n--- Destructors will run now ---" << std::endl;
    return 0;
}