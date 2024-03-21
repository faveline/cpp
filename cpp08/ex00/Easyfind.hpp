/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:42:11 by faveline          #+#    #+#             */
/*   Updated: 2024/03/21 14:14:54 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <list>

template < class T, class Alloc = std::allocator<T> > class list;
template <typename T>
int	easyfind(T container, int toFind)
{
	int	find = 0;
	
	for (std::list<int>::iterator i=container.begin(); i != container.end(); ++i)
	{	
		if (*i == toFind)
			return (find);
		find++;
	}
	return (-1);
}

#endif
