/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:32 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:33 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (inventory_slots[idx] == NULL)
        return ;
    inventory_slots[idx]->use(target);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
        return ; 
    for (int i = 0; i < 4 ; i++)
    {
        if (inventory_slots[i] == NULL)
        {
            inventory_slots[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        inventory_slots[idx] = NULL;
    }
}

Character::Character(){
    for (int i = 0; i < 4; i++)
        inventory_slots[i] = NULL;
}

Character::Character(std::string name) : _name(name){
    for (int i = 0; i < 4; i++)
        inventory_slots[i] = NULL;
}

Character::~Character(){
    for (int i = 0; i < 4; i++)
    {
        delete inventory_slots[i];
    }

}

Character::Character(const Character& other) : _name(other._name){
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory_slots[i] != NULL)
            inventory_slots[i] = other.inventory_slots[i]->clone();
        else 
            inventory_slots[i] = NULL;
    }
}

Character& Character::operator=(const Character& other){
    
    if (this == &other)
        return *this;
    _name = other._name;
    for (int i = 0; i < 4; i++)
    {
        delete inventory_slots[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory_slots[i] != NULL)
            inventory_slots[i] = other.inventory_slots[i]->clone();
        else 
            inventory_slots[i] = NULL;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}
