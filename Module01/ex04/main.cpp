/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:06:37 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 18:06:38 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char *argv[])
{
	
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1.empty())
		{
			std::cerr << "Error: The string to be replaced (s1) cannot be empty." << std::endl;
			return 1;
		}

		Sed replacer(s1, s2, filename);
		replacer.execute_replacement();
		return 0;
	}
	else
	{
		std::cerr << "Error ! Invalid input " << std::endl;
		return (1);
	}
}
