/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:08:51 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:08:52 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "That is a sound of animal " << std::endl ;
}

Animal::Animal()
{
    std::cout << "[ Animal ] Constructor is called !" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[ Animal ] Destructor is called !" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type){
    std::cout << "[ Animal ] Copy constructor is called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "[ Animal ] Copy assignement is called" << std::endl;
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}
