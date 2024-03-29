/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:37:56 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 12:13:51 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_nb_frac = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fp_int = 0;	
}

Fixed::Fixed(const int to_fixe)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp_int = to_fixe << this->_nb_frac;
}

Fixed::Fixed(const float to_fixe)
{
	std::cout << "Float constructor called" << std::endl;
		
	this->_fp_int = round(to_fixe * (1 << this->_nb_frac));
}

Fixed::Fixed(Fixed const & test)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = test;		
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fp_int = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fp_int);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fp_int = raw;
}

float	Fixed::toFloat(void) const
{
	return (((float)this->_fp_int) / (float)(1 << this->_nb_frac));
}

int	Fixed::toInt(void) const
{
	return (this->_fp_int >> this->_nb_frac);
}
