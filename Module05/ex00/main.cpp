#include "Bureaucrat.hpp"

int main()
{
    // ---------------------------------------------------
    // TEST 1 : CONSTRUCTION VALIDE
    // ---------------------------------------------------
    std::cout << "--- Test 1: Valid Constructors ---" << std::endl;
    try {
        Bureaucrat b1(1, "Kenza"); // Cette 'b' naît ici...
        std::cout << b1; // Utilise ton operator<<
    }// ... et elle MEURT ici (destructeur appelé).
    catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat b2(2, "Hannzo");
        std::cout << b2;
    }
    catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 2 : CONSTRUCTION INVALIDE (Trop Haut)
    // ---------------------------------------------------
    std::cout << "\n--- Test 2: Invalid Grade (0) ---" << std::endl;
    try {
        // Objet temporaire, juste pour voir si ça throw
        Bureaucrat(0, "Danzo"); 
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
	/*Quand tu fais catch(std::exception& e), tu attrapes le "parent". Mais quand tu appelles e.what(), le C++ regarde 
	l'objet réel qui est derrière (l'enfant) et exécute ta version du message.*/
    catch (std::exception & e) {
        std::cout << "Catch : " << e.what() << std::endl;
    }
	/*✅ catch (std::exception & e) -> Garde le lien avec l'enfant (Polymorphisme activé).

❌ catch (std::exception e) -> Coupe l'enfant et ne garde que la partie parent (Slicing). Tu perdrais ton message.*/

    // ---------------------------------------------------
    // TEST 3 : CONSTRUCTION INVALIDE (Trop Bas)
    // ---------------------------------------------------
    std::cout << "\n--- Test 3: Invalid Grade (151) ---" << std::endl;
    try {
        Bureaucrat(151, "Kannzo");
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "Catch global: " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 4 : INCREMENTATION (Limite 1 -> 0)
    // ---------------------------------------------------
    std::cout << "\n--- Test 4: Increment Limit ---" << std::endl;
    try {
        Bureaucrat b(2, "Worker");
        std::cout << "Before: " << b;
        
        b.IncrementGrade(); // 2 -> 1
        std::cout << "After 1st inc: " << b; 

        b.IncrementGrade(); // 1 -> 0 (BOUM !)
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 5 : DECREMENTATION (Limite 150 -> 151) [NOUVEAU]
    // ---------------------------------------------------
    std::cout << "\n--- Test 5: Decrement Limit ---" << std::endl;
    try {
        Bureaucrat b(149, "Lazy");
        std::cout << "Before: " << b;
        
        b.DecrementGrade(); // 149 -> 150
        std::cout << "After 1st dec: " << b; 

        b.DecrementGrade(); // 150 -> 151 (BOUM !)
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

//wlk mausitch setters o getters