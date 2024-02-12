/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:09:10 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 13:52:12 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(Point const &P): _x(P.getX()), _y(P.getY()) {}

Point	&Point::operator=(Point const &rhs)
{
	*this = rhs;
	return (*this);
}

Point::~Point() {}

const Fixed	Point::getX(void)const
{
	return (this->_x);
}

const Fixed	Point::getY(void)const
{
	return (this->_y);
}
