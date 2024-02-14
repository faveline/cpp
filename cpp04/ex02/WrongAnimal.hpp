/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:05:17 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 11:17:53 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(std::string	type);
	WrongAnimal(const WrongAnimal &A);
	WrongAnimal		&operator=(const WrongAnimal &rhs);
	virtual ~WrongAnimal();

	std::string		getType()const;
	virtual void	makeSound()const;
};

#endif
