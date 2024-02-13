/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:36:04 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 16:29:31 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
private:
	std::string	_name;
public:
	DiamondTrap();	
	DiamondTrap(std::string name);	
	DiamondTrap(const DiamondTrap &D);
	DiamondTrap	&operator=(const DiamondTrap &rhs);
	~DiamondTrap();	

	void	attack(const std::string str);
	void	whoAmI();
};

#endif
