/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:25:34 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 12:27:08 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria			*_tab[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &M);
	MateriaSource	&operator=(const MateriaSource &rhs);
	~MateriaSource();
	
	virtual void		learnMateria(AMateria *target);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif
