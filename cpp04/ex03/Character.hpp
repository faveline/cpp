/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:06:06 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 16:08:00 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	AMateria	*_slot[4];
	std::string	_name;
	AMateria	*_Gr[100];
public:
	Character();
	Character(std::string name);
	Character(const Character &C);
	Character	&operator=(const Character &rhs);
	~Character();

	virtual std::string const	&getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif
