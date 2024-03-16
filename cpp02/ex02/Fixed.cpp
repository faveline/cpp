/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:37:56 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 11:53:44 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_nb_frac = 8;

// Constructors

Fixed::Fixed(void)
{
	this->_fp_int = 0;	
}

Fixed::Fixed(const int to_fixe)
{
	this->_fp_int = to_fixe << this->_nb_frac;
}

Fixed::Fixed(const float to_fixe)
{
	this->_fp_int = round(to_fixe * (1 << this->_nb_frac));
}

Fixed::Fixed(Fixed const & test)
{
	*this = test;		
}

Fixed::~Fixed(void) {}

// functions

Fixed	&Fixed::operator=(Fixed const & rhs)
{
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

// comparison operators

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->_fp_int > rhs.getRawBits());	
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->_fp_int < rhs.getRawBits());	
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->_fp_int >= rhs.getRawBits());	
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->_fp_int <= rhs.getRawBits());	
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->_fp_int == rhs.getRawBits());	
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->_fp_int != rhs.getRawBits());	
}

// arithmetic operators

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed ret;

	ret.setRawBits(this->_fp_int + rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed ret;

	ret.setRawBits(this->_fp_int - rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed ret;

	ret.setRawBits((this->_fp_int * rhs.getRawBits()) >> this->_nb_frac);
	return (ret);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed ret;

	if (rhs.getRawBits() != 0)
		ret.setRawBits((this->_fp_int << this->_nb_frac) / rhs.getRawBits());
	else
	{
		ret.setRawBits(this->_fp_int);
		std::cout << "division by 0 not allowed" << std::endl;
	}
	return (ret);
}

// inc/dec operators

Fixed	&Fixed::operator++()
{
	this->_fp_int++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_fp_int--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret = *this;
	
	this->_fp_int++;
	return (ret);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret = *this;

	this->_fp_int--;
	return (ret);
}

// min/max functions

Fixed	&Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f2);
	return (f1);	
}

Fixed	&Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f2);
	return (f1);	
}

Fixed const	&Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f2);
	return (f1);	
}

Fixed const	&Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f2);
	return (f1);	
}
