/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:03:26 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 15:53:09 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point();
	Point(const float x, const float y);
	Point(Point const &P);
	Point	&operator=(Point const &rhs);
	~Point();
	const Fixed	getX(void)const;
	const Fixed	getY(void)const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
