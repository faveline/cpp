/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:26:34 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 13:49:56 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Constructor called for Cat" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &A): Animal(A._type)
{
	std::cout << "Constructor called for Cat" << std::endl;
	*this = A;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Deconstructor called for Cat" << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << "Nya~ Nya~" << std::endl;
}
