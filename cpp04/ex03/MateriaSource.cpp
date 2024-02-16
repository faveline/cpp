/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:30:48 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 18:42:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_tab[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &M)
{
	*this = M;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
		this->_tab[i] = rhs._tab[i];
	return (*this);
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_tab[i])
			delete this->_tab[i];
	}
}

void	MateriaSource::learnMateria(AMateria *target)
{
	int	i = 0;

	while (i < 4 && this->_tab[i])
		i++;
	if (i == 4)
		return ;
	this->_tab[i] = target;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = 0;

	while (i < 4 && this->_tab[i]->getType() != type)
		i++;
	if (i == 4)
		return (0);
	return (this->_tab[i]->clone());
}
