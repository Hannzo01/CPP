/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:34 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:35 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string _name;
        AMateria* inventory_slots[4];
    public :
        Character();
        Character(std::string name);
        virtual ~Character();
        Character(const Character& other);
        Character& operator=(const Character& other);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};


#endif