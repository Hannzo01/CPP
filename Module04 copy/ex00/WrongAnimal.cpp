/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:47:59 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 16:48:00 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "That is a sound of wrong Animal " << std::endl ;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "[Wrong Animal] Constructor is called !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[Wrong Animal] Destructor is called !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
    std::cout << "[Wrong Animal] Copy Constructor is called !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "[Wrong Animal] Copy assignement is called !" << std::endl;
    type = other.type;
    return *this;
}
