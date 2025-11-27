/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:39 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:40 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        virtual ~Cure();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);

};



#endif