/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:18 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 15:39:21 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain &B);
	Brain	&operator=(const Brain &rhs);
	~Brain();

	std::string	getIdea();
	void		displayIdea()const;
	void		modifyIdea(std::string idee);
};

#endif
