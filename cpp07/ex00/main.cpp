/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:28:42 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 11:29:09 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Temp.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;

	Temp::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << Temp::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << Temp::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	Temp::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << Temp::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << Temp::max( c, d ) << std::endl;

	double	e = 4.267;
	double	f = 8.149;

	Temp::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << Temp::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << Temp::max( e, f ) << std::endl;


	char	g = 'x';
	char	h = '9';	

	Temp::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << Temp::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << Temp::max( g, h ) << std::endl;

	return (0);
}