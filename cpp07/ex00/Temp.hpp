/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:28:39 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 11:26:43 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	TEMP_H
# define TEMP_H

# include <iostream>

class Temp
{
private:
	Temp();
	Temp(const Temp &Te);
	Temp	&operator=(const Temp &rhs);
	~Temp();
public:
	template< typename T>
	static void		swap(T &x, T &y)
	{
		T	a;

		a = x;
		x = y;
		y = a;
	}

	template< typename T>
	static T const	&min(T const &x, T const &y)
	{
		if (x < y)
			return (x);
		return (y);	
	}

	template< typename T>
	static T const	&max(T const &x, T const &y)
	{
		if (x > y)
			return (x);
		return (y);	
	}
};


#endif
