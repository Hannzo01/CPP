/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:47:51 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 16:47:52 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "[Dog Constructor is called !]" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "[Dog Destructor is called !]" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "The Dog is barking !"<< std::endl;
}

Dog::Dog (const Dog &other) : Animal(other){
    std::cout << "Dog copy constructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignement operator is called" << std::endl;
    Animal::operator=(other);
    return *this;
}