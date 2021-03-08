# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 11:23:04 by manaccac          #+#    #+#              #
#    Updated: 2021/03/08 09:41:11 by manaccac         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	megaphone
SRC 	=	megaphone.cpp
RM 		=	rm -fclean
C 		=		clang++
FLAGS 	=	-Wall -Wextra -Werror -std=c++98
OBJ 	=	megaphone.o

all: $(NAME)

%.o:%.cpp
	$(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
