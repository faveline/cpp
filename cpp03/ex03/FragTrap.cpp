/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:00:22 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 16:49:04 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Constructor called for FragTrap" << std::endl;
	this->_HP = 100;
	if (this->_EP == 10)
		this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor called for FragTrap" << std::endl;
	this->_HP = 100;
	if (this->_HP == 10)
		this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(const FragTrap &S): ClapTrap(S._name)
{
	std::cout << "Constructor called for FragTrap" << std::endl;
	*this = S;
}

FragTrap	&FragTrap::operator=(const FragTrap &cpy)
{
	this->_name = cpy._name;
	this->_HP = cpy._HP;
	this->_EP = cpy._EP;
	this->_AD = cpy._AD;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor called for FragTrap" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	if (this->_HP > 0)
		std::cout << this->_name << " is doing a high five. Alone." << std::endl;
	else
		std::cout << this->_name << " corps's is doing a high five with the ground." << std::endl;
}
