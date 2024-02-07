/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:25:50 by faveline          #+#    #+#             */
/*   Updated: 2024/02/06 17:51:29 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void): _ctct()
{
	std::cout << "Launching PhoneBook ..." << std::endl;
	std::cout << "PhoneBook is empty." << std::endl;
	std::cout << "Enter one of the following: ADD, SEARCH, EXIT: ";
	this->_i = 0;
	this->_size = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Exiting PhoneBook ..." << std::endl;
	std::cout << "PhoneBook closed successfully." << std::endl;
}

void	PhoneBook::add()
{
	this->_ctct[this->_i].setContact(&this->_ctct[this->_i]);
	this->_i++;
	if (this->_size < 8)
		this->_size++;
	if (this->_i == 8)
		this->_i = 0;
}

static void	display_info(Contact _ctct)
{
	std::cout << "	First name: " << _ctct.getContactF(_ctct) << std::endl;
	std::cout << "	Last name: " << _ctct.getContactL(_ctct) << std::endl;
	std::cout << "	Nickname: " << _ctct.getContactN(_ctct) << std::endl;
	std::cout << "	Phone number: " << _ctct.getContactP(_ctct) << std::endl;
	std::cout << "	Darkest secret: " << _ctct.getContactD(_ctct) << std::endl;
}

static void	print_index(Contact _ctct[8], std::size_t _size)
{
	std::string	buff;
	std::size_t	index;
	std::size_t	correct;

	correct = 0;
	while (correct == 0)
	{
		correct = 1;
		std::cout << "Choose a valid index: ";
		std::getline (std::cin, buff);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return ;
		}
		if (buff.size() > 1)
		{
			std::cout << "Only one character is accepted." << std::endl;
			correct = 0;
		}
		else if (buff[0] < '1' || (size_t)(buff[0] - '0') > _size)
		{
			std::cout << "The character is not a valid integer." << std::endl;
			correct = 0;
		}
	}
	index = atoi(buff.c_str());
	display_info(_ctct[index - 1]);
}

static void	print_into_tab(std::string str, std::size_t flag)
{
	if (str.size() < 10)
	{
		for (size_t _i = 0; _i < 10 - str.size(); _i++)
			std::cout << " ";
		std::cout << str;
	}
	else
		std::cout << str.substr(0, 9) << ".";
	if (flag)
		std::cout << "|";
}

void	PhoneBook::search()
{
	if (_size == 0)
	{
		std::cout << "PhoneBook is empty, add a contact before searching." << std::endl;
		return ;
	}
	std::cout << "List of contact: " << std::endl;
	std::cout << "Index     |First name|Last name |Nickname  " << std::endl;
	std::cout << "===========================================" << std::endl;
	for (std::size_t _i = 0; _i < this->_size; _i++)
	{	
		std::cout << "         " << _i + 1 << "|";
		print_into_tab(this->_ctct[_i].getContactF(this->_ctct[_i]), 1);
		print_into_tab(this->_ctct[_i].getContactL(this->_ctct[_i]), 1);
		print_into_tab(this->_ctct[_i].getContactN(this->_ctct[_i]), 0);
		std::cout << std::endl;
	}
	print_index(this->_ctct, this->_size);
}
