/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:57:07 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 12:26:27 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zomb;

	zomb = new (std::nothrow) Zombie[N];
	if (!zomb)
		return (NULL);
	for (int i = 0; i < N; i++)
		(zomb[i]).setName(name);	
	return (zomb);
}
