#include <iostream>

template <typename T>


void reverse_array(T* array, int size)
{
    T a[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = array[i];
    }
    int s = size;
    for (int i = 0; i < size; i++)
    {
        array[i] = a[s -1];
        s--;
    }
}


template <typename T, typename U>
int count_occurrences(T* array, int size, U value)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
            c++;
    }
    return c;
}

int main() {
    // --- TEST 1: REVERSE ---
    std::cout << "--- Test 1: Reverse ---" << std::endl;
    
    int tab[] = {1, 2, 3, 4, 5};
    ::reverse_array(tab, 5);
    
    // Doit afficher : 5 4 3 2 1
    for(int i = 0; i < 5; i++) std::cout << tab[i] << " ";
    std::cout << std::endl;

    std::string strs[] = {"Hello", "World", "42"};
    ::reverse_array(strs, 3);

    // Doit afficher : 42 World Hello
    for(int i = 0; i < 3; i++) std::cout << strs[i] << " ";
    std::cout << std::endl;


    // // --- TEST 2: COUNT ---
    std::cout << "\n--- Test 2: Count ---" << std::endl;

    int numbers[] = {10, 20, 10, 30, 10, 40};
    
    // Doit afficher : "Found 10: 3 times"
    int c1 = ::count_occurrences(numbers, 6, 10);
    std::cout << "Found 10: " << c1 << " times" << std::endl;

    // Test mixte (chercher un double dans un int array)
    // 20.0 == 20, donc ça doit marcher
    // Doit afficher : "Found 20.0: 1 times"
    int c2 = ::count_occurrences(numbers, 6, 20.0);
    std::cout << "Found 20.0: " << c2 << " times" << std::endl;

    return 0;
}
