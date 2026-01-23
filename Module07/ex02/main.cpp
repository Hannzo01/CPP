#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    std::cout << "--- TEST 1: Simple Int Array ---" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    // Remplissage avec des valeurs aléatoires
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    // Vérification
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Error: value mismatch at index " << i << std::endl;
            return 1;
        }
    }
    std::cout << "OK: Arrays match!" << std::endl;
    delete [] mirror;

    // --- TEST 2: DEEP COPY ---
    std::cout << "\n--- TEST 2: Deep Copy Check ---" << std::endl;
    
    Array<int> original(5);
    for (int i = 0; i < 5; i++) original[i] = i; // [0, 1, 2, 3, 4]

    {
        // Création d'une copie dans un scope temporaire
        Array<int> copy = original; 
        
        // On modifie la COPIE
        copy[0] = 42; 
        copy[4] = 99;

        std::cout << "Copy[0] (should be 42): " << copy[0] << std::endl;
        std::cout << "Original[0] (should be 0): " << original[0] << std::endl;

        if (original[0] != 0)
            std::cerr << "ERROR: Modifying copy changed original! (Shallow Copy detected)" << std::endl;
        else
            std::cout << "OK: Deep Copy verified." << std::endl;
    } // Ici, 'copy' est détruite. Si le destructeur est mauvais, ça crash ici.

    // --- TEST 3: Out of Bounds ---
    std::cout << "\n--- TEST 3: Exception ---" << std::endl;
    try {
        numbers[-2] = 0;
    } catch(const std::exception& e) {
        std::cout << "OK: Exception caught for index -2" << std::endl;
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch(const std::exception& e) {
        std::cout << "OK: Exception caught for index MAX_VAL" << std::endl;
    }

    return 0;
}