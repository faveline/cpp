/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:08:42 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 17:55:15 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include <map>

class BitcoinExchange
{
private:
	std::map<int, std::string>	_map;
	int						_date;
	double					_value;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &B);
	BitcoinExchange	&operator=(const BitcoinExchange &rhs);
	~BitcoinExchange();

	std::map<int, std::string>	&getterMap();

	void	check_content(std::string line);
	void	print_btc(std::string line);
	void	printInfile(char *argv[]);
	class	WrongFormat: public std::exception {};
};

# endif
