/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:10:09 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:10:10 by kemzouri         ###   ########.fr       */
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