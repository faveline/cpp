/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:51:48 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 15:43:03 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"
#include <stdlib.h>

ScalarConvertor::ScalarConvertor() {}

ScalarConvertor::ScalarConvertor(const ScalarConvertor &S)
{
	*this = S;
}

ScalarConvertor	&ScalarConvertor::operator=(const ScalarConvertor &S)
{
	(void)S;
	return (*this);
}

ScalarConvertor::~ScalarConvertor() {}

void	ScalarConvertor::convertChar(const std::string toConv)
{
	char	conv;
	int		conv_o;
	char	*end;
	
	conv_o = static_cast<int>(strtod(toConv.c_str(), &end));
	conv = static_cast<char>(strtod(toConv.c_str(), &end));
	if ((!conv && !isdigit(toConv[0]) && conv_o != -2147483648) \
		|| (end[0] && end[0] != 'f' && end[0] != '.'))
		std::cout << "Impossible" << std::endl;
	else if (conv_o == -2147483648 && atol(toConv.c_str()) != -2147483648)
		std::cout << "Overflow" << std::endl;
	else if (isprint(conv))
		std::cout << conv << std::endl;
	else
		std::cout << "Non displayble" << std::endl;
}

void	ScalarConvertor::convertInt(const std::string toConv)
{
	int		conv;
	char	*end;

	conv = static_cast<int>(strtod(toConv.c_str(), &end));
	if ((!conv && !isdigit(toConv[0])) || \
		(end[0] && end[0] != 'f' && end[0] != '.'))
		std::cout << "Impossible" << std::endl;
	else if (conv == -2147483648 && atol(toConv.c_str()) != -2147483648)
		std::cout << "Overflow" << std::endl;
	else
		std::cout << conv << std::endl;
}

void	ScalarConvertor::convertFloat(const std::string toConv)
{
	float	conv;
	char	*end;

	conv = static_cast<float>(strtod(toConv.c_str(), &end));
	if (end[0] && end[0] != 'f')
		std::cout << "Impossible" << std::endl;
	else if (abs(conv) < 1000000 && conv == static_cast<int>(conv))
	 	std::cout << conv << ".0f" << std::endl;
	else
	 	std::cout << conv << "f" << std::endl;
}

void	ScalarConvertor::convertDouble(const std::string toConv)
{
	double	conv;
	char	*end;
	
	conv = static_cast<double>(strtod(toConv.c_str(), &end));
	if (end[0] && end[0] != 'f')
		std::cout << "Impossible" << std::endl;
	else if (abs(conv) < 1000000 && conv == static_cast<int>(conv))
	 	std::cout << conv << ".0" << std::endl;
	else
	 	std::cout << conv << std::endl;
}

void	ScalarConvertor::convert(const std::string toConv)
{
	std::cout << "Value to convert: " << toConv << std::endl;
	std::cout << "char: ";
	convertChar(toConv);
	std::cout << "int: ";
	convertInt(toConv);
	std::cout << "float: ";
	convertFloat(toConv);
	std::cout << "double: ";
	convertDouble(toConv);
	std::cout << std::endl;
}