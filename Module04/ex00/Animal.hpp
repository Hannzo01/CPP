/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:47:44 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 16:47:45 by kemzouri         ###   ########.fr       */
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
        Animal& operator=(const Animal& other);
        Animal(const Animal& other);
        Animal();
        virtual ~Animal();
};






#endif