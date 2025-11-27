/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:08:53 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:08:54 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        std::string getType() const;
        virtual void makeSound() const;
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        Animal();
        virtual ~Animal();
};



#endif