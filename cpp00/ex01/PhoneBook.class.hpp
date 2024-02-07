/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:16:42 by faveline          #+#    #+#             */
/*   Updated: 2024/02/06 10:50:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string.h>
# include <iostream>
# include "Contact.class.hpp"

class PhoneBook
{
private:
	std::size_t		_i;
	std::size_t		_size;
	Contact			_ctct[8];
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add(void);
	void	search(void);
};

#endif
