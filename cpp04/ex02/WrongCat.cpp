/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:18:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 16:00:11 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{	
	this->_type = "WrongCat";
	this->_BrainWCat = new Brain();
	std::cout << "Constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &A): WrongAnimal(A._type), Brain()
{	
	*this = A;
	std::cout << "Copy Constructor called for WrongCat" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	this->_BrainWCat = rhs._BrainWCat;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Deconstructor called for WrongCat" << std::endl;
	delete (this->_BrainWCat);
}

void	WrongCat::makeSound()const
{
	std::cout << "I hate monday but love lasagna." << std::endl;
}
