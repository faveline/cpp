/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:36:31 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 12:52:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a = " << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "max = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min = " << Fixed::min( a, b ) << std::endl;
	
	Fixed c = 6.0f;
	Fixed d = 7.0f;

	if (c != d)
		std::cout << "c * d = " << c * d << std::endl;
	if (c < d)
		std::cout << "c + d = " << c + d << std::endl;
	if (d > c)
		std::cout << "c - d = " << c - d << std::endl;
	if (2 == 2)
		std::cout << "c / d = " << c / d << std::endl;

	return 0;
}