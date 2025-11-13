/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:40:34 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/12 15:40:40 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int getLevelIndex(const std::string& cmd)
{
	const std::string LEVELS[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; ++i)
    {
        if (LEVELS[i] == cmd)
            return i;
    }
    return -1;
}

int main(int argc , char *argv[])
{
	Harl c;
	
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
	}
    std::string cmd = argv[1];
    int lvl_index = getLevelIndex(cmd);

	switch (lvl_index)
	{
		case 0:
			c.debug();
			// FALLTHROUGH
		case 1:
			c.info();
			// FALLTHROUGH
		case 2:
			c.warning();
			// FALLTHROUGH
		case 3:
			c.error();
			break;
		default: 
			std::cout << "[Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
