/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:36:31 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 15:44:01 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void	draw(Point const a, Point const b, Point const c, Point const point)
{
	for (int j = 9; j >= 0; j--)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i == a.getX().toInt() && j == a.getY().toInt())
				std::cout << "a";
			else if (i == b.getX().toInt() && j == b.getY().toInt())
				std::cout << "b";
			else if (i == c.getX().toInt() && j == c.getY().toInt())
				std::cout << "c";
			else if (i == point.getX().toInt() && j == point.getY().toInt())
				std::cout << "P";
			else
				std::cout << "0";
		}
		std::cout << std::endl;
	}
}

int	main(void)
{
	Point	a(4, 2);
	Point	b(8, 8);
	Point	c(2, 5);
	Point	point(5, 5);

	if (bsp(a, b, c, point) == 0)
		std::cout << "The point is outside the triangle" << std::endl;
	else
		std::cout << "The point is inside the triangle" << std::endl;
	draw(a, b, c, point);
	return (0);
}
