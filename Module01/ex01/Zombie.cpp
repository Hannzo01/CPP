/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:46:03 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 15:24:42 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << " Get destroyed!" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string zombie_name)
{
	name = zombie_name;
}
