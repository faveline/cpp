/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:52:40 by faveline          #+#    #+#             */
/*   Updated: 2024/03/26 18:12:37 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	*check_args(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cout << "At least 2 arguments are required.\n";
		throw (std::exception());
	}
	int	i = 0;
	int	j = -1;
	int	*tab = new int[argc - 1];

	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j] || j == 0)
		{
			if (!isdigit(argv[i][j]))
			{
				delete [] tab;
				std::cout << "Only digit accepted.\n";
				throw (std::exception());
			}
		}
		for (int k = i + 1; k < argc; k++)
		{
			if (!strcmp(argv[k], argv[i]))
			{
				delete [] tab;
				std::cout << "No duplicate allowed.\n";
				throw (std::exception());
			}
		} 
		tab[i - 1] = strtod(argv[i], NULL);
		if (tab[i - 1] < 0 || tab[i - 1] > 2147483647)
		{
			delete [] tab;
			std::cout << "Only positive integers are accepted.\n";
			throw (std::exception());
		}
	}
	return (tab);
}

int	main(int argc, char *argv[])
{
	try
	{
		int	*tab = check_args(argc, argv);
		PmergeMe merge;
		merge.alloc_container(argc, tab);
		merge.print_deque(1);
		merge.sort_tab();
		merge.print_deque(2);
		delete [] tab;
	}
	catch(const std::exception& e) {}
	return (0);
}
