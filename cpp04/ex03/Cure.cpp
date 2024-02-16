/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:46:12 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 13:09:58 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &C)
{
	(void)C;
	this->_type = "cure";
}

Cure	&Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	this->_type = "cure";
	return (*this);
}

Cure::~Cure() {}

Cure	*Cure::clone()const
{
	Cure	*test = new Cure;
	return (test);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
