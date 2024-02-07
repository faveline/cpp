/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:27 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 18:25:21 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = new std::string;
	setType(type);
}

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}

std::string	Weapon::getType(void) const
{
	return (*(this->_type));
}

void	Weapon::setType(std::string type)
{
	this->_type = &type;
}
