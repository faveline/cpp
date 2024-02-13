/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:51:51 by faveline          #+#    #+#             */
/*   Updated: 2024/02/13 15:50:44 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_HP;
	int			_EP;
	int			_AD;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & C);
	ClapTrap	&operator=(const ClapTrap &cpy);
	~ClapTrap();
	
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	int			getHP();
	int			getEP();
	int			getAD();
};

#endif
