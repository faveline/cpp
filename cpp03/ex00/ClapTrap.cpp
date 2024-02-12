/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:56:51 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 16:35:17 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("John Doe"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_HP = 10;
	this->_EP = 10;
	this->_AD = 0;
}

ClapTrap::ClapTrap(const ClapTrap &C)
{
	std::cout << "Constructor called" << std::endl;
	*this = C;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cpy)
{
	*this = cpy;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EP > 0 && this->_HP > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target \
			<< " causing " << this->_AD << " points of damage!" << std::endl;
		this->_EP--;
	}
	else if (this->_HP <= 0)
		std::cout << "ClapTrap " << this->_name \
			<< " is already dead." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << \
			" does not have enough energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " \
			<< amount << " damage." << std::endl;
		this->_HP -= amount;
		if (this->_HP <= 0)
			std::cout << "ClapTrap " << this->_name << " died." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name \
			<< " is already dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EP > 0 && this->_HP > 0)
	{
		
		this->_EP--;
		this->_HP += amount;
		if (this->_HP > 10)
		{
			std::cout << "ClapTrap " << this->_name << \
				" is being repaired for " << 10 - this->_HP + amount \
				<< " HP." << std::endl;
			this->_HP = 10;	
		}
		else 
			std::cout << "ClapTrap " << this->_name << \
				" is being repaired for " << amount << " HP." << std::endl;
	}
	else if (this->_HP <= 0)
		std::cout << "ClapTrap " << this->_name \
			<< " is already dead." << std::endl;	
	else
		std::cout << "ClapTrap " << this->_name << \
			" does not have enough energy points!" << std::endl;
}
