/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:41 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:42 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::~Ice(){}

Ice::Ice(const Ice& other) : AMateria(other){}

Ice& Ice::operator=(const Ice&other)
{
    if (&other != this)
        AMateria::operator=(other);
    return *this;
}

AMateria* Ice::clone() const{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}