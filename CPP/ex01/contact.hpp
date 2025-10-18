/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:27:06 by kemzouri          #+#    #+#             */
/*   Updated: 2025/10/18 23:28:28 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	public:
	void	set_field(std::string first, std::string last, std::string nickname, std::string num, std::string secret)
	{
		first_name = first;
		last_name = last;
		this->nickname = nickname;
		phone_number = num;
		darkest_secret = secret;
	}
	std::string get_first_name()
	{
		return first_name;
	}
	std::string get_last_name()
	{
		return last_name;
	}
	std::string get_nickname()
	{
		return nickname;
	}
	std::string get_num()
	{
		return phone_number;
	}
	std::string get_secret()
	{
		return darkest_secret;
	}
};
