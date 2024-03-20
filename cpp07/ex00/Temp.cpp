/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:28:35 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 11:24:37 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Temp.hpp"

Temp::Temp() {}

Temp::Temp(const Temp &Te)
{
	(void)Te;
}

Temp	&Temp::operator=(const Temp &rhs)
{
	(void)rhs;
	return (*this);
}

Temp::~Temp() {}
