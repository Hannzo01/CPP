/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:48 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:09:49 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    // Animal test; 
    // Animal* test2 = new Animal();
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "TEST 1: ARRAY OF ANIMALS (Creation & Destruction)" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;

    const int size = 6;
    Animal* array[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    std::cout << "Destructors" << std::endl;
    for (int i = 0; i < size; i++)
    {
        delete array[i];
    }

    std::cout << "\n-------------------------------------------------------" << std::endl;
    std::cout << "TEST 2: DEEP COPY PROOF (Stack Allocation)" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;

    std::cout << "1. Creating 'a' (Dog)..." << std::endl;
    Dog a;
    
    std::cout << "2. Creating 'b' as a copy of 'a' (Copy Constructor)..." << std::endl;
    Dog b = a; 
    
    std::cout << "3. Assigning 'b' to 'a' (Assignment Operator)..." << std::endl;
    a = b;
    std::cout << "\n-------------DONE (Destructors for Stack Objects follow)---------------" << std::endl;
    return 0;
}