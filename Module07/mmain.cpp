#include <iostream>
#include <string>
#include "templates_test.hpp"

int main() {
    // --- PART 1: The Generic Search ---
    std::cout << "--- Part 1: Search ---" << std::endl;
    
    int nums[] = {10, 20, 30, 40, 50};
    std::string strs[] = {"one", "two", "three"};

    // Should print: "Found 30 at index: 2"
    int index1 = ::search(nums, 5, 30);
    if (index1 != -1)
        std::cout << "Found 30 at index: " << index1 << std::endl;
    else
        std::cout << "30 not found!" << std::endl;

    // Should print: "Found 'two' at index: 1"
    int index2 = ::search(strs, 3, std::string("two"));
    if (index2 != -1)
        std::cout << "Found 'two' at index: " << index2 << std::endl;
    else
        std::cout << "'two' not found!" << std::endl;

    // Should print: "99 not found!"
    int index3 = ::search(nums, 5, 99); 
    if (index3 == -1)
        std::cout << "99 not found!" << std::endl;


    // --- PART 2: Mixed Comparison ---
    std::cout << "\n--- Part 2: Mixed Types ---" << std::endl;

    // Should print: "10 and 10.0 are equal? 1" (True)
    // Note: This requires handling two DIFFERENT types (int and double)
    std::cout << "10 and 10.0 are equal? " << ::are_equal(10, 10.0) << std::endl;

    // Should print: "10 and 5.5 are equal? 0" (False)
    std::cout << "10 and 5.5 are equal? " << ::are_equal(10, 5.5) << std::endl;

    // Should print: "c and 99 are equal? 1" (True, because ascii 'c' is 99)
    std::cout << "'c' and 99 are equal? " << ::are_equal('c', 99) << std::endl;

    return 0;
}