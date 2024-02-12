/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:52:20 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 15:16:35 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	place(Point	const d1, Point const d2, Point const point)
{
	return (((d2.getX().getRawBits() - d1.getX().getRawBits()) * \
		(point.getY().getRawBits() - d1.getY().getRawBits())) - \
		((d2.getY().getRawBits() - d1.getY().getRawBits()) * \
		(point.getX().getRawBits() - d1.getX().getRawBits())));
}

int check_signe(int a, int b)
{
	if ((a > 0 && b > 0) || (a < 0 && b < 0))
		return (1);
	return (-1);
}

bool	iteration(Point const a, Point const b, Point const c, Point const point)
{
	int pos_point;
	int pos_vertice;

	pos_point = place(a, b, point);
	if (pos_point == 0)
		return (0);
	pos_vertice = place(a, b, c);
	if (check_signe(pos_point, pos_vertice) == -1)
		return (0);
	return (1);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (iteration (a, b, c, point) == 0)
		return (0);
	if (iteration (b, c, a, point) == 0)
		return (0);
	if (iteration (c, a, b, point) == 0)
		return (0);
	return (1);
}
