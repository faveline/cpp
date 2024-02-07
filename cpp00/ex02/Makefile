# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faveline <faveline@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 10:47:00 by faveline          #+#    #+#              #
#    Updated: 2024/02/06 13:32:33 by faveline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Account 

SRCS		:= tests.cpp Account.class.cpp
OBJ			:= $(SRCS:.cpp=.o)

CXX			:= g++
CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98
RM			:= rm -f

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY:	all clean fclean re
