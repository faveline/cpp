/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:34:41 by faveline          #+#    #+#             */
/*   Updated: 2024/02/06 10:51:07 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string.h>
# include <iostream>
# include <stdlib.h>

class Contact
{
private:
	std::string	_first_n;
	std::string	_last_n;
	std::string	_nick_n;	
	std::string	_phone_n;		
	std::string	_dark_s;
public:
	void		setContact(Contact *add);
	std::string	getContactF(Contact ctct) const;
	std::string	getContactL(Contact ctct) const;
	std::string	getContactN(Contact ctct) const;
	std::string	getContactP(Contact ctct) const;
	std::string	getContactD(Contact ctct) const;
};

#endif
