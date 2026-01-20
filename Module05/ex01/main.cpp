#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main()
{
    std::cout << "--- TEST 1 : Success ---" << std::endl;
    try{
        Bureaucrat b1("Kenza", 1);
        Form f1("Contrat CDI", 50, 50);
        
        std::cout << b1;
        std::cout << f1;
        
        b1.signForm(f1);
        std::cout << f1;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 2 : Failure ---" << std::endl;
    try{
        Bureaucrat b2("hannzo", 100);
        Form f2("CDD", 1, 1);
        
        std::cout << b2;
        std::cout << f2;

        b2.signForm(f2);
    }
    catch (std::exception& e)
    {
        std::cout << "Main catch: " << e.what() << std::endl;
    }
}