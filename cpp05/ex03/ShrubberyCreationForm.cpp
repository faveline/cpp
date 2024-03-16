/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:35:08 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 15:06:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): \
	AForm("ShrubberyCreation", 145, 137), _target("home") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): \
	AForm("ShrubberyCreation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &P): _target(P._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::exec(void) const
{
	std::ofstream outfile (this->_target.substr(0, this->_target.size()).append("_shrubbery").c_str());
	outfile << "               ,@@@@@@@,"<< std::endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o."<< std::endl;
	outfile << "    ,&&%&%&&%,@@@@@/@@@@@@,8888\\88/8o"<< std::endl;
	outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"<< std::endl;
	outfile << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"<< std::endl;
	outfile << "   %&&%/ %&&%&&@@\\ V /@@' `88\\8 `/88'"<< std::endl;
	outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'"<< std::endl;
	outfile << "       |o|        | |         | |"<< std::endl;
	outfile << "       |.|        | |         | |"<< std::endl;
	outfile << "     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	outfile.close();
}
