/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:47:46 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 16:47:47 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "[Cat Constructor is called !]" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[Cat Destructor is called !]" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "The Cat is meowing !" << std::endl;
}

Cat::Cat (const Cat &other) : Animal(other){
    std::cout << "Cat copy constructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignement operator is called" << std::endl;
    Animal::operator=(other);
    return *this;
}