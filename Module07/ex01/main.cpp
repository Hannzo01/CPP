#include <iostream>
#include "iter.hpp"

// 1. A function that modifies the value (works on int)
void addOne(int &n) {
    n++;
}

// 2. A generic function that just reads the value
template <typename Add>
void printItem(Add &x) {
    std::cout << x << " ";
}

int main() {
    int array[] = {0, 1, 2, 3};

    std::cout << "Original: ";
    ::iter(array, 4, printItem<int>); // Test 1: Instantiated template
    std::cout << std::endl;

    ::iter(array, 4, addOne); // Test 2: Regular function pointer

    std::cout << "Modified: ";
    ::iter(array, 4, printItem<int>); // Verify changes
    std::cout << std::endl;

    return 0;
}