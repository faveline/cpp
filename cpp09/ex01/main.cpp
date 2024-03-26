/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:50:18 by faveline          #+#    #+#             */
/*   Updated: 2024/03/26 15:31:58 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	check_arg(int argc, char *argv[])
{
	char	char_ok[] = {'0','1','2','3','4','5','6','7','8','9','+','-','*','/',' '};
	size_t	j;

	if (argc != 2 || !argv[1][0])
	{
		std::cout << "Wrong number of arguments.\n";
		return (1);
	}
	for (size_t i = 0; argv[1][i]; i++)
	{
		j = -1;
		while (++j < 15)
		{
			if (argv[1][i] == char_ok[j])
				break ;
		}
		if (j == 15)
		{
			std::cout << argv[1][i] << " is a wrong character.\n";
			return (1);
		}
		if (j != 14 && argv[1][i + 1] && argv[1][i + 1] != ' ')
		{
			std::cout << argv[1][i] << argv[1][i + 1] << " is an unvalid number.\n";
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (check_arg(argc, argv))
		return (1);
	try
	{
		RPN	rpn = RPN(argv[1]);
		rpn.doRPN();
	}
	catch(const std::exception& e) {}
	
	return (0);
}
