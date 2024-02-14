/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:28:00 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 15:59:59 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat: public WrongAnimal, public Brain
{
private:
	Brain			*_BrainWCat;
public:
	WrongCat();
	WrongCat(const WrongCat &A);
	WrongCat		&operator=(const WrongCat &rhs);
	~WrongCat();

	virtual void	makeSound()const;
};

#endif
