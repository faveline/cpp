/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:54:10 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 14:38:37 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() 
{
	this->_type = "none";
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &A)
{
	*this = A;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria::~AMateria() {}

std::string const	&AMateria::getType()const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "~~ " << target.getName() << " is dancing on the floor ~~" << std::endl;
}
