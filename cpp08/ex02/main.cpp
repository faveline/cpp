/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:43:21 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 12:32:59 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(8);
		mstack.push(737);
		mstack.push(15);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		
		std::cout << mstack.top() << std::endl;
		++it;
		std::cout << mstack.top() << std::endl;
		--it;	
		std::cout << mstack.top() << std::endl;
		

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << s.top() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::list<int>	list;
		
		list.push_back(5);
		list.push_back(17);

		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;

		list.push_back(3);
		list.push_back(8);
		list.push_back(737);
		list.push_back(15);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();

		
		std::cout << list.back() << std::endl;
		++it;
		std::cout << list.back() << std::endl;
		--it;
		std::cout << list.back() << std::endl;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}