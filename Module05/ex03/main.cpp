#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int main()
{
    Intern  someRandomIntern;
    AForm* rrf;
    Bureaucrat boss(1, "kenza");

    // ---------------------------------------------------
    // TEST 1: SUCCESS (Robotomy Request)
    // ---------------------------------------------------
    std::cout << "--- TEST 1: Intern creates a valid form ---" << std::endl;
    try 
    {
        // "robotomy request" matches your array in Intern.cpp
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        std::cout << "-------" << std::endl;
        // Prove it exists by printing it
        std::cout << "Success: Created " << rrf->getName() << std::endl;
        
        // CLEANUP: Intern creates it with 'new', YOU must delete it.
        delete rrf; 
    }
    catch (std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 2: SUCCESS (Checking your specific naming)
    // ---------------------------------------------------
    // Note: In your code you wrote "shrubberycreation" (no space).
    // Usually strict 42 correction requires "shrubbery creation".
    // I am testing YOUR string here.
    std::cout << "\n--- TEST 2: Intern creates another form ---" << std::endl;
    try 
    {
        rrf = someRandomIntern.makeForm("shrubberycreation", "Garden");
        std::cout << "Success: Created " << rrf->getName() << std::endl;
        delete rrf;
    }
    catch (std::exception &e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 3: FAILURE (Form does not exist)
    // ---------------------------------------------------
    std::cout << "\n--- TEST 3: Intern tries to create a fake form ---" << std::endl;
    try 
    {
        // This should throw 'FormDoesntExist'
        rrf = someRandomIntern.makeForm("coffee request", "Boss");
        
        // This line should NOT run
        std::cout << "This should not print!" << std::endl; 
        delete rrf;
    }
    catch (std::exception &e) 
    {
        std::cout << "Caught expected error: " << e.what() << std::endl;
    }

    return 0;
}