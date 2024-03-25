/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:09:17 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 16:13:56 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments.\n";
		return (1);
	}

	try
	{
		BitcoinExchange	btc;
		std::fstream	infile;

		infile.open(argv[1]);
		if (infile.fail())
		{
			std::cout << "Error opening infile.\n";
			return (1);
		}
		btc.printInfile(argv);
		infile.close();
	}
	catch(const std::exception& e) {}

	return (0);
}
