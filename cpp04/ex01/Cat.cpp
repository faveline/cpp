/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:26:34 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 16:07:11 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{	
	this->_type = "Cat";
	this->_BrainCat = new Brain();
	std::cout << "Constructor called for Cat" << std::endl;
}

Cat::Cat(const Cat &A): Animal(A._type), Brain()
{	
	*this = A;
	std::cout << "Copy constructor called for Cat" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	this->_BrainCat = new Brain();
	this->_BrainCat->modifyIdea(rhs._BrainCat->getIdea());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Deconstructor called for Cat" << std::endl;
	delete(this->_BrainCat);
}

void	Cat::makeSound()const
{
	std::cout << "Nya~ Nya~" << std::endl;
}
