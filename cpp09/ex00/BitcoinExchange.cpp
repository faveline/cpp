/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:09:00 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 17:53:41 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int	date_to_nbr(std::string date)
{
	int	nbr;

	nbr = 0;
	nbr += (atoi(date.substr(0, 4).c_str()) - 2009) * 500;
	nbr += (atoi(date.substr(5, 2).c_str()) - 1) * 35;
	nbr += atoi(date.substr(8, 2).c_str());
	return (nbr);
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	data;
	std::string		line;

	data.open("data.csv");
	if (data.fail())
	{
		std::cout << "Error opening file data.\n";
		throw (std::exception());
	}
	while (getline(data, line))
		_map.insert(std::pair<int, std::string>(date_to_nbr(line), line.substr(11).c_str()));
	data.close();
	this->_date = 0;
	this->_value = 0;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &B)
{
	*this = B;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	this->_map = rhs._map;
	this->_date = rhs._date;
	this->_value = rhs._value;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

std::map<int, std::string>	&BitcoinExchange::getterMap()
{
	return (this->_map);
}

void	BitcoinExchange::check_content(std::string line)
{
	char	*ptr;
	double	nbr;
	int		total;

	total = 0;
	nbr	= strtod(line.c_str(), &ptr);
	if (nbr < 2009 || nbr > 2022 || &line.c_str()[4] != ptr || ptr[0] != '-')
	{
		std::cout << "Error: Wrong format for the year: " << line.substr(0, line.find('|')) << std::endl;
		throw (BitcoinExchange::WrongFormat());
	}
	total += (nbr - 2009) * 500;
	ptr++;
	nbr = strtod(ptr, &ptr);
	if (nbr < 1 || nbr > 12 || &line.c_str()[7] != ptr || ptr[0] != '-')
	{
		std::cout << "Error: Wrong format for the month: " << line.substr(0, line.find('|')) << std::endl;
		throw (BitcoinExchange::WrongFormat());
	}
	total += (nbr - 1) * 35;
	ptr++;
	nbr = strtod(ptr, &ptr);
	if (nbr < 1 || nbr > 31 || &line.c_str()[10] != ptr || ptr[0] != ' ' || ptr[1] != '|' || ptr[2] != ' ')
	{
		std::cout << "Error: Wrong format for the day: " << line.substr(0, line.find('|')) << std::endl;
		throw (BitcoinExchange::WrongFormat());
	}
	total += nbr;
	ptr = ptr + 3;
	nbr = strtod(ptr, &ptr);
	if (ptr[0] || nbr < 0 || nbr > 1000)
	{
		std::cout << "Error: Wrong format for the value:" << line.substr(line.find('|') + 1) << std::endl;
		throw (BitcoinExchange::WrongFormat());
	}
	this->_value = nbr;
	this->_date = total;
}

void	BitcoinExchange::print_btc(std::string line)
{
	std::map<int, std::string>::iterator i = this->_map.begin();

	std::cout << "Date: " << line.substr(0, 10) << " -Value: " << this->_value;
	while (i->first <= this->_date && i != this->_map.end())
		i++;
	i--;
	if (i == this->_map.begin())
		i++;
	std::cout << " -Exchange rate: " << i->second;
	std::cout << " -Total: " << this->_value * strtod(i->second.c_str(), NULL) << std::endl;
}

void	BitcoinExchange::printInfile(char *argv[])
{
	std::string		line;
	std::fstream	infile;

	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error opening infile.\n";
		throw (std::exception());
	}
	getline(infile, line);
	while (getline(infile, line))
	{
		try
		{
			this->check_content(line);
			print_btc(line);
		}
		catch(const BitcoinExchange::WrongFormat& e) {}
	}
	infile.close();
}