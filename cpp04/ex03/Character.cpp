/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:06:06 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 14:35:19 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for(int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	this->_name = "John Doe";
}

Character::Character(std::string name)
{
	for(int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	this->_name = name;
}

Character::Character(const Character &C)
{
	*this = C;
}

Character	&Character::operator=(const Character &rhs)
{
	this->_slot = rhs._slot;
	this->_name = rhs._name;
	return (*this);
}

Character::~Character() {}

std::string const	&Character::getName()const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	while (this->_slot[i])
		i++;
	if (i == 4)
		return ;
	this->_slot[i] = m;
}

void	Character::unequip(int idx)
{
	int	i = idx;

	while (i < 3 && this->_slot[i])
	{
		this->_slot[i] = this->_slot[i + 1];
		i++;
	}
	this->_slot[i] == NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	this->_slot[idx].use(target);
}
