/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:38:29 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 12:26:40 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomb;
	int		N = 5;

	zomb = zombieHorde(N, "horde");
	if (!zomb)
		return (1);
	for (int i = 0; i < N; i++)
		zomb[i].announce();
	delete[] zomb;
	return (0);
}
