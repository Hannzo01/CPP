#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main()
{
    // TEST 1 : CA MARCHE
    std::cout << "--- TEST 1 : Success ---" << std::endl;
    try{
        Bureaucrat b1(1, "Kenza");
        Form f1("Contrat CDI", 50, 50); // Grade 50 requis
        
        std::cout << b1;
        std::cout << f1;
        
        b1.signForm(f1); // Kenza (1) peut signer (50)
        std::cout << f1; // Doit être "is signed"
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    // TEST 2 : CA RATE (Grade insuffisant)
    std::cout << "\n--- TEST 2 : Failure ---" << std::endl;
    try{
        Bureaucrat b2(100, "Stagiaire");
        Form f2("Code Nucleaire", 1, 1); // Grade 1 requis
        
        std::cout << b2;
        std::cout << f2;

        b2.signForm(f2); // Stagiaire (100) essaie de signer (1) -> ECHEC
        // Ici, le programme ne doit PAS crasher, il doit afficher le message d'erreur du bureaucrate
    }
    catch (std::exception& e)
    {
        std::cout << "Main catch: " << e.what() << std::endl;
    }
}