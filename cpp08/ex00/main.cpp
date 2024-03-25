/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:41:49 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 13:24:00 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main(void)
{
	{	
		int	listint[] = {5, 19, 47, 3, 0, 65, 8881, 4, 47};
		std::list<int> mylist(listint, listint + 9);
		int	toFind;
		int	find;
		
		toFind = 47;
		find = easyfind(mylist, toFind);
		if (find >= 0)
			std::cout << toFind << " first iteration is located at the position " << find << "." << std::endl;

		else
			std::cout << toFind << " has no iteration inside the list." << std::endl;
		
		toFind = 362;
		find = easyfind(mylist, toFind);
		if (find >= 0)
			std::cout << toFind << " first iteration is located at the position " << find << "." << std::endl;

		else
			std::cout << toFind << " has no iteration inside the list." << std::endl;
	}
	{	
		int	listint[] = {5, 19, 47, 3, 0, 65, 8881, 4, 47};
		std::vector<int> mylist(listint, listint + 9);
		int	toFind;
		int	find;
		
		toFind = 47;
		find = easyfind(mylist, toFind);
		if (find >= 0)
			std::cout << toFind << " first iteration is located at the position " << find << "." << std::endl;

		else
			std::cout << toFind << " has no iteration inside the list." << std::endl;
		
		toFind = 362;
		find = easyfind(mylist, toFind);
		if (find >= 0)
			std::cout << toFind << " first iteration is located at the position " << find << "." << std::endl;

		else
			std::cout << toFind << " has no iteration inside the list." << std::endl;
	}
	{	
		int	listint[] = {5, 19, 47, 3, 0, 65, 8881, 4, 47};
		std::deque<int> mylist(listint, listint + 9);
		int	toFind;
		int	find;
		
		toFind = 47;
		find = easyfind(mylist, toFind);
		if (find >= 0)
			std::cout << toFind << " first iteration is located at the position " << find << "." << std::endl;

		else
			std::cout << toFind << " has no iteration inside the list." << std::endl;
		
		toFind = 362;
		find = easyfind(mylist, toFind);
		if (find >= 0)
			std::cout << toFind << " first iteration is located at the position " << find << "." << std::endl;

		else
			std::cout << toFind << " has no iteration inside the list." << std::endl;
	}
	return (0);
}
