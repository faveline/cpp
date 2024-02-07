/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:38:29 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 12:28:01 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomb;

	zomb = newZombie("new");
	if (!zomb)
		return (1);
	zomb->announce();	
	randomChump("random");
	delete zomb;
	return (0);
}
