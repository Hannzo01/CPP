/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:41 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:09:42 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
    private :
        Brain *_brain;
    public :
        void makeSound() const;
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat&other);
        ~Cat();
};

#endif