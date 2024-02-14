/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:00:43 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 15:39:58 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_ideas[0] = "Idea = food";
	std::cout << "Constructor called for Brain" << std::endl;
}

Brain::Brain(const Brain &B)
{
	std::cout << "Constructor called for Brain" << std::endl;
	*this = B;
}

Brain	&Brain::operator=(const Brain &cpy)
{
	std::cout << "Constructor called for Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = cpy._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Deconstructor called for Brain" << std::endl;
}

std::string	Brain::getIdea()
{
	return (this->_ideas[0]);
}

void	Brain::displayIdea()const
{
	std::cout << this->_ideas[0] << std::endl;
}

void	Brain::modifyIdea(std::string idee)
{
	this->_ideas[0] = idee;
}
