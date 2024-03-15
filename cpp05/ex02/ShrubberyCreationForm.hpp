/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:32:46 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:03:48 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm"

class AForm;

class ShrubberyCreationForm
{
private:
	const std::string	_target;
	const int			_sign;
	const int			_exec;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &S);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	void				execute(Bureaucrat const & executor) const;	
};

#endif
