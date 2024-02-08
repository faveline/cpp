/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:05:03 by faveline          #+#    #+#             */
/*   Updated: 2024/02/08 16:09:04 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <iostream>
# include <fstream>
# include <string>

class Sed
{
private:
	std::string	_file;
	std::string	_s1;
	std::string	_s2;
	std::string	_str;
public:
	Sed(std::string file, std::string s1, std::string s2);
	~Sed(void);
	int		getFile(void);
	void	createFile(void);
};

#endif
