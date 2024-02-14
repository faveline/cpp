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

Animal::Animal()
{
	std::cout << "Constructor called for Animal" << std::endl;
	this->_type = "";
}

Animal::Animal(std::string type)
{
	std::cout << "Constructor called for Animal" << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal &A)
{
	std::cout << "Constructor called for Animal" << std::endl;
	*this = A;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Deconstructor called for Animal" << std::endl;
}

std::string	Animal::getType()const
{
	return (this->_type);
}

void	Animal::makeSound()const
{
	std::cout << "I'm a good animal." << std::endl;
}
