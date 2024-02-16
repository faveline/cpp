/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:51:27 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 13:09:52 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &C)
{
	(void)C;
	this->_type = "ice";
}

Ice	&Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	this->_type = "ice";
	return (*this);
}

Ice::~Ice() {}

Ice	*Ice::clone()const
{
	Ice	*test = new Ice;
	return (test);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
