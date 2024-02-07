/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:47:11 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 12:27:46 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zomb;
	
	zomb = new (std::nothrow) Zombie;
	if (!zomb)
		return (NULL);
	zomb->setName(name);
	return (zomb);
}
