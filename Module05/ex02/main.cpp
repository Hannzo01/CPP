#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>

int main()
{
    // TEST 1 : ShrubberyCreationForm (sign: 145, exec: 137)
    std::cout << "=== TEST 1: ShrubberyCreationForm ===" << std::endl;
    try {
        Bureaucrat lowGrade("LowGrade", 140);
        ShrubberyCreationForm shrubbery("home");
        
        std::cout << lowGrade;
        std::cout << shrubbery;
        
        lowGrade.signForm(shrubbery);
        lowGrade.executeForm(shrubbery);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // TEST 2 : RobotomyRequestForm (sign: 72, exec: 45)
    std::cout << "\n=== TEST 2: RobotomyRequestForm ===" << std::endl;
    try {
        Bureaucrat midGrade("MidGrade", 40);
        RobotomyRequestForm robotomy("Bender");
        
        std::cout << midGrade;
        std::cout << robotomy;
        
        midGrade.signForm(robotomy);
        midGrade.executeForm(robotomy);
        midGrade.executeForm(robotomy); // Test again to see 50% failure
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // TEST 3 : PresidentialPardonForm (sign: 25, exec: 5)
    std::cout << "\n=== TEST 3: PresidentialPardonForm ===" << std::endl;
    try {
        Bureaucrat highGrade("HighGrade", 1);
        PresidentialPardonForm pardon("Arthur Dent");
        
        std::cout << highGrade;
        std::cout << pardon;
        
        highGrade.signForm(pardon);
        highGrade.executeForm(pardon);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // TEST 4 : Execute without signing
    std::cout << "\n=== TEST 4: Execute without signing ===" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm unsigned_form("test");
        
        std::cout << boss;
        boss.executeForm(unsigned_form); // Should fail - not signed
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // TEST 5 : Grade too low to execute
    std::cout << "\n=== TEST 5: Grade too low to execute ===" << std::endl;
    try {
        Bureaucrat lowBureaucrat("LowBureaucrat", 146);
        Bureaucrat highBureaucrat("HighBureaucrat", 1);
        ShrubberyCreationForm form("garden");
        
        highBureaucrat.signForm(form); // High grade signs it
        lowBureaucrat.executeForm(form); // Low grade tries to execute - should fail
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}