/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:13:22 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 16:00:15 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <stdint.h>

typedef struct s_Data
{
	int 	data1;
	char	data2;
}Data;

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &S);
	Serializer	&operator=(const Serializer &rhs);
	~Serializer();
public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
