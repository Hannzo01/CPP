/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:52 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:53 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        delete slots[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& other){
    for (int i = 0; i < 4; i++)
    {
        if (other.slots[i])
            slots[i] = other.slots[i]->clone();
        else
            slots[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (&other == this)
        return *this;
    for (int i = 0; i < 4; i++)
        delete slots[i];
    for (int i = 0; i < 4; i++)
    {
        if (other.slots[i] != NULL)
            slots[i] = other.slots[i]->clone();
        else 
            slots[i] = NULL;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (materia == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (slots[i] == NULL)
        {
            slots[i] = materia;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{   
    for (int i = 0 ; i < 4; i++)
    {
        if (slots[i] && slots[i]->getType() == type)
        {
            return slots[i]->clone();
        }
    }
    return NULL;
}