# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faveline <faveline@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 10:47:00 by faveline          #+#    #+#              #
#    Updated: 2024/03/20 10:43:11 by faveline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Templates

SRCS		:= main.cpp Temp.cpp
OBJ			:= $(SRCS:.cpp=.o)

CXX			:= c++
CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address
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
