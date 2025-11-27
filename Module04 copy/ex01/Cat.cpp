/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:00 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:09:01 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "[  Cat   ] Constructor is called !" << std::endl;
    type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "[  Cat   ] Destructor is called !" << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "The Cat is meowing !" << std::endl;
}

Cat::Cat (const Cat &other) : Animal(other){
    std::cout << "[  Cat   ] Copy constructor is called" << std::endl;
    _brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "[  Cat   ] Copy assignement is called" << std::endl;
    Animal::operator=(other);
    if (this == &other)
        return *this;
    if (_brain != NULL)
        delete _brain;
    if (other._brain != NULL)
        _brain = new Brain(*other._brain);
    else
        _brain = NULL;
    return *this;
}
