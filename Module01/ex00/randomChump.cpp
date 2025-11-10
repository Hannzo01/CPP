/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:13:41 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 12:14:36 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie boo(name);
	boo.announce();
}

//  SUR LE HEAP 
// void randomChump(std::string name)
// {
// 	Zombie *boo = new Zombie(name);
// 	boo->announce();
// 	delete boo;	
// }