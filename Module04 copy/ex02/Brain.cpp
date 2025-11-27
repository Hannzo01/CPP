/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:34 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:16:37 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "[ Brain  ] Constructor is called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "[ Brain  ] Destructor is called" << std::endl;
}

Brain::Brain(const Brain& other){
    std::cout << "[ Brain  ] Copy constructor is called" << std::endl;
    for (int i = 0; i < 100 ; i++)
    {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "[ Brain ] Copy assignement is called" << std::endl;
    if (&other != this)
    {
        for (int i = 0; i < 100 ; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

const std::string& Brain::getIdea(int index) const {
    if (index < 0 || index >= 100)
        return ideas[0];
    return ideas[index];
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
