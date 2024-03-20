/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:38:58 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 11:50:02 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

Iter::Iter() {}

Iter::Iter(const Iter &I)
{
	(void)I;
}

Iter	&Iter::operator=(const Iter &rhs)
{
	(void)rhs;
	return (*this);
}

Iter::~Iter() {}
