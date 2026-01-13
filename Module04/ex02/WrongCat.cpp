/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:16 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:17 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "[WrongCat Constructor is called !]" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat Destructor is called !]" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "The WrongCat is meowing !" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "[Wrong cat] Copy Constructor is called !" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "[Wrong cat] Copy assignement operator is called !" << std::endl;
    WrongAnimal::operator=(other);
    return *this;
}
