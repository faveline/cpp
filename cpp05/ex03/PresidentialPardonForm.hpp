/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:29:17 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 14:45:07 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class AForm;

class PresidentialPardonForm: public AForm
{
private:
	const std::string	_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &P);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	void					exec(void) const;
};

#endif
