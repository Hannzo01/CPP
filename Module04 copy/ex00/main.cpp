/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:47:57 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 16:47:58 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "---------------------" << std::endl;
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const Animal* meta = new Animal();
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "--------WRONG--------" << std::endl;
    const WrongAnimal *k = new WrongAnimal();
    const WrongAnimal *e = new WrongCat();
    k->makeSound();
    e->makeSound();

    delete i;
    delete j;
    delete meta;
    delete k;
    delete e;
    return 0;
}
