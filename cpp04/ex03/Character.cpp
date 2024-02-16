/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:06:06 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 18:38:01 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for(int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	this->_name = "John Doe";
	for(int i = 0; i < 100; i++)
		this->_Gr[i] = NULL;
}

Character::Character(std::string name)
{
	for(int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	this->_name = name;
	for(int i = 0; i < 100; i++)
		this->_Gr[i] = NULL;
}

Character::Character(const Character &C)
{
	int	i = 0;

	while (i < 4 && C._slot[i])
		i++;
	for (int j = 0; j < 4; j++)
	{
		if (j < i)
			this->_slot[j] = C._slot[j]->clone();
		else
			this->_slot[j] = NULL;
	}
	this->_name = C._name;
	for (int j = 0; j < 100; j++)
		this->_Gr[j] = NULL;
}

Character	&Character::operator=(const Character &rhs)
{
	int	j = 0;

	while (j < 4 && this->_slot[j])
	{
		delete this->_slot[j];
		j++;
	}
	j = 0;
	while (j < 4 && rhs._slot[j])
		j++;
	for (int i = 0; i < 4; i++)
	{
		if (i < j)
			this->_slot[i] = rhs._slot[i]->clone();
		else
			this->_slot[i] = NULL;
	}
	this->_name = rhs._name;
	for(int i = 0; i < 100; i++)
		this->_Gr[i] = rhs._Gr[i];
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i])
		{
			delete (this->_slot[i]);
			this->_slot[i] = NULL;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		delete this->_Gr[i];
		this->_slot[i] = NULL;
	}
}

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
		return delete m;
	this->_slot[i] = m;
}

void	Character::unequip(int idx)
{
	int	i = idx;
	int	j = 0;

	if (idx < 0 || idx >= 4)
		return ;
	while (j < 100 && this->_Gr[j])
		j++;
	if (j == 100)
	{
		for (int i = 0; i < 100; i++)
		{
			delete this->_Gr[i];
			this->_Gr[i] = NULL;
		}
		j = 0;
	}
	this->_Gr[j] = this->_slot[idx];
	while (i < 3 && this->_slot[i])
	{
		this->_slot[i] = this->_slot[i + 1];
		i++;
	}
	this->_slot[i] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "not a valid slot" << std::endl;
		return ;
	}
	if (this->_slot[idx])
		this->_slot[idx]->use(target);
	else
		std::cout << "empty slot" << std::endl;
}
