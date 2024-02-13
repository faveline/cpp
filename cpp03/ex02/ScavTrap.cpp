/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:58:14 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 12:27:33 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Constructor called for ScavTrap" << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor called for ScavTrap" << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &S): ClapTrap(S._name)
{
	std::cout << "Constructor called for ScavTrap" << std::endl;
	*this = S;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cpy)
{
	this->_name = cpy._name;
	this->_HP = cpy._HP;
	this->_EP = cpy._EP;
	this->_AD = cpy._AD;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor called for ScavTrap" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_HP > 0)
		std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
	else
		std::cout << this->_name << " is in Gate keeper mode from the afterlife !" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_EP > 0 && this->_HP > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target \
			<< " dealing " << this->_AD << " points of damage!" << std::endl;
		this->_EP--;
	}
	else if (this->_HP <= 0)
		std::cout << "ScavTrap " << this->_name \
			<< " is already dead." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << \
			" does not have enough energy points!" << std::endl;
}
