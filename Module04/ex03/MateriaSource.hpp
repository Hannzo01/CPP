/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:55 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:56 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
        AMateria *slots[4];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria* materia);
        virtual AMateria* createMateria(std::string const & type);
};

#endif