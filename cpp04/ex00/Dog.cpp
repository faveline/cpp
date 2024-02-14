/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:24:19 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 13:49:45 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Constructor called for Dog" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &A): Animal(A._type)
{
	std::cout << "Constructor called for Dog" << std::endl;
	*this = A;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Deconstructor called for Dog" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "Wouf... Wouf?" << std::endl;
}
