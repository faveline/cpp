/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:37:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/09 14:41:24 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int					_fp_int;
	static const int	_nb_frac;
public:
	Fixed(void);
	Fixed(Fixed const & test);
	~Fixed(void);
	Fixed	&operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
