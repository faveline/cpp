/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:33 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 10:58:05 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weap = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	if (_weap)
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weap->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << "bare hands" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weap)
{
	this->_weap = &weap;
}
