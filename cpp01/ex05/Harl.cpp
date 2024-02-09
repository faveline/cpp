/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:39 by faveline          #+#    #+#             */
/*   Updated: 2024/02/09 11:10:35 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::_debug(void)
{
	std::cout << "debug: bacon is pure" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "info: bacon is love" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "warning: bacon is life" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "error: bacon is god" << std::endl;
}

void	Harl::_null(void)
{
}

void	Harl::complain(std::string level)
{
	void		(Harl::*f[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_null};
	std::string	tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && level != tab[i])
		i++;
	(this->*f[i])();
}
