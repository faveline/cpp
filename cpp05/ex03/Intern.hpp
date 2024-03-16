/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:09:57 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 16:40:31 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &I);
	Intern	&operator=(const Intern &rhs);
	~Intern();

	AForm	*makeForm(const std::string name, const std::string target);
	class FormNotFound: public std::exception
	{
	public:
		const std::string	errorNotF() const;
	};
};

#endif
