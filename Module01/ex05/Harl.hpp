/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:41:39 by kemzouri          #+#    #+#             */
/*   Updated: 2025/11/12 15:41:40 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL

#include <iostream>


class Harl
{
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public :
	void complain(std::string level);
};

#endif

