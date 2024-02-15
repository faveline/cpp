/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:28:57 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 13:14:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>

class AMateria
{
protected:
	std::string			_type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &A);
	AMateria &operator=(const AMateria &rhs);
	~AMateria();

	std::string const	&getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
