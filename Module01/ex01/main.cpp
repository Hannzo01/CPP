/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:45:59 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 11:46:00 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	int N = 3;
	Zombie *horde = zombieHorde(3, "boo");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
