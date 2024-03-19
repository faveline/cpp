/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:36:48 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 17:52:57 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*p;
	
	p = Base::generate();
	if (p)
	{
		Base::identify(p);
		Base::identify(*p);
		delete p;
	}
	return (0);
}
