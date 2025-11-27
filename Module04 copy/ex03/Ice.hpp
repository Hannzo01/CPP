/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:43 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:44 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        virtual ~Ice();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif