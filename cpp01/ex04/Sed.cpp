/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:21:57 by faveline          #+#    #+#             */
/*   Updated: 2024/02/08 14:43:51 by faveline         ###   ########.fr       */
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
	std::ofstream	newfile;
	int				i;
	int				j;

	i = 0;
	j = -1;
	while (this->_str[i])
	{
		j = _str.find(this->_s1.c_str(), j + 1, this->_s1.size());
		while (this->_str[i] && i < j)
		{
			newfile << this->_str[i];
			i++;
		}
	}
}

void	Sed::getFile(void)
{
	std::ifstream	myfile;
	char			c;

	myfile.open((this->_file).c_str());
	if (myfile.fail())
	{
		std::cout << "No such file or directory" << std::endl;
		return ;
	}
	while (!myfile.eof())
	{
		myfile >> std::noskipws >> c;
		if (!myfile.eof())
			this->_str += c;
	}
	myfile.close();
}
