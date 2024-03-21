/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:14:45 by faveline          #+#    #+#             */
/*   Updated: 2024/03/21 18:13:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <list>

class Span
{
private:
	const unsigned int	_Nmax;
	unsigned int		_N;
	std::list<int>		_mylist;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &S);
	Span	&operator=(const Span &rhs);
	~Span();

	void	addNumber(int toAdd);
	void	addNumberMulti(int nbr, int range_min, int range_max);
	void	addNumberIter(int nbr, int range_min, int range_max);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	printList(void) const;
	void	printList(void);
};

#endif
