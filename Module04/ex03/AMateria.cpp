/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:22 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:23 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(std::string const& type) : _type(type){
}

AMateria::AMateria(AMateria const& other) : _type(other._type){
}

AMateria& AMateria::operator=(AMateria const& other){

    (void)other;
    return *this;
}

AMateria::~AMateria(){
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
