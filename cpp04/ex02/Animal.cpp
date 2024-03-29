/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:09:02 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 11:16:31 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Constructor called for AAnimal" << std::endl;
	this->_type = "";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "Constructor called for AAnimal" << std::endl;
	this->_type = type;
}

AAnimal::AAnimal(const AAnimal &A)
{
	std::cout << "Constructor called for AAnimal" << std::endl;
	*this = A;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Deconstructor called for AAnimal" << std::endl;
}

std::string	AAnimal::getType()const
{
	return (this->_type);
}
