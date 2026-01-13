/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:44 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:09:45 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "[   Dog  ] Constructor is called !" << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "[  Dog   ] Destructor is called !" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "The Dog is barking !"<< std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "[  Dog   ]  copy constructor is called" << std::endl;
    _brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "[  Dog   ] copy assignement is called" << std::endl;
    if (this == &other)
        return *this;
    Animal::operator=(other);
    if (_brain != NULL)
        delete _brain;
    if (other._brain != NULL)
        _brain = new Brain(*other._brain);
    else
        _brain = NULL;
    return *this;
}
