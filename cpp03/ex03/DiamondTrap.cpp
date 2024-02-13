/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:36:16 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 16:44:31 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Constructor called for Diamond" << std::endl;
	this->_name = "Jane Doe";
	this->ClapTrap::_name = "Jane Doe_clap_name";	
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "Constructor called for Diamond" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_name");
}

DiamondTrap::DiamondTrap(const DiamondTrap &D): ClapTrap(D._name), ScavTrap(D._name), FragTrap(D._name)
{
	std::cout << "Constructor called for Diamond" << std::endl;
	*this = D;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &cpy)
{
	this->_name = cpy._name;
	this->_HP = cpy._HP;
	this->_EP = cpy._EP;
	this->_AD = cpy._AD;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Deconstructor called for Diamond" << std::endl;	
}

void	DiamondTrap::whoAmI()
{
	if (this->_HP)
	{
		std::cout << "This is " << this->DiamondTrap::_name << " !!!" << std::endl;
		std::cout << "Aaaaaaand " << this->ClapTrap::_name << " !!!!" << std::endl;
	}
	else
	{
		std::cout << "This is dead-" << this->DiamondTrap::_name << " !!!" << std::endl;
		std::cout << "Aaaaaaand dead-" << this->ClapTrap::_name << " !!!!" << std::endl;
	}
}

void	DiamondTrap::attack(const std::string str)
{
	ScavTrap::attack(str);
}
