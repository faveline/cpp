/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:51 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 18:25:59 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon(void);
	Weapon(void);
	std::string	getType(void) const;
	void		setType(std::string type);
};

#endif
