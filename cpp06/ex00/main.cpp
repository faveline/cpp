/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:51:21 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 15:43:33 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

int	main(void)
{
	ScalarConvertor::convert("0");
	ScalarConvertor::convert("00000");	
	ScalarConvertor::convert("42");
	ScalarConvertor::convert("4");
	ScalarConvertor::convert("42f");
	ScalarConvertor::convert("42p");
	ScalarConvertor::convert("nan");
	ScalarConvertor::convert("-nan");
	ScalarConvertor::convert("nane");
	ScalarConvertor::convert("-inff");
	ScalarConvertor::convert("inf");
	ScalarConvertor::convert("+inff");
	ScalarConvertor::convert("42.625");
	ScalarConvertor::convert("42.123456789f");
	ScalarConvertor::convert("3.141592");
	ScalarConvertor::convert("42.");
	ScalarConvertor::convert("42.t5");
	ScalarConvertor::convert("42.5c");
	ScalarConvertor::convert("5123456789");
	ScalarConvertor::convert("5123456");
	ScalarConvertor::convert("1000000");
	ScalarConvertor::convert("999999");
	ScalarConvertor::convert("-2147483648");
	ScalarConvertor::convert("-2147483649");
	ScalarConvertor::convert("2147483647");
	ScalarConvertor::convert("2147483648");
	ScalarConvertor::convert("5e+09");
	ScalarConvertor::convert("5e+01");
	ScalarConvertor::convert("5e-05");
	ScalarConvertor::convert("5e-04");
	ScalarConvertor::convert("5e-200");
	ScalarConvertor::convert("5e-400");
	ScalarConvertor::convert("12443813249549135945139745167452974913754913749213745294532415627531291675");
	ScalarConvertor::convert("2e+308");
	
	return (0);
}
