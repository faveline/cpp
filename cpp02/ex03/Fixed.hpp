/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:37:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 13:21:03 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <math.h>

class Fixed
{
private:
	int					_fp_int;
	static const int	_nb_frac;
public:
// constructors
	Fixed(void);
	Fixed(const int to_fixe);
	Fixed(const float to_fixe);
	Fixed(Fixed const & test);
	~Fixed(void);
// functions
	Fixed			&operator=(Fixed const & rhs);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
// comparison operators
	bool			operator>(Fixed const & rhs);
	bool			operator<(Fixed const & rhs);
	bool			operator>=(Fixed const & rhs);
	bool			operator<=(Fixed const & rhs);
	bool			operator==(Fixed const & rhs);
	bool			operator!=(Fixed const & rhs);
// arithmetic operators
	Fixed			operator+(Fixed const & rhs);
	Fixed			operator-(Fixed const & rhs);
	Fixed			operator*(Fixed const & rhs);
	Fixed			operator/(Fixed const & rhs);
// inc/dec operators
	Fixed			&operator++();
	Fixed			&operator--();
	Fixed			operator++(int);
	Fixed			operator--(int);
// min/max functions
	static Fixed		&min(Fixed& f1, Fixed& f2);
	static Fixed		&max(Fixed& f1, Fixed& f2);
	static const Fixed	&min(Fixed const & f1, Fixed const & f2);
	static const Fixed	&max(Fixed const & f1, Fixed const & f2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const & rhs);

#endif
