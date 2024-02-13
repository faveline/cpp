/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:18:52 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 16:49:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diam("John Cena");

	// for (int i = 0; i < 55; i++)
	// 	diam.attack("the door");
	
	diam.whoAmI();
	diam.attack("the door");
	diam.highFiveGuys();
	diam.guardGate();
	diam.takeDamage(50);
	diam.beRepaired(25);
	diam.takeDamage(75);
	diam.whoAmI();
	diam.attack("the door");
	diam.highFiveGuys();
	diam.guardGate();
	return (0);
}
