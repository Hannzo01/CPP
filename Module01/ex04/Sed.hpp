/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:06:49 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/10 18:06:50 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define	SED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
	std::string _s1;
	std::string _s2;
	std::string _filename;

	public :
	Sed(const std::string &s1, const std::string &s2, const std::string &filename);
	int execute_replacement() const;
};


#endif