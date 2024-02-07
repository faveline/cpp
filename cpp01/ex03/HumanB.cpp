/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:33 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 18:14:54 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weap.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weap)
{
	this->_weap = weap;
}
