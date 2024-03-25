/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:43:14 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 12:32:13 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template < typename T>
class MutantStack: public std::stack<T>
{
private:

public:
	MutantStack() {}
	MutantStack(const MutantStack &M) {*this = M;}
	MutantStack	&operator=(const MutantStack &rhs) {
		std::stack<T>::operator=(rhs);
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() {return this->c.begin();}
	iterator	end() {return this->c.end();}
};

#endif
