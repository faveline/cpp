/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:18:52 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 12:14:46 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Tom");
	ClapTrap	clap2(clap);

	clap2.takeDamage(100000);
	clap.attack("the wall");
	clap.takeDamage(5);
	clap.beRepaired(30);
	clap.attack("the wall");
	clap.attack("the wall");
	clap.takeDamage(7);
	clap.beRepaired(3);
	clap.attack("the wall");
	clap.attack("the wall");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.attack("the wall");
	clap.attack("the wall");
	clap.attack("the wall");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.attack("the wall");
	return (0);
}
