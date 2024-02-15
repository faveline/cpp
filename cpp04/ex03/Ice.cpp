/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:51:27 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 14:39:12 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &C)
{
	this->_type = "ice";
}

Ice	&Ice::operator=(const Ice &rhs)
{
	this->_type = "ice";
	return (*this);
}

Ice::~Ice() {}

Ice	*Ice::clone()const
{
	Ice	*test = new Ice;
	return (test);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
