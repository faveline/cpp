/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:39 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 10:35:52 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::_debug(void)
{
	std::cout << "debug: bacon is pure" << std::endl;
	this->_info();
}

void	Harl::_info(void)
{
	std::cout << "info: bacon is love" << std::endl;
	this->_warning();
}

void	Harl::_warning(void)
{
	std::cout << "warning: bacon is life" << std::endl;
	this->_error();
}

void	Harl::_error(void)
{
	std::cout << "error: bacon is god" << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*f[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && level != tab[i])
		i++;
	switch (i)
	{
		case 0:
			(this->*f[0])();
			break;
		case 1:
			(this->*f[1])();
			break;
		case 2:
			(this->*f[2])();
			break;
		case 3:
			(this->*f[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	} 
}
