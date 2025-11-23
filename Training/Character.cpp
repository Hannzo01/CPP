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
    } //free later check int  main
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        inventory_slots[idx] = NULL;
    }
    //SAVE ALL the address but do not delete them 

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

Character::Character(const Character& other){
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
