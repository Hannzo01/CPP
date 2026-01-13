/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:46 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:09:47 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
    private :
       Brain *_brain;
    public :
        void makeSound() const;
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
};

#endif
