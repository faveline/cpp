/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:37:56 by faveline          #+#    #+#             */
/*   Updated: 2024/02/09 20:03:27 by faveline         ###   ########.fr       */
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

static int	calcul_i(const float to_fixe)
{	
	float	test = roundf(to_fixe);
	int		*g = (int *)&test;
	int		i = 0;
	
	if (*g == 0)
		return (9);
	if (*g % 2 == 1)
		*g -= 1;
	while (*g % 2 != 1)
	{
		i++;
		*g = *g >> 1;
	}
	return (i);
}

Fixed::Fixed(const float to_fixe)
{
	std::cout << "Float constructor called" << std::endl;
		
	this->_fp_int = roundf(to_fixe);
	int	i = calcul_i(to_fixe);
	int	*f = (int *)&to_fixe;
	*f = *f << (32 - i + 1);
	for (int i = 0; i < this->_nb_frac; i++)
	{
		this->_fp_int = this->_fp_int << 1;
		if (*f < 0)
			this->_fp_int += 1;
		*f = *f << 1;
	}
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
	int		cpy2 = this->_fp_int;
	float	ret = 2;
	int		*f = (int *)&ret;
	int		power = 16384;

	for(int i = 0; i < this->_nb_frac; i++)
	{
		if (cpy2 % 2 == 1)
			*f = *f + power;
		power *= 2;
		cpy2 = cpy2 / 2;
	}
	ret = ret - 2 + roundf(this->_fp_int >> this->_nb_frac);
	return (ret);
}

int	Fixed::toInt(void) const
{
	return (this->_fp_int >> this->_nb_frac);
}
