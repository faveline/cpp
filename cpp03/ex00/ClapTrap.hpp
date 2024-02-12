/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:51:51 by faveline          #+#    #+#             */
/*   Updated: 2024/02/12 16:06:01 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_HP;
	int			_EP;
	int			_AD;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &C);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &cpy);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
