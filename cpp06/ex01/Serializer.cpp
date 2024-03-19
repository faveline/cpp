/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:13:23 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 15:50:56 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &S)
{
	(void)S;
}

Serializer	&Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	return (*this);
}

Serializer::~Serializer() {}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*ret;

	ret = reinterpret_cast<Data *>(raw);
	return (ret);
}
