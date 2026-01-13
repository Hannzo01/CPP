/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:48:02 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 16:48:03 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    public :
        std::string getType() const;
         void makeSound() const;
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=( const WrongAnimal& other);
        WrongAnimal();
        ~WrongAnimal();
};

#endif