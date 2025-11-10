/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:23:26 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 11:28:18 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("kenza");
	Zombie *fo =  newZombie("hannzo");
	fo->announce();
	delete fo;
}
