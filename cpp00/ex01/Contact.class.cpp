/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:59:18 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 11:22:02 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

static std::string	delete_tab(std::string str)
{
	std::size_t	i;

	i = 0;
	while (i != std::string::npos)
	{
		i = str.find_first_of('\t', 0);
		if (i != std::string::npos)
			str[i] = ' ';
	}
	return (str);
}

static int	valid_field(std::string field)
{
	if (field.empty())
		return (0);
	if (field.find_first_not_of(" ", 0) == std::string::npos)
		return (0);
	for (size_t i = 0; i < field.size(); i++)
		if (std::isprint(field[i]) == 0)	
			return (0);
	return (1);
}

static std::string	loop_setContact(std::string fields)
{
	std::getline (std::cin, fields);	
	fields = delete_tab(fields);
	while (!valid_field(fields))
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return ("EOF");
		}
		std::cout << "Such a field is not accepted: ";
		std::getline (std::cin, fields);
		fields = delete_tab(fields);
	}
	return (fields);
}

void	Contact::setContact(Contact *add)
{
	std::cout << "	First name: ";
	add->_first_n = loop_setContact(add->_first_n);
	std::cout << "	Last name: ";
	add->_last_n = loop_setContact(add->_last_n);
	std::cout << "	Nickname: ";
	add->_nick_n = loop_setContact(add->_nick_n);
	std::cout << "	Phone number: ";
	add->_phone_n = loop_setContact(add->_phone_n);
	std::cout << "	Darkest secret: ";
	add->_dark_s = loop_setContact(add->_dark_s);
}

std::string	Contact::getContactF(Contact ctct) const
{
	return (ctct._first_n);
}

std::string	Contact::getContactL(Contact ctct) const
{
	return (ctct._last_n);
}

std::string	Contact::getContactN(Contact ctct) const
{
	return (ctct._nick_n);
}

std::string	Contact::getContactP(Contact ctct) const
{
	return (ctct._phone_n);
}

std::string	Contact::getContactD(Contact ctct) const
{
	return (ctct._dark_s);
}
