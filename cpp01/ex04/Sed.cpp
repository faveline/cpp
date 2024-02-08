/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:21:57 by faveline          #+#    #+#             */
/*   Updated: 2024/02/08 16:14:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file, std::string s1, std::string s2)
{
	this->_file = file;
	this->_s1 = s1;
	this->_s2 = s2;
	this->_str = "";
}

Sed::~Sed() {}

void	Sed::createFile(void)
{
	std::ofstream	newfile ((this->_file.substr(0, this->_file.size()).append(".replace")).c_str());
	int				i;
	int				j;

	i = 0;
	j = -1;
	while (j != (int)std::string::npos || i == 0)
	{
		j = _str.find(this->_s1.c_str(), j + 1, this->_s1.size());
		if (j != (int)std::string::npos)
		{
			newfile << this->_str.substr(i, j - i);
			newfile << this->_s2;
			i = j + this->_s1.size();
		}
		else
		{
			newfile << this->_str.substr(i);
			i = 1;
		}
	}
	newfile.close();
}

int	Sed::getFile(void)
{
	std::ifstream	myfile;
	char			c;

	myfile.open((this->_file).c_str());
	if (myfile.fail())
	{
		std::cout << "File not valid" << std::endl;
		return (1);
	}
	while (!myfile.eof())
	{
		myfile >> std::noskipws >> c;
		if (!myfile.eof())
			this->_str += c;
	}
	myfile.close();
	return (0);
}
