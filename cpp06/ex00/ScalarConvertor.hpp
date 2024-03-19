/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:52:18 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 12:41:01 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTOR_H
# define SCALARCONVERTOR_H

# include <iostream>

class ScalarConvertor
{
private:
	static void	convertChar(const std::string toConv);
	static void	convertInt(const std::string toConv);
	static void	convertFloat(const std::string toConv);
	static void	convertDouble(const std::string toConv);

	ScalarConvertor();
	ScalarConvertor(const ScalarConvertor &S);
	ScalarConvertor	&operator=(const ScalarConvertor &rhs);
	~ScalarConvertor();
public:
	static void		convert(const std::string toConv);
};

#endif
