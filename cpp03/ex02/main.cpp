/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:18:52 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 13:24:34 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("Chris");

	frag.attack("the ceiling");
	frag.highFiveGuys();
	frag.takeDamage(90);
	frag.beRepaired(50);
	frag.beRepaired(50);
	frag.takeDamage(500);
	frag.beRepaired(50);
	frag.highFiveGuys();

	return (0);
}
