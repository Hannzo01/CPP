/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:13:45 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 11:13:46 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string _name;
	public :
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);


#endif