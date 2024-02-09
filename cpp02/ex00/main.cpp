/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:36:31 by faveline          #+#    #+#             */
/*   Updated: 2024/02/09 14:47:59 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed a;
		Fixed b( a );
		Fixed c;
		
		c = b;
		std::cout << a.getRawBits() << std::endl;	
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	{	
		Fixed a;
		a.setRawBits(10);
		Fixed b( a );
		Fixed c;
		
		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;	
		std::cout << c.getRawBits() << std::endl;
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;	
		std::cout << c.getRawBits() << std::endl;
	}
	return 0;
}
