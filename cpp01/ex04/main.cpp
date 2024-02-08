/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:04:08 by faveline          #+#    #+#             */
/*   Updated: 2024/02/08 14:32:54 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string	str1 = argv[1];
	std::string	str2 = argv[2];
	std::string	str3 = argv[3];
	Sed	sed(str1 , str2, str3);
	
	sed.getFile();
	sed.createFile();
	return (0);
}
