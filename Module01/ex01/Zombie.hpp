/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:46:08 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 15:24:31 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;
	public :
	void announce(void) const;
	Zombie();
	void set_name(std::string);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif