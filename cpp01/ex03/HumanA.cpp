/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:30 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 18:22:46 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weap)
{
	this->_name = name;
	this->_weap = weap;
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weap.getType() << std::endl;
}
