/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:36 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:37 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure(){}

Cure::Cure(const Cure& other) : AMateria(other){}

Cure& Cure::operator=(const Cure&other)
{
    if (&other != this)
        AMateria::operator=(other);
    return *this;
}

AMateria* Cure::clone() const{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}