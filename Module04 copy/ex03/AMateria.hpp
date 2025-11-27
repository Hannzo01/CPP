/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:28 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:29 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include "ICharacter.hpp"
#include <iostream>
class ICharacter;
class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};




#endif