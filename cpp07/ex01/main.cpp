/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:44:28 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 13:41:10 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void)
{
	int			a[5] = {4, 3, 6, 7, 1};	
	std::string	b[3] = {"Hello", "world", "!"};
	float		c[2] = {3.142156, 4.625};
	int			d[5] = {4, 3, 6, 7, 1};

	Iter::iter(a, 5, &Iter::disp);
	Iter::iter(b, 3, &Iter::disp);
	Iter::iter(c, 2, &Iter::disp);
	Iter::iter(d, 5, &Iter::disp);
	
	return (0);
}
