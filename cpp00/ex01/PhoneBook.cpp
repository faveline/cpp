/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:04:06 by faveline          #+#    #+#             */
/*   Updated: 2024/02/05 16:26:49 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	phone;
	std::string	buff;

	std::getline (std::cin,buff);
	while (buff.compare(0, buff.size(), "EXIT"))
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (buff.compare(0, buff.size(), "ADD") == 0)
			phone.add();
		else if (buff.compare(0, buff.size(), "SEARCH") == 0)
			phone.search();
		std::cout << "Enter one of the following: ADD, SEARCH, EXIT: ";
		std::getline (std::cin,buff);
	}
	return (0);
}
