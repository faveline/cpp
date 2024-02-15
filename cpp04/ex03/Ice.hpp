/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:39:38 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 14:36:29 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(const Ice &I);
	Ice	&operator=(const Ice &rhs);
	~Ice();

	virtual Ice*	clone() const;
	virtual void	use(ICharacter &target);
};

#endif
