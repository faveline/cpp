/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:53 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 18:24:17 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		_weap;
public:
	HumanA(std::string name, Weapon weap);
	~HumanA(void);
	void	attack(void);
};

#endif
