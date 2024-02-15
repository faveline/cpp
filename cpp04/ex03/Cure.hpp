/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:49:24 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 14:36:40 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(const Cure &C);
	Cure &operator=(const Cure &rhs);
	~Cure();

	virtual Cure	*clone()const;
	virtual void	use(ICharacter &target);
};

#endif
