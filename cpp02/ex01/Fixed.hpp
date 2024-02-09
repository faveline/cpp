/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:37:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/09 17:42:20 by faveline         ###   ########.fr       */
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
	Fixed(void);
	Fixed(const int to_fixe);
	Fixed(const float to_fixe);
	Fixed(Fixed const & test);
	~Fixed(void);
	Fixed			&operator=(Fixed const & rhs);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const & rhs);

#endif
