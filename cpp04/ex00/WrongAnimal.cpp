/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:18:49 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 11:19:00 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor called for WrongAnimal" << std::endl;
	this->_type = "";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Constructor called for WrongAnimal" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &A)
{
	std::cout << "Constructor called for WrongAnimal" << std::endl;
	*this = A;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Deconstructor called for WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType()const
{
	return (this->_type);
}

void	WrongAnimal::makeSound()const
{
	std::cout << "I'm a bad animal." << std::endl;
}
