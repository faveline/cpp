/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:18:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 13:50:33 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "Constructor called for WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &A): WrongAnimal(A._type)
{
	std::cout << "Constructor called for WrongCat" << std::endl;
	*this = A;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Deconstructor called for WrongCat" << std::endl;
}

void	WrongCat::makeSound()const
{
	std::cout << "I hate monday but love lasagna." << std::endl;
}
