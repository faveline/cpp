/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:24:19 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 16:40:01 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{	
	this->_type = "Dog";
	this->_BrainDog = new Brain();
	std::cout << "Constructor called for Dog" << std::endl;
}

Dog::Dog(const Dog &A): Brain()
{
	*this = A;
	std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	this->_BrainDog = new Brain();
	this->_BrainDog->modifyIdea(rhs._BrainDog->getIdea());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Deconstructor called for Dog" << std::endl;
	delete(this->_BrainDog);
}

void	Dog::makeSound()const
{
	std::cout << "Wouf... Wouf?" << std::endl;
}

