/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:18:52 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 12:22:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("David");
	ClapTrap	clap("Tom");
	ScavTrap	scav2(scav);
	
	scav.attack("the floar");
	scav2.guardGate();
	scav2.beRepaired(50);
	clap.attack("the wall");
	clap.takeDamage(10);
	scav.takeDamage(80);
	scav.beRepaired(50);
	scav.takeDamage(60);
	scav.takeDamage(50);
	scav.attack("the floar");
	scav.guardGate();

	return (0);
}
