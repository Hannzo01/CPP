#include "Bureaucrat.hpp"

int main()
{

    // ---------------------------------------------------
    
    std::cout << "--- Test 1: Valid Constructors ---" << std::endl;
    try {
        Bureaucrat b1("Kenza", 1); 
        std::cout << b1; 
    }
    catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat b2("Hannzo", 2);
        std::cout << b2;
    }
    catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // ---------------------------------------------------

    std::cout << "\n--- Test 2: Invalid Grade (0)-- Too high ---" << std::endl;
    try {
        Bureaucrat temp("Danzo", 0); 
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "Catch : " << e.what() << std::endl;
    }

    // ---------------------------------------------------

    std::cout << "\n--- Test 3: Invalid Grade (151) --- Too low---" << std::endl;
    try {
        Bureaucrat temp("Kannzo", 151);
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "Catch global: " << e.what() << std::endl;
    }

    // ---------------------------------------------------

    std::cout << "\n--- Test 4: Increment Limit ---" << std::endl;
    try {
        Bureaucrat b("Worker", 2);
        std::cout << "Before: " << b;
        
        b.incrementGrade(); // 2 -> 1
        std::cout << "After 1st inc: " << b; 

        b.incrementGrade(); // 1 -> 0 (BOOM !)
        std::cout << "Error: this line wont be printed since increment will throw an exception heh!" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }


    std::cout << "\n--- Test 5: Decrement Limit ---" << std::endl;
    try {
        Bureaucrat b("Lazy", 149);
        std::cout << "Before: " << b;
        
        b.decrementGrade(); // 149 -> 150
        std::cout << "After 1st dec: " << b; 

        b.decrementGrade(); // 150 -> 151 .error.
        std::cout << "Error: This line should not be printed!" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}