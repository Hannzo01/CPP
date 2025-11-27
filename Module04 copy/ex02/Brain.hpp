/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:09:37 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/27 17:16:22 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        const std::string& getIdea(int index) const;
        void setIdea(int index, const std::string& idea);
};

#endif